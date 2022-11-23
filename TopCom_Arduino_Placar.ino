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
    B00111000,  //0
    B01000100,
    B01001100,
    B01010100,
    B01100100,
    B01000100,
    B00111000,
  };

  byte n1[8] = {
    B00010000,  //1
    B00110000,
    B00010000,
    B00010000,
    B00010000,
    B00010000,
    B00111000,
  };

  byte n2[8] = {
    B00111000,  //2
    B01000100,
    B00000100,
    B00001000,
    B00010000,
    B00100000,
    B01111100,
  };

  byte n3[8] = {
    B01111100,  //3
    B00001000,
    B00010000,
    B00001000,
    B00000100,
    B01000100,
    B00111000,
  };

  byte n4[8] = {
    B00001000,  //4
    B00011000,
    B00101000,
    B01001000,
    B01111100,
    B00001000,
    B00001000,
  };

  byte n5[8] = {
    B01111100,  //5
    B01000000,
    B01111000,
    B00000100,
    B00000100,
    B01000100,
    B00111000,
  };

  byte n6[8] = {
    B00011000,  //6
    B00100000,
    B01000000,
    B01111000,
    B01000100,
    B01000100,
    B00111000,
  };

  byte n7[8] = {
    B01111100,  //7
    B01000100,
    B00000100,
    B00001000,
    B00010000,
    B00010000,
    B00010000,
  };

  byte n8[8] = {
    B00111000,  //8
    B01000100,
    B01000100,
    B00111000,
    B01000100,
    B01000100,
    B00111000,
  };

  byte n9[8] = {
    B00111000,  //9
    B01000100,
    B01000100,
    B00111100,
    B00000100,
    B00001000,
    B00110000,
  };

  byte apagado[8] = {
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

    leituraBotoes();

    stringPontosP1 = String(pontosP1);
    stringPontosP2 = String(pontosP2);

    if (pontosP1 < 10) {
      imprimeNumero(0, stringPontosP1[1]);
      imprimeNumero(1, stringPontosP1[0]);
    } else {
        imprimeNumero(0, stringPontosP1[1]);
        imprimeNumero(1, stringPontosP1[0]);
      }

    if (pontosP2 < 10) {
      imprimeNumero(2, stringPontosP2[0]);
      imprimeNumero(3, stringPontosP2[1]);
    } else {
        imprimeNumero(2, stringPontosP2[1]);
        imprimeNumero(3, stringPontosP2[0]);
    }

    delay(100);
  }

  void imprimeNumero (int digito, char texto) {

    switch (texto) {
        case '0':
          if (digito == 3 || digito == 1) {
            for (int i = 0; i < 8; i++) {
              apoio[i] = n0[i];
              apoio[i] >>= 1;
            }
            if (digito == 1) inserirTraco(digito);
              imprimeBloco(digito, apoio);
          } else {
              imprimeBloco(digito, n0);
        }
      break;

        case '1':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n1[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n1);
        }
        break;

      case '2':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n2[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n2);
        }
        break;

      case '3':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n3[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n3);
        }
        break;

      case '4':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n4[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n4);
        }
        break;

      case '5':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n5[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n5);
        }
        break;

      case '6':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n6[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n6);
        }
        break;

      case '7':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n7[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n7);
        }
        break;

      case '8':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n8[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n8);
        }
        break;

      case '9':
        if (digito == 3 || digito == 1) {
          for (int i = 0; i < 8; i++) {
            apoio[i] = n9[i];
            apoio[i] >>= 1;
          }
          if (digito == 1) inserirTraco(digito);
          imprimeBloco(digito, apoio);
        } else {
          imprimeBloco(digito, n9);
        }
        break;

      default:
        imprimeBloco(digito, apagado);
        break;
    }

    for (int i = 0; i < 8; i++) {
      apoio[i] = zero;
    }

  }

  void inserirTraco(int digito) {
    apoio[2] |= B10000000;
    apoio[3] |= B10000000;
    apoio[4] |= B10000000;
  }

  void imprimeBloco(int lcd, byte character[]) {
    int i = 0;
    for (i=0; i < 8; i++) {
      matrizLed.setRow(lcd, i, character[i]);
    }
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
