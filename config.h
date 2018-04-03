// Physical device information for board and sensor
//#define NO_LOGGING
#define DEVICE_ID "SparkFun ESP8266 Thing Dev"
#define DHT_TYPE DHT22

// Pin layout configuration
//#define LED_PIN 5
//#define DHT_PIN 2
#define BUZZER_PIN 5
#define BUTTON_CANCLLED 0
#define BUTTON_ALERT 4

#define TEMPERATURE_ALERT 30

// Interval time(ms) for sending message to IoT Hub
#define INTERVAL 2000

// If don't have a physical DHT sensor, can send simulated data to IoT hub
#define SIMULATED_DATA false

// EEPROM address configuration 
#define EEPROM_SIZE 512

// SSID and SSID password's length should < 32 bytes
// http://serverfault.com/a/45509
#define SSID_LEN 32
#define PASS_LEN 32
#define CONNECTION_STRING_LEN 256

#define MESSAGE_MAX_LEN 256
