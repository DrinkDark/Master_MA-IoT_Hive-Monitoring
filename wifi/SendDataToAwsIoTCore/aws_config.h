#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>



extern WiFiClientSecure net;
extern PubSubClient client;
extern const char* ThingName;
extern const char* subscribeTopic;
extern const char* ssid;
extern const char* password;
extern const char* aws_endpoint;
extern const char* certificate;
extern const char* private_key;
extern const char* root_ca;

void callback(char* topic, byte* payload, unsigned int length);
void connectAWS();