  #include <LedControl.h>
  #include <Wire.h>

  int DIN = 10;
  int CS = 9;
  int CLK = 8;
  LedControl matrizLed = LedControl(DIN, CLK, CS, 4);

  #define pinoBotaoMais1 4
  #define pinoBotaoMenos1 5
  #define pinoBotaoMais2 6
  #define pinoBotaoMenos2 7
  #define pinoBotaoZerar 2

  byte n0[8] = { 
    B01110000,  //0
    B10001000,
    B10011000,
    B10101000,
    B11001000,
    B10001000,
    B01110000,
    B00000000,
  };

  byte n1[8] = {
    B01000000,  //1
    B11000000,
    B01000000,
    B01000000,
    B01000000,
    B01000000,
    B11100000,
    B00000000,
  };

  byte n2[8] = {
    B01110000,  //2
    B10001000,
    B00001000,
    B00010000,
    B00100000,
    B01000000,
    B11111000,
    B00000000,
  };

  byte n3[8] = {
    B11111000,  //3
    B00010000,
    B00100000,
    B00010000,
    B00001000,
    B10001000,
    B01110000,
    B00000000,
  };

  byte n4[8] = {
    B00010000,  //4
    B00110000,
    B01010000,
    B10010000,
    B11111000,
    B00010000,
    B00010000,
    B00000000,
  };

  byte n5[8] = {
    B11111000,  //5
    B10000000,
    B11110000,
    B00001000,
    B00001000,
    B10001000,
    B01110000,
    B00000000,
  };

  byte n6[8] = {
    B00110000,  //6
    B01000000,
    B10000000,
    B11110000,
    B10001000,
    B10001000,
    B01110000,
    B00000000,
  };

  byte n7[8] = {
    B11111000,  //7
    B10001000,
    B00001000,
    B00010000,
    B00100000,
    B00100000,
    B00100000,
    B00000000,
  };

  byte n8[8] = {
    B01110000,  //8
    B10001000,
    B10001000,
    B01110000,
    B10001000,
    B10001000,
    B01110000,
    B00000000,
  };

  byte n9[8] = {
    B01110000,  //9
    B10001000,
    B10001000,
    B01111000,
    B00001000,
    B00010000,
    B01100000,
    B00000000,
  };

  byte apagado[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
  };

  byte apoio[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
  };

  byte zero = B00000000;
  byte dig0 = 0x0;
  byte dig1 = 0x0;
  byte dig2 = 0x0;
  byte dig3 = 0x0;


  int pontosP1 = 0;
  int pontosP2 = 0;
  String stringPontosP1, stringPontosP2;
  int contZerar = 0;



  void setup(){
    pinMode(pinoBotaoMais1, INPUT_PULLUP);
    pinMode(pinoBotaoMenos1, INPUT_PULLUP);
    pinMode(pinoBotaoMais2, INPUT_PULLUP);
    pinMode(pinoBotaoMenos2, INPUT_PULLUP);
    pinMode(pinoBotaoZerar, INPUT_PULLUP);


    matrizLed.shutdown(0, false);
    matrizLed.setIntensity(0, 1);
    matrizLed.clearDisplay(0);

    matrizLed.shutdown(1, false);
    matrizLed.setIntensity(1, 1);
    matrizLed.clearDisplay(1);

    matrizLed.shutdown(2, false);
    matrizLed.setIntensity(2, 1);
    matrizLed.clearDisplay(2);

    matrizLed.shutdown(3, false);
    matrizLed.setIntensity(3, 1);
    matrizLed.clearDisplay(3);

    Serial.begin(9600);
  }

  void loop(){
    
  }
  void leituraBotoes(){

    if(digitalRead(pinoBotaoMais1) == LOW) 
      pontosP1++;
    if(digitalRead(pinoBotaoMenos1) == LOW)
      pontosP1--;
    if(digitalRead(pinoBotaoMais2) == LOW)
      pontosP2++;
    if(digitalRead(pinoBotaoMenos2) == LOW)
      pontosP2--;

    delay(50);

    if (digitalRead(pinoBotaoZerar) == LOW) {
      while(digitalRead(pinoBotaoZerar) == LOW && contZerar < 30) {
        contZerar++;
        delay(100);
      }
      if (contZerar >= 30){
        pontosP1 = 0;
        pontosP2 = 0;
        contZerar = 0;
      }
    } else {
      contZerar = 0;
    }
    if (pontosP1 <= 0)
      pontosP1 = 0;
    if (pontosP2 <= 0)
      pontosP2 = 0;
 }
                   
