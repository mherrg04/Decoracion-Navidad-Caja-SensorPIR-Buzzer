#include <Arduino.h>

const int pinPIR = 15;
const int buzzer = 5;

#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698

void playJingleBells();
void playSilentNight();
void playWeWishYou();

void setup() {
  pinMode(pinPIR, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
  randomSeed(analogRead(0)); 
  Serial.println("Sistema navideño iniciado. Esperando movimiento...");
}

void loop() {
  int movimiento = digitalRead(pinPIR);

  if (movimiento == HIGH) {
    Serial.println("¡Movimiento detectado!");
    int cancion = random(1, 4); 
    Serial.print("Reproduciendo villancico número ");
    Serial.println(cancion);

    switch (cancion) {
      case 1: playJingleBells(); break;
      case 2: playWeWishYou(); break;
      case 3: playSilentNight(); break;
    }

    delay(5000); 
  }
}

void playSilentNight() {
  int melody[] = {
    NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4,
    NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4,
    NOTE_D5, NOTE_D5, NOTE_B4,
    NOTE_C5, NOTE_C5, NOTE_G4
  };

  int durations[] = {
    600, 600, 600, 600,
    600, 600, 600, 600,
    600, 600, 1200,
    600, 600, 1200
  };

  for (int i = 0; i < 14; i++) {
    tone(buzzer, melody[i]);
    delay(durations[i]);
    noTone(buzzer);
    delay(100);
  }
}
void playJingleBells() {
  int melody[] = {
    NOTE_E4, NOTE_E4, NOTE_E4,
    NOTE_E4, NOTE_E4, NOTE_E4,
    NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,

    NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4,
    NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
    NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4
  };

  int durations[] = {
    300, 300, 600,
    300, 300, 600,
    300, 300, 300, 300, 800,

    300, 300, 300, 300,
    300, 300, 300, 300, 300,
    300, 300, 300, 300, 300, 800
  };

  for (int i = 0; i < sizeof(melody)/sizeof(melody[0]); i++) {
    tone(buzzer, melody[i]);
    delay(durations[i]);
    noTone(buzzer);
    delay(50);
  }
}


void playWeWishYou() {
  int melody[] = {
    NOTE_G4, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4,
    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_D5, NOTE_D5, NOTE_E5,
    NOTE_D5, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_G4, NOTE_E5,
    NOTE_E5, NOTE_F5, NOTE_D5, NOTE_E5, NOTE_C5
  };

  int durations[] = {
    400, 400, 200, 200, 400, 400,
    400, 400, 200, 200, 400, 400,
    400, 400, 400, 400, 400, 200,
    200, 400, 400, 400, 800
  };

  for (int i = 0; i < 23; i++) {
    tone(buzzer, melody[i]);
    delay(durations[i]);
    noTone(buzzer);
    delay(80);
  }
}


