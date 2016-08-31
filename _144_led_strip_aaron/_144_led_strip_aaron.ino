#include <Adafruit_NeoPixel.h>

#define PIN 11

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
const int PIXEL_COUNT = 144;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIN, NEO_GRB + NEO_KHZ800);

uint32_t color[] = {
  strip.Color(255, 0, 0),
  strip.Color(255, 128, 0),
  strip.Color(255, 255, 0),
  strip.Color(128, 255, 0),
  strip.Color(0, 255, 0),
  strip.Color(0, 255, 128),
  strip.Color(0, 255, 255),
  strip.Color(0, 128, 255),
  strip.Color(0, 0, 255),
  strip.Color(128, 0, 255),
  strip.Color(255, 0, 255),
  strip.Color(255, 0, 128)
  };
const int COLOR_LENGTH = sizeof(color) / sizeof(color[0]);

const uint32_t BLACK = strip.Color(0, 0, 0);
const uint32_t CYAN = strip.Color(0, 255, 255);

  //  change the speed and delay of tasks
const int CHASE_SPEED = 0;// max 255
const int TETRIS_CHASE_SPEED = 0;// max 255
const int WIPE_SPEED = 0;// max 255
const int THEATRE_CHASE_SPEED = 30;// max 255
const int THEATRE_CHASE_DURATION = 30;
const int THEATRE_CHASE_DISTANCE = 4;
const int COLOR_CHANGE_DELAY = 50;// 1000 = 1 second
const int TWO_COLOR_SPEED = 50;
const int FIVE_COLOR_SPEED = 0;
const int TWELVE_COLOR_SPEED = 50;
const int CENTER_WIPE_SPEED = 0;
const int CENTER_WIPE_DELAY = 0;  //  0 is normal, changes time before next wipe starts
const int CENTER_CHASE_SPEED = 0;
const int BACKGROUND_CHASE_SPEED = 0;
const int RANDOM_STROBE_ON_TIME = (random(1,50));
const int RANDOM_STROBE_WAIT = (random(1,200));
// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  setPixelSet(CYAN, 1, 0);
  delay(COLOR_CHANGE_DELAY);
  strip.show();
  
  chase();
  tetrisChase();
  wipe();
  theatreChase();
  colorChange();
  twoColor();
  twelveColor();
  
  centerWipe();
  centerChase();
  backgroundChase();
  randomStrobe();
  rainbow(10);
  rainbowCycle(0);
  theaterChaseRainbow(50);
}

void tetrisChase() {
   for (int j = 0; j < COLOR_LENGTH; j++) {
    fillChase(color[j], TETRIS_CHASE_SPEED);
  }
}

void theaterChaseRainbow(uint8_t wait) {
  for (int j = 0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q = 0; q < 3; q++) {
      for (int i = 0; i < PIXEL_COUNT; i = i+3) {
        strip.setPixelColor(i + q, Wheel((i+j) % 255));    //turn every third pixel on
      }
      strip.show();
      delay(wait);
      for (int i = 0; i < PIXEL_COUNT; i = i+3) {
        strip.setPixelColor(i + q, 0);        //turn every third pixel off
      }
    }
  }
}

void theatreChase() {
	for (int repeats = 0; repeats < 2; repeats++) {
		for (int i = 0; i < COLOR_LENGTH; i++) {
			tChase(color[i], THEATRE_CHASE_SPEED);
		}
  }
}

void randomStrobe() {
	int pixel;
	for (int i = 0; i < 32; i++) {
		for (int j = 0; j < 4; j++) {
			pixel = random(0, PIXEL_COUNT - 1) + 1;
			strip.setPixelColor(pixel - 1, color[j]);
			strip.setPixelColor(pixel, color[j]);
			strip.setPixelColor(pixel + 1, color[j]);
			strip.show();
			delay(RANDOM_STROBE_ON_TIME);
			setPixelSet(BLACK, 1, 0);
			strip.show();
			delay(RANDOM_STROBE_WAIT);
		}
  }
}

void backgroundChase() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j != i) {
        backgroundChaseSetup(color[j], color[i], BACKGROUND_CHASE_SPEED);
      }
    }
  }
}

void backgroundChaseSetup(uint32_t fg, uint32_t bg, uint8_t wait) {
  for (int i = 0; i < PIXEL_COUNT; i++) {
    strip.setPixelColor(i, bg); // turn all pixels to background color
  }
  
  for (int i = 0; i < PIXEL_COUNT; i++) {
      strip.setPixelColor(i, fg);
      if (i == 0) {
        strip.setPixelColor(PIXEL_COUNT-1, bg);
      } else {
        strip.setPixelColor(i-2, bg);
      }
      strip.show();
      delay(wait);
  }
}
   

void centerChase() {
  for (int j = 1; j <= 4; j++) {
    for (int repeat = 0; repeat < 2; repeat++) {
      for (int i = PIXEL_COUNT / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
        strip.setPixelColor(i, color[j]);     // left pixel
        strip.setPixelColor(i + 1, color[j-1]); // left pixel
        strip.setPixelColor(PIXEL_COUNT - 1 - i, color[j]); // right pixel
        if (i < 71) {
          strip.setPixelColor(PIXEL_COUNT - 2 - i, color[j-1]); // right pixel
        }
        strip.show();
        delay(CENTER_CHASE_SPEED);
      }
    }
  }
}



void centerWipe() {
    for (int j = 0; j < COLOR_LENGTH; j++) {
      for (int i = PIXEL_COUNT / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
        strip.setPixelColor(i, color[j]); // left pixel
        strip.setPixelColor(PIXEL_COUNT - 1 - i, color[j]); // right pixel
        strip.show();
        delay(CENTER_WIPE_SPEED);
      }
      delay(CENTER_WIPE_DELAY);
    }
}

void wipe() {
  for (int i = 0; i < COLOR_LENGTH; i++) {
    colorWipe(color[i], WIPE_SPEED);
  }
}



void colorChange() {
  for (int j = 0; j < 21; j++) {
    for (int i = 0; i < COLOR_LENGTH; i++) {
      setPixelSet(color[i], 1, 0);
      delay(COLOR_CHANGE_DELAY);
      strip.show();
    }
  }
}


void chase() {
  for (int i = 0; i < COLOR_LENGTH; i++) {
    colorChase(color[i], CHASE_SPEED);
  }
}


void twoColor() {
  for (int i = 0; i < COLOR_LENGTH; i++) {
    switchColor(i, i++);
  }
  switchColor(COLOR_LENGTH, 0);
}

void switchColor(int first, int second) {
  for (int i = 0; i < 21; i++) {
    setPixelSet(color[first], 2, 0);
    setPixelSet(color[second], 2, 1);
    delay(TWO_COLOR_SPEED);
    strip.show ();
    setPixelSet(color[second], 2, 0);
    setPixelSet(color[first], 2, 1);
    delay(TWO_COLOR_SPEED);
    strip.show ();
   }
}

void twelveColor() {
   for (int repeat = 0; repeat < 21; repeat++) {
    for (int i = 0; i < COLOR_LENGTH; i++) {
      for (int j = 0; j < COLOR_LENGTH; j++) {
        setPixelSet(color[(j + i) % 12], COLOR_LENGTH, (j + i) % 12);
      }
      delay(TWELVE_COLOR_SPEED);
      strip.show();
    }
  }
}


void fillChase(uint32_t c, uint8_t wait) {
  for (int t = PIXEL_COUNT; t >= 0; t--) {
    // Start by turning all pixels off:
    for(int i = 0; i < t; i++) {
      strip.setPixelColor(i, 0);
    }
    // Then display one pixel at a time:
    for(int i = 0; i < t; i++) {
      strip.setPixelColor(i, c); // Set new pixel 'on'
      strip.show();              // Refresh LED states
      strip.setPixelColor(i - 1, 0); // Erase pixel, but don't refresh!
      delay(wait);
    }
    strip.show(); // Refresh to turn off last pixel
  }
}

//Pixelodd Pixel(color, 2, 1)
//PixelAll Pixel(color, 1, 0)
//Pixeleven Pixel(color, 2, 0)
void setPixelSet(uint32_t color, int mod, int whichPixel) {
  for (int j = 0; j < PIXEL_COUNT; j++) {
    if(j % mod == whichPixel) {
      strip.setPixelColor(j, color);
    }
  }
}

void rainbow(uint8_t wait) {
  for(int j = 0; j < 256; j++) {
    for(int i = 0; i < PIXEL_COUNT; i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}


// Slightly different, this one makes the rainbow wheel equally distributed 
// along the chain
void rainbowCycle(uint8_t wait) {
  for(uint16_t j = 0; j < 256*5; j++) { // 5 cycles of all colors on wheel
    for(uint16_t i = 0; i < PIXEL_COUNT; i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / PIXEL_COUNT) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Fill the dots progressively along the strip.
void colorWipe(uint32_t c, uint8_t wait) {
  for (int i = 0; i < PIXEL_COUNT; i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

// Chase one dot down the full strip.
void colorChase(uint32_t c, uint8_t wait) {
  // Start by turning all pixels off:
  for(int i = 0; i < PIXEL_COUNT; i++) {
    strip.setPixelColor(i, 0);
  }

  // Then display one pixel at a time:
  for(int i = 0; i < PIXEL_COUNT; i++) {
    strip.setPixelColor(i, c); // Set new pixel 'on'
    strip.show();              // Refresh LED states
    strip.setPixelColor(i, 0); // Erase pixel, but don't refresh!
    delay(wait);
  }

  strip.show(); // Refresh to turn off last pixel
}

void tChase(uint32_t c, uint8_t wait) {
  for (int j = 0; j<THEATRE_CHASE_DURATION; j++) {  //do 10 cycles of chasing
    for (int q = 0; q < THEATRE_CHASE_DISTANCE; q++) {
      for (int i = 0; i < PIXEL_COUNT; i = i + THEATRE_CHASE_DISTANCE) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i = 0; i < PIXEL_COUNT; i = i + THEATRE_CHASE_DISTANCE) {
        strip.setPixelColor(i + q, 0);        //turn every third pixel off
      }
    }
  }
}

/* Helper functions */

//Input a value 0 to 384 to get a color value.
//The colours are a transition r - g -b - back to r


uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if(WheelPos < 170) {
    WheelPos -= 85;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}
