 #include <FastLED.h>//arduino ideにてヘッダーファイルを追加してください

  #define numberOfLEDs 1//直列接続個数
  #define controlPin 3//データ用pin指定

  CRGB leds[numberOfLEDs];
void setup() {

   FastLED.addLeds<WS2812B, controlPin, GRB>(leds, numberOfLEDs);
   FastLED.show(); 

   leds[0].r = 255;//leds[]のカッコ内は色を変更するLEDの番号を入力
   leds[0].g = 255;//
   leds[0].b = 255;

   FastLED.show();//変更時　最後に記載する
}
