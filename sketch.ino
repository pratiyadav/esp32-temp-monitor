#include "DHT.h"

#define DHTPIN 15
#define DHTTYPE DHT22
#define LEDPIN 2
#define TEMP_THRESHOLD 28.0

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  pinMode(LEDPIN, OUTPUT);
  dht.begin();
  Serial.println("Starting DHT22 temperature monitor...");
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature > TEMP_THRESHOLD) {
    digitalWrite(LEDPIN, HIGH);
    Serial.println("ALERT: Threshold exceeded! LED ON.");
  } else {
    digitalWrite(LEDPIN, LOW);
  }

  delay(2000);
}