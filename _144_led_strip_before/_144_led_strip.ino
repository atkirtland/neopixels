#include <Adafruit_NeoPixel.h>

#define PIN 11

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(144, PIN, NEO_GRB + NEO_KHZ800);

int colorred [3] = {32,0,0};
int colorgreen [3] = {0,1,0};
int colorblue [3] = {0,0,1};
int coloreven [3] = {1,0,0};
int colorodd [3] = {0,1,0};
int colorone [3] = { 255,0,0 };  //  colorone[0],colorone[1],colorone[2]
int colortwo[3] = { 255,128,0 };  //  colortwo[0],colortwo[1],colortwo[2]
int colorthree[3] = {255,255,0 };  //  colorthree[0],colorthree[1],colorthree[2]
int colorfour[3] = { 128,255,0 };  //  colorfour[0],colorfour[1],colorfour[2]
int colorfive[3] = { 0,255,0 };  //  colorfive[0],colorfive[1],colorfive[2]
int colorsix[3] = { 0,255,128 };  //  colorsix[0],colorsix[1],colorsix[2]
int colorseven[3] = {0 ,255 ,255 };  //  colorseven[0],colorseven[1],colorseven[2]
int coloreight[3] = { 0, 128,255 };  //  coloreight[0],coloreight[1],coloreight[2]
int colornine[3] = {0 ,0 ,255 };  //  colornine[0],colornine[1],colornine[2]
int colorten[3] = {128 ,0 ,255 };  //  colorten[0],colorten[1],colorten[2]
int coloreleven[3] = {255 ,0 ,255 };  //  coloreleven[0],coloreleven[1],coloreleven[2]
int colortwelve[3] = { 255,0 ,128 };  //  colortwelve[0],colortwelve[1],colortwelve[2]
int colorchangeone[3] = {127,0,0};  //  colorchangeone[0],colorchangeone[1],colorchangeone[2]
int colorchangetwo[3] = {0,127,0};  //  colorchangetwo[0],colorchangetwo[1],colorchangetwo[2]
int centerwipeone[3] = {127,0,0};  //  centerwipeone[0],centerwipeone[1],centerwipeone[2]
int centerwipetwo[3] =  {0,127,0};  //  centerwipetwo[0],centerwipetwo[1],centerwipetwo[2]
int centerchaseonebackground[3] = {colorone[0],colorone[1],colorone[2]};  //  centerchaseonebackground[0],centerchaseonebackground[1],centerchaseonebackground[2]
int centerchaseonerunning[3] = {colortwo[0],colortwo[1],colortwo[2]};  //  centerchaseonerunning[0],centerchaseonerunning[1],centerchaseonerunning[2]
int centerchasetwobackground[3] = {colortwo[0],colortwo[1],colortwo[2]};  //  centerchasetwobackground[0],centerchasetwobackground[1],centerchasetwobackground[2]
int centerchasetworunning[3] = {colorthree[0],colorthree[1],colorthree[2]};  //  centerchasetworunning[0],centerchasetworunning[1],centerchasetworunning[2]
int centerchasethreebackground[3] = {colorthree[0],colorthree[1],colorthree[2]};  //  centerchasethreebackground[0],centerchasethreebackground[1],centerchasethreebackground[2]
int centerchasethreerunning[3] = {colorfour[0],colorfour[1],colorfour[2]};  //  centerchasethreerunning[0],centerchasethreerunning[1],centerchasethreerunning[2]
int centerchasefourbackground[3] = {colorfour[0],colorfour[1],colorfour[2]};  //  centerchasefourbackground[0],centerchasefourbackground[1],centerchasefourbackground[2]
int centerchasefourrunning[3] = {colorone[0],colorone[1],colorone[2]};  //  centerchasefourrunning[0],centerchasefourrunning[1],centerchasefourrunning[2]
//int centerchasefivebackground[3] = {colorfive[0],colorfive[1],colorfive[2]};  //  centerchasefivebackground[0],centerchasefivebackground[1],centerchasefivebackground[2]
//int centerchasefiverunning[3] = {colorone[0],colorone[1],colorone[2]};  //  centerchasefiverunning[0],centerchasefiverunning[1],centerchasefiverunning[2]
  //  change the speed and delay of tasks
int chasespeed = {0};// max 255
int tetrischasespeed = {0};// max 255
int wipespeed = {0};// max 255
int theatreChasespeed = {30};// max 255
int theatreChaseduration = {30};
int theatreChasedistance = {4};
int ColorChangedelay = {50};// 1000 = 1 second
int twocolorspeed = {50};
int fivecolorspeed = {0};
int twelvecolorspeed = {50};
int CenterWipeSpeed = (0);
int CenterWipeDelay = (0);  //  0 is normal, changes time before next wipe starts
int CenterChaseSpeed = (20);
int backgroundchasespeed = (0);
int randomstrobeontime = (random(1,50));
int randomstrobewait = (random(1,200));
// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
 // PixelAll(strip.Color(0,255,255));
//delay (ColorChangedelay);
//strip.show();


//Chase (0);
//tetrisChase (0);
//Wipe (0);
//theatreChase (0);
//ColorChange (0);
//twocolor (0);
twelvecolor (0);
                    //fourcolor (0);
//CenterWipe (0);
//CenterChase (0);
//Backgroundchase (0);
//RandomStrobe (0);
//rainbow(10);
//rainbowCycle(0);
//theaterChaseRainbow(50);


}

void tetrisChase(uint32_t color1)
{int j;
  for (j=0; j < 1; j++)
  {
FillChase(strip.Color(colorone[0],colorone[1],colorone[2]), tetrischasespeed); // Red
FillChase(strip.Color(colortwo[0],colortwo[1],colortwo[2]), tetrischasespeed); // 
FillChase(strip.Color(colorthree[0],colorthree[1],colorthree[2]), tetrischasespeed); // Yellow
FillChase(strip.Color(colorfour[0],colorfour[1],colorfour[2]), tetrischasespeed); // 
FillChase(strip.Color(colorfive[0],colorfive[1],colorfive[2]), tetrischasespeed); // Red
FillChase(strip.Color(colorsix[0],colorsix[1],colorsix[2]), tetrischasespeed); // 
FillChase(strip.Color(colorseven[0],colorseven[1],colorseven[2]), tetrischasespeed); // Yellow
FillChase(strip.Color(coloreight[0],coloreight[1],coloreight[2]), tetrischasespeed); // 
FillChase(strip.Color(colornine[0],colornine[1],colornine[2]), tetrischasespeed); // Red
FillChase(strip.Color(colorten[0],colorten[1],colorten[2]), tetrischasespeed); // 
FillChase(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]), tetrischasespeed); // Yellow
FillChase(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]), tetrischasespeed); // 

  }
}

void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
        }
        strip.show();
       
        delay(wait);
       
        for (int i=0; i < strip.numPixels(); i=i+3) {
          strip.setPixelColor(i+q, 0);        //turn every third pixel off
        }
    }
  }
}

void theatreChase(uint32_t color1)
{int j;
   for (j=0; j < 2; j++)
   {
tChase(strip.Color(colorone[0],colorone[1],colorone[2]), theatreChasespeed);
tChase(strip.Color(colortwo[0],colortwo[1],colortwo[2]), theatreChasespeed);
tChase(strip.Color(colorthree[0],colorthree[1],colorthree[2]), theatreChasespeed);
tChase(strip.Color(colorfour[0],colorfour[1],colorfour[2]), theatreChasespeed);
tChase(strip.Color(colorfive[0],colorfive[1],colorfive[2]), theatreChasespeed);
tChase(strip.Color(colorsix[0],colorsix[1],colorsix[2]), theatreChasespeed);
tChase(strip.Color(colorseven[0],colorseven[1],colorseven[2]), theatreChasespeed);
tChase(strip.Color(coloreight[0],coloreight[1],coloreight[2]), theatreChasespeed);
tChase(strip.Color(colornine[0],colornine[1],colornine[2]), theatreChasespeed);
tChase(strip.Color(colorten[0],colorten[1],colorten[2]), theatreChasespeed);
tChase(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]), theatreChasespeed);
tChase(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]), theatreChasespeed);
   }
}

void RandomStrobe(uint32_t color1)
{int j;
   for (j=0; j < 32; j++)
   {
     //for(int j=0; j < random(100,200); j++ ) {
    int i = random(0,strip.numPixels()-1)+1 ;
    strip.setPixelColor(i-1, colorone[0],colorone[1],colorone[2]);
    strip.setPixelColor(i, colorone[0],colorone[1],colorone[2]);
    strip.setPixelColor(i+1, colorone[0],colorone[1],colorone[2]);
    strip.show();
    delay(randomstrobeontime);
    PixelAll(strip.Color(0,0,0));
    strip.show();
    delay(randomstrobewait);
    
    i = random(0,strip.numPixels()-1)+1 ;
    strip.setPixelColor(i-1, colortwo[0],colortwo[1],colortwo[2]);
    strip.setPixelColor(i, colortwo[0],colortwo[1],colortwo[2]);
    strip.setPixelColor(i+1, colortwo[0],colortwo[1],colortwo[2]);
    strip.show();
    delay(randomstrobeontime);
    PixelAll(strip.Color(0,0,0));
    strip.show();
    delay(randomstrobewait);

     i = random(0,strip.numPixels()-1)+1 ;
    strip.setPixelColor(i-1, colorthree[0],colorthree[1],colorthree[2]);
    strip.setPixelColor(i, colorthree[0],colorthree[1],colorthree[2]);
    strip.setPixelColor(i+1, colorthree[0],colorthree[1],colorthree[2]);
    strip.show();
    delay(randomstrobeontime);
   PixelAll(strip.Color(0,0,0));
    strip.show();
    delay(randomstrobewait);
    
    i = random(0,strip.numPixels()-1)+1 ;
    strip.setPixelColor(i-1, colorfour[0],colorfour[1],colorfour[2]);
    strip.setPixelColor(i, colorfour[0],colorfour[1],colorfour[2]);
    strip.setPixelColor(i+1, colorfour[0],colorfour[1],colorfour[2]);
    strip.show();
    delay(randomstrobeontime);
    PixelAll(strip.Color(0,0,0));
    strip.show();
    delay(randomstrobewait);
    // }
   }
}

void Backgroundchase(uint32_t color1) 
 {int j;
   for (j=0; j < 1; j++)
   {
     backgroundchasesetup(strip.Color(colortwo[0],colortwo[1],colortwo[2]), strip.Color(colorone[0],colorone[1],colorone[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorthree[0],colorthree[1],colorthree[2]), strip.Color(colorone[0],colorone[1],colorone[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorfour[0],colorfour[1],colorfour[2]), strip.Color(colorone[0],colorone[1],colorone[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorfive[0],colorfive[1],colorfive[2]), strip.Color(colorone[0],colorone[1],colorone[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorone[0],colorone[1],colorone[2]), strip.Color(colortwo[0],colortwo[1],colortwo[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorthree[0],colorthree[1],colorthree[2]), strip.Color(colortwo[0],colortwo[1],colortwo[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorfour[0],colorfour[1],colorfour[2]), strip.Color(colortwo[0],colortwo[1],colortwo[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorfive[0],colorfive[1],colorfive[2]), strip.Color(colortwo[0],colortwo[1],colortwo[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorone[0],colorone[1],colorone[2]), strip.Color(colorthree[0],colorthree[1],colorthree[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colortwo[0],colortwo[1],colortwo[2]), strip.Color(colorthree[0],colorthree[1],colorthree[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorfour[0],colorfour[1],colorfour[2]), strip.Color(colorthree[0],colorthree[1],colorthree[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorfive[0],colorfive[1],colorfive[2]), strip.Color(colorthree[0],colorthree[1],colorthree[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorone[0],colorone[1],colorone[2]), strip.Color(colorfour[0],colorfour[1],colorfour[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colortwo[0],colortwo[1],colortwo[2]), strip.Color(colorfour[0],colorfour[1],colorfour[2]), backgroundchasespeed);
     backgroundchasesetup(strip.Color(colorthree[0],colorthree[1],colorthree[2]), strip.Color(colorfour[0],colorfour[1],colorfour[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorfive[0],colorfive[1],colorfive[2]), strip.Color(colorfour[0],colorfour[1],colorfour[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorone[0],colorone[1],colorone[2]), strip.Color(colorfive[0],colorfive[1],colorfive[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colortwo[0],colortwo[1],colortwo[2]), strip.Color(colorfive[0],colorfive[1],colorfive[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorthree[0],colorthree[1],colorthree[2]), strip.Color(colorfive[0],colorfive[1],colorfive[2]), backgroundchasespeed);
     //backgroundchasesetup(strip.Color(colorfour[0],colorfour[1],colorfour[2]), strip.Color(colorfive[0],colorfive[1],colorfive[2]), backgroundchasespeed);
     
   
} 
}

void backgroundchasesetup(uint32_t fg, uint32_t bg, uint8_t wait) 
{int j;
   for (j=0; j < 1; j++)
   {
  int i;
  
  for (i=0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, bg); // turn all pixels to background color
  }
  
  for (i=0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, fg);
      if (i == 0) {
        strip.setPixelColor(strip.numPixels()-1, bg);
      } else {
        strip.setPixelColor(i-2, bg);
      }
      strip.show();
      delay(wait);
  }
}
}
   

void CenterChase(uint32_t color1)
{int j;
   for (j=0; j < 1; j++)
{
  int i;
  uint32_t c;
  uint32_t b;

  c = strip.Color(centerchaseonerunning[0],centerchaseonerunning[1],centerchaseonerunning[2]); // green - running color
  b = strip.Color(centerchaseonebackground[0],centerchaseonebackground[1],centerchaseonebackground[2]);     // red - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
    c = strip.Color(centerchaseonerunning[0],centerchaseonerunning[1],centerchaseonerunning[2]); // green - running color
  b = strip.Color(centerchaseonebackground[0],centerchaseonebackground[1],centerchaseonebackground[2]);     // red - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }

  c = strip.Color(centerchasetworunning[0],centerchasetworunning[1],centerchasetworunning[2]); // red - running color
  b = strip.Color(centerchasetwobackground[0],centerchasetwobackground[1],centerchasetwobackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
c = strip.Color(centerchasetworunning[0],centerchasetworunning[1],centerchasetworunning[2]); // red - running color
  b = strip.Color(centerchasetwobackground[0],centerchasetwobackground[1],centerchasetwobackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
  
  
    c = strip.Color(centerchasethreerunning[0],centerchasethreerunning[1],centerchasethreerunning[2]); // red - running color
  b = strip.Color(centerchasethreebackground[0],centerchasethreebackground[1],centerchasethreebackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
c = strip.Color(centerchasethreerunning[0],centerchasethreerunning[1],centerchasethreerunning[2]); // red - running color
  b = strip.Color(centerchasethreebackground[0],centerchasethreebackground[1],centerchasethreebackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
   c = strip.Color(centerchasefourrunning[0],centerchasefourrunning[1],centerchasefourrunning[2]); // red - running color
  b = strip.Color(centerchasefourbackground[0],centerchasefourbackground[1],centerchasefourbackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
c = strip.Color(centerchasefourrunning[0],centerchasefourrunning[1],centerchasefourrunning[2]); // red - running color
  b = strip.Color(centerchasefourbackground[0],centerchasefourbackground[1],centerchasefourbackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 71) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
/*   c = strip.Color(centerchasefiverunning[0],centerchasefiverunning[1],centerchasefiverunning[2]); // red - running color
  b = strip.Color(centerchasefivebackground[0],centerchasefivebackground[1],centerchasefivebackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 15) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
c = strip.Color(centerchasethreerunning[0],centerchasethreerunning[1],centerchasethreerunning[2]); // red - running color
  b = strip.Color(centerchasefivebackground[0],centerchasefivebackground[1],centerchasefivebackground[2]);     // green - background color
  
  for (i=strip.numPixels() / 2 - 1; i >= -1; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c);     // left pixel
    strip.setPixelColor(i + 1, b); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
  if (i < 15) strip.setPixelColor(strip.numPixels() - 2 - i, b); // right pixel
    strip.show();
    delay(CenterChaseSpeed);
  }
  */
}
}



void CenterWipe(uint32_t color1)
{int j;
   for (j=0; j < 1; j++)
{int i;
  uint32_t c;
  {
   
    c = strip.Color(colorone[0],colorone[1],colorone[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
      c = strip.Color(colortwo[0],colortwo[1],colortwo[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
  c = strip.Color(colorthree[0],colorthree[1],colorthree[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
  c = strip.Color(colorfour[0],colorfour[1],colorfour[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(colorfive[0],colorfive[1],colorfive[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(colorsix[0],colorsix[1],colorsix[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(colorseven[0],colorseven[1],colorseven[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(coloreight[0],coloreight[1],coloreight[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(colornine[0],colornine[1],colornine[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(colorten[0],colorten[1],colorten[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
    c = strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
/*  c = strip.Color(colorfive[0],colorfive[1],colorfive[2]);
  for (i=strip.numPixels() / 2 - 1; i >= 0; i--) { // half of strip, count down to 0
    strip.setPixelColor(i, c); // left pixel
    strip.setPixelColor(strip.numPixels() - 1 - i, c); // right pixel
    strip.show();
    delay(CenterWipeSpeed);
  }
  delay (CenterWipeDelay);
  */
  }
}
}




void Wipe(uint32_t color1)
{int j;
   for (j=0; j < 1; j++)
  {
  // Fill the entire strip with...
colorWipe(strip.Color(colorone[0],colorone[1],colorone[2]), wipespeed);  // Red
colorWipe(strip.Color(colortwo[0],colortwo[1],colortwo[2]), wipespeed); 
colorWipe(strip.Color(colorthree[0],colorthree[1],colorthree[2]), wipespeed);  // Yellow 
colorWipe(strip.Color(colorfour[0],colorfour[1],colorfour[2]), wipespeed);  // 
colorWipe(strip.Color(colorfive[0],colorfive[1],colorfive[2]), wipespeed);  // 
colorWipe(strip.Color(colorsix[0],colorsix[1],colorsix[2]), wipespeed);  // 
colorWipe(strip.Color(colorseven[0],colorseven[1],colorseven[2]), wipespeed);  // 
colorWipe(strip.Color(coloreight[0],coloreight[1],coloreight[2]), wipespeed);  // 
colorWipe(strip.Color(colornine[0],colornine[1],colornine[2]), wipespeed);  // Blue
colorWipe(strip.Color(colorten[0],colorten[1],colorten[2]), wipespeed);  // 
colorWipe(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]), wipespeed);  // 
colorWipe(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]), wipespeed);  // 
/*
colorWipe(strip.Color(127,   127,   127), wipespeed);  // White
colorWipe(strip.Color(69, 34, 9), wipespeed);  // Brown
*/
  }
}



void ColorChange(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
PixelAll(strip.Color(colorone[0],colorone[1],colorone[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colortwo[0],colortwo[1],colortwo[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colorthree[0],colorthree[1],colorthree[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colorfour[0],colorfour[1],colorfour[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colorfive[0],colorfive[1],colorfive[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colorsix[0],colorsix[1],colorsix[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colorseven[0],colorseven[1],colorseven[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(coloreight[0],coloreight[1],coloreight[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colornine[0],colornine[1],colornine[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colorten[0],colorten[1],colorten[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));
delay (ColorChangedelay);
strip.show();
PixelAll(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));
delay (ColorChangedelay);
strip.show();
  }
}


void Chase(uint32_t color1)
{int j;
  for (j=0; j < 1; j++)
  {
    colorChase(strip.Color(colorone[0],colorone[1],colorone[2]), chasespeed); // Red
colorChase(strip.Color(colortwo[0],colortwo[1],colortwo[2]), chasespeed); // 
colorChase(strip.Color(colorthree[0],colorthree[1],colorthree[2]), chasespeed); // Yellow
colorChase(strip.Color(colorfour[0],colorfour[1],colorfour[2]), chasespeed); // 
colorChase(strip.Color(colorfive[0],colorfive[1],colorfive[2]), chasespeed); // 
colorChase(strip.Color(colorsix[0],colorsix[1],colorsix[2]), chasespeed); // 
colorChase(strip.Color(colorseven[0],colorseven[1],colorseven[2]), chasespeed); // 
colorChase(strip.Color(coloreight[0],coloreight[1],coloreight[2]), chasespeed); // 
colorChase(strip.Color(colornine[0],colornine[1],colornine[2]), chasespeed); // Blue
colorChase(strip.Color(colorten[0],colorten[1],colorten[2]), chasespeed); // 
colorChase(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]), chasespeed); // 
colorChase(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]), chasespeed); //
/* 
colorChase(strip.Color(127,127,127), chasespeed); // White
colorChase(strip.Color(69, 34, 9), chasespeed); // Brown
*/
  }
}


void twocolor(uint32_t color1)
{int j;
   for (j=0; j < 1; j++)
  {
twocoloronetwo (0);
twocolortwothree (0);
twocolorthreefour (0);
twocolorfourfive (0);
twocolorfivesix (0);
twocolorsixseven (0);
twocolorseveneight (0);
twocoloreightnine (0);
twocolornineten (0);
twocolorteneleven (0);
twocoloreleventwelve (0);
twocolortwelveone (0);
  }
}

void twocoloronetwo(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorone[0],colorone[1],colorone[2]));  //  Red
Pixelodd(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  //  Green
Pixelodd(strip.Color(colorone[0],colorone[1],colorone[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}

void twocolortwothree(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  //  Red
Pixelodd(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  //  Green
Pixelodd(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocolorthreefour(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  //  Red
Pixelodd(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  //  Green
Pixelodd(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocolorfourfive(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  //  Red
Pixelodd(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  //  Green
Pixelodd(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}
void twocolorfivesix(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  //  Red
Pixelodd(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  //  Green
Pixelodd(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}
void twocolorsixseven(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  //  Red
Pixelodd(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  //  Green
Pixelodd(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}
void twocolorseveneight(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  //  Red
Pixelodd(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  //  Green
Pixelodd(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocoloreightnine(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  //  Red
Pixelodd(strip.Color(colornine[0],colornine[1],colornine[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colornine[0],colornine[1],colornine[2]));  //  Green
Pixelodd(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocolornineten(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colornine[0],colornine[1],colornine[2]));  //  Red
Pixelodd(strip.Color(colorten[0],colorten[1],colorten[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorten[0],colorten[1],colorten[2]));  //  Green
Pixelodd(strip.Color(colornine[0],colornine[1],colornine[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocolorteneleven(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colorten[0],colorten[1],colorten[2]));  //  Red
Pixelodd(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  //  Green
Pixelodd(strip.Color(colorten[0],colorten[1],colorten[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocoloreleventwelve(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  //  Red
Pixelodd(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  //  Green
Pixelodd(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}void twocolortwelveone(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
Pixeleven(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  //  Red
Pixelodd(strip.Color(colorone[0],colorone[1],colorone[2]));  //  Green
delay(twocolorspeed);
strip.show ();
Pixeleven(strip.Color(colorone[0],colorone[1],colorone[2]));  //  Green
Pixelodd(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  //  Red
delay(twocolorspeed);
strip.show ();
  }
}


/*void fourcolor(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
    Pixel1(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel2(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel3(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel4(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
//Pixel5(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue

   delay(fivecolorspeed);
    strip.show();
Pixel2(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel3(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel4(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
//Pixel5(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel1(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue

   delay(fivecolorspeed);
    strip.show();
    Pixel3(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel4(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
//Pixel5(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel1(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel2(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue

   delay(fivecolorspeed);
    strip.show();
    Pixel4(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
//Pixel5(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel1(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Blue
Pixel2(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel3(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue

   delay(fivecolorspeed);
    strip.show();

//    Pixel5(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel1(strip.Color(colorone[0],colorone[1],colorone[2]));  // Green
Pixel2(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Blue
Pixel3(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel4(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue

   delay(fivecolorspeed);
    strip.show();
    
  }
}*/
void twelvecolor(uint32_t color1)
{int j;
   for (j=0; j < 21; j++)
  {
    Pixel1(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel2(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel3(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel4(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel5(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel6(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel7(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel8(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel9(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel10(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel11(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel12(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
Pixel2(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel3(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel4(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel5(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel6(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel7(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel8(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel9(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel10(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel11(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel12(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel1(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel3(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel4(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel5(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel6(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel7(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel8(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel9(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel10(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel11(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel12(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel1(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel2(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel4(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel5(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel6(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel7(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel8(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel9(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel10(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel11(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel12(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel1(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel2(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel3(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel5(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel6(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel7(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel8(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel9(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel10(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel11(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel12(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel1(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel2(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel3(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel4(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel6(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel7(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel8(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel9(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel10(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel11(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel12(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel1(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel2(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel3(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel4(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel5(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel7(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel8(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel9(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel10(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel11(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel12(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel1(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel2(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel3(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel4(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel5(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel6(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel8(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel9(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel10(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel11(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel12(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel1(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel2(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel3(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel4(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel5(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel6(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel7(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel9(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel10(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel11(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel12(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel1(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel2(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel3(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel4(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel5(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel6(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel7(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel8(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel10(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel11(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel12(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel1(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel2(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel3(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel4(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel5(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel6(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel7(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel8(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel9(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel11(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel12(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel1(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel2(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel3(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel4(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel5(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel6(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel7(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel8(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel9(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel10(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();
    Pixel12(strip.Color(colorone[0],colorone[1],colorone[2]));  // Red
Pixel1(strip.Color(colortwo[0],colortwo[1],colortwo[2]));  // Green
Pixel2(strip.Color(colorthree[0],colorthree[1],colorthree[2]));  // Blue
Pixel3(strip.Color(colorfour[0],colorfour[1],colorfour[2]));  // Blue
Pixel4(strip.Color(colorfive[0],colorfive[1],colorfive[2]));  // Blue
Pixel5(strip.Color(colorsix[0],colorsix[1],colorsix[2]));  // Blue
Pixel6(strip.Color(colorseven[0],colorseven[1],colorseven[2]));  // Blue
Pixel7(strip.Color(coloreight[0],coloreight[1],coloreight[2]));  // Blue
Pixel8(strip.Color(colornine[0],colornine[1],colornine[2]));  // Blue
Pixel9(strip.Color(colorten[0],colorten[1],colorten[2]));  // Blue
Pixel10(strip.Color(coloreleven[0],coloreleven[1],coloreleven[2]));  // Blue
Pixel11(strip.Color(colortwelve[0],colortwelve[1],colortwelve[2]));  // Blue
   delay(twelvecolorspeed);
    strip.show();

  }
}


void FillChase(uint32_t c, uint8_t wait) {
  int i;
  for (int t=144; t >= 0; t--){

  // Start by turning all pixels off:
  for(i=0; i<t; i++) strip.setPixelColor(i, 0);

  // Then display one pixel at a time:
  for(i=0; i<t; i++) {
    strip.setPixelColor(i, c); // Set new pixel 'on'
    strip.show();              // Refresh LED states
   // t--;
    strip.setPixelColor(i-1, 0); // Erase pixel, but don't refresh!
    delay(wait);
  }
    strip.show(); // Refresh to turn off last pixel
}
}

void Pixeleven (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 2;
    if(jVal == 0){
       strip.setPixelColor(j,color1);
    }
    {  
    }
  }
}




void PixelAll (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  //{
  //  jVal = j % 1;
  //  if(jVal == 0){
       strip.setPixelColor(j,color1);
  //  }
    
  //}
}





void Pixelodd (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 2;
    if(jVal == 1){
       strip.setPixelColor(j,color1);
    }
  }
}

void Pixel1 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 0){
       strip.setPixelColor(j,color1);
    }
  }
}
void Pixel2 (uint32_t color){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 1){
       strip.setPixelColor(j,color); 
    }
  }
}
void Pixel3 (uint32_t color){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 2){
       strip.setPixelColor(j,color); 
    }
  }
}
void Pixel4 (uint32_t color){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 3){
       strip.setPixelColor(j,color); 
    }
  }
}
void Pixel5 (uint32_t color){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 4){
       strip.setPixelColor(j,color); 
    }
  }
}
void Pixel6 (uint32_t color){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 5){
       strip.setPixelColor(j,color); 
    }
  }
}
void Pixel7 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 6){
       strip.setPixelColor(j,color1);
    }
  }
}
void Pixel8 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 7){
       strip.setPixelColor(j,color1);
    }
  }
}
void Pixel9 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 8){
       strip.setPixelColor(j,color1);
    }
  }
}
void Pixel10 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 9){
       strip.setPixelColor(j,color1);
    }
  }
}
void Pixel11 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 10){
       strip.setPixelColor(j,color1);
    }
  }
}
void Pixel12 (uint32_t color1){
int j, jVal;
  for (j=0; j < 144; j++)
  {
    jVal = j % 12;
    if(jVal == 11){
       strip.setPixelColor(j,color1);
    }
  }
}



void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}


// Slightly different, this one makes the rainbow wheel equally distributed 
// along the chain
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Fill the dots progressively along the strip.
void colorWipe(uint32_t c, uint8_t wait) {
  int i;

  for (i=0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

// Chase one dot down the full strip.
void colorChase(uint32_t c, uint8_t wait) {
  int i;

  // Start by turning all pixels off:
  for(i=0; i<strip.numPixels(); i++) strip.setPixelColor(i, 0);

  // Then display one pixel at a time:
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c); // Set new pixel 'on'
    strip.show();              // Refresh LED states
    strip.setPixelColor(i, 0); // Erase pixel, but don't refresh!
    delay(wait);
  }

  strip.show(); // Refresh to turn off last pixel
}

void tChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<theatreChaseduration; j++) {  //do 10 cycles of chasing
    for (int q=0; q < theatreChasedistance; q++) {
      for (int i=0; i < strip.numPixels(); i=i+theatreChasedistance) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();
     
      delay(wait);
     
      for (int i=0; i < strip.numPixels(); i=i+theatreChasedistance) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
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

