#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h> // Hardware-specific library
#include <TouchScreen.h>

#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define WHITE   0xFFFF

void setup(void) {
  
  tft.reset();
  tft.begin(0x9341);
  tft.fillScreen(BLACK);


/* 点
  tft.drawPixel(1,1,RED);
  tft.drawPixel(10,10,RED);
  tft.drawPixel(20,20,RED);
  tft.drawPixel(40,40,RED);
  tft.drawPixel(60,60,RED);
*/  

/* 线
 tft.drawFastHLine(10,10,170,RED);
 tft.drawFastVLine(10,10,170,RED);
 tft.drawLine(10,10,100,180,RED);
 */
/* 矩形
   tft.drawRect(10,10,150,100,RED);
   tft.fillRect(10,120,150,100,RED);
  */
/* 圆角矩形
   *  
 tft.drawRoundRect(10,10,150,100,10,RED);
 tft.fillRoundRect(10,120,150,100,10,RED);
 */
/*  圆形
 tft.drawCircle(100,100,50,WHITE);
 tft.fillCircle(100,260,50,BLUE);
 */
/*  三角形
 tft.drawTriangle(10,10,100,15,180,100,GREEN);
 tft.fillTriangle(10,110,100,115,180,200,GREEN);
 */
 /*旋转
  tft.setRotation(1);
  */

 /* 字符与文本
 */
 tft.fillScreen(GREEN);
 tft.drawChar(150,10,'A',RED,WHITE,5);

 tft.setCursor(10,50);
 tft.print("AB 3.14");    //默认前景色white、无背景色、大小为1

 tft.setCursor(10,80);
 tft.setTextSize( 4);
 tft.print("AB 3.14");
 
 tft.setCursor(10,115);
 tft.setTextColor(RED); //背景色不做设置
 tft.setTextSize( 4);
 tft.print("AB你好3.141516");

  tft.setCursor(10,180);
  tft.setTextColor(RED, WHITE);
 tft.setTextSize( 4);
 tft.setTextWrap(false);
 tft.print("AB你好3.141516");


}


void loop()
{
  /*屏幕
  tft.fillScreen(BLACK);
  delay(1000);
  tft.fillScreen(RED);
  delay(1000);
  tft.fillScreen(BLUE);
   delay(1000);
  */
}
