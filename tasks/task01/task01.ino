const int NUMBER_OF_PINS = 5;

unsigned long* prevMicrosArr = new unsigned long[NUMBER_OF_PINS];
unsigned long* intervalsArr = new unsigned long[NUMBER_OF_PINS];
int* ledStates = new int[NUMBER_OF_PINS];
int pins[NUMBER_OF_PINS] = {3, 6, 9, 10, 11};

void setup() {
  for (int i = 0; i < NUMBER_OF_PINS; ++i) {
    prevMicrosArr[i] = 0;
    ledStates[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }

  intervalsArr[0] = 10000;
  intervalsArr[1] = 1000;
  intervalsArr[2] = 500;
  intervalsArr[3] = 94;
  intervalsArr[4] = 42;
}

void loop() {
  unsigned long currentMicros = micros();

  if (currentMicros - prevMicrosArr[0] >= intervalsArr[0]) {
    prevMicrosArr[0] = currentMicros;

    if (ledStates[0] == LOW) {
      ledStates[0] = HIGH;
    }
    else {
      ledStates[0] = LOW;
    }

    digitalWrite(pins[0], ledStates[0]);
  }

  if (currentMicros - prevMicrosArr[1] >= intervalsArr[1]) {
    prevMicrosArr[1] = currentMicros;

    if (ledStates[1] == LOW) {
      ledStates[1] = HIGH;
    }
    else {
      ledStates[1] = LOW;
    }

    digitalWrite(pins[1], ledStates[1]);
  }
  
 if (currentMicros - prevMicrosArr[2] >= intervalsArr[2]) {
    prevMicrosArr[2] = currentMicros;

    if (ledStates[2] == LOW) {
      ledStates[2] = HIGH;
    }
    else {
      ledStates[2] = LOW;
    }

    digitalWrite(pins[2], ledStates[2]);
  }

  if (currentMicros - prevMicrosArr[3] >= intervalsArr[3]) {
    prevMicrosArr[3] = currentMicros;

    if (ledStates[3] == LOW) {
      ledStates[3] = HIGH;
    }
    else {
      ledStates[3] = LOW;
    }

    digitalWrite(pins[3], ledStates[3]);
  }

 if (currentMicros - prevMicrosArr[4] >= intervalsArr[4]) {
    prevMicrosArr[4] = currentMicros;

    if (ledStates[4] == LOW) {
      ledStates[4] = HIGH;
    }
    else {
      ledStates[4] = LOW;
    }

    digitalWrite(pins[4], ledStates[4]);
  }


}
