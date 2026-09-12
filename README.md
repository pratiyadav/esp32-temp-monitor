# ESP32 Temperature Monitoring System

A simulated embedded IoT project: an ESP32 reads temperature from a DHT22
sensor and triggers an LED alert when a threshold is crossed.

## How it works
The DHT22 sensor is wired to a GPIO input pin on the ESP32. Every 2 seconds,
the microcontroller reads the current temperature and compares it against a
fixed threshold (28°C). If exceeded, it drives a GPIO output pin HIGH,
turning on an LED, and logs an alert over serial.

## What I learned
- GPIO input/output configuration on a microcontroller
- Polling-based sensor reading (read on a fixed interval, vs. interrupt-driven design)
- Debugging via serial output — the standard approach in embedded development,
  since there's no traditional debugger or screen on the device itself
- [Add one real thing that tripped you up — e.g. figuring out the DHT22's
  actual pin order, or realizing GPIO15 wasn't available on this board]

## Tools
- Wokwi (ESP32 + circuit simulation)
- Arduino C++ framework
- DHT sensor library (Adafruit)

## Demo
<img width="690" height="561" alt="image" src="https://github.com/user-attachments/assets/9b279232-91e7-4da5-aefe-02d700834478" />
