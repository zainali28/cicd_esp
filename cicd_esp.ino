#include <Arduino.h>

int a = 0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println("Hello World");

    switch (a) {
        case 1:
            Serial.println("1");
            break;
    }

    delay(100);
}
