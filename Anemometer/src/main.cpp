#include <Arduino.h>

#define INT_GPIO 14

#define UPDATE_DEL 1000

// Variables for storing information in interrupt routine
volatile int lastTime = 0;  // Previous frequency calculation time
volatile int count = 0;     // Current count (Reset after frequency calculation)

void IRAM_ATTR ISR(){
  count++;
}


void setup() {
  pinMode(INT_GPIO, INPUT_PULLUP);
  attachInterrupt(INT_GPIO, ISR, FALLING);

  Serial.begin(9600);
}

void loop() {
  // if(millis() - lastTime > )

  Serial.println(count);
}