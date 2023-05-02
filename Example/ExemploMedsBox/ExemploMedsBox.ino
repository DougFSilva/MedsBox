#include <MedsBox.h>
#include <NTPClient.h>
#include <WiFi.h> 
#include <WiFiUdp.h>

const char *ssid     = "SSid";
const char *password = "Senha";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "a.st1.ntp.br", -10800, 30000);

MedsBox caixa1("anoians-sdnaskl-asdasjk", 1);
MedsBox caixa2("anhghfs-ssdasda-tyuytuy", 2);
MedsBox caixa3("afd6s5f-gg4s6fd-889f4sd", 3);
MedsBox caixa4("affdpdk-ddpflfd-sspssls", 4);
MedsBox caixa5("plsdsad-qqpqkda-aapapds", 5);
MedsBox caixa6("adsspps-fff5df4-asdasjk", 6);
MedsBox caixa7("anoomad-99s8fsa-ppehyya", 7);

void setup() {
  Serial.begin(115200);
  wifiConnect();
  timeClient.begin();
}

void loop() {
  timeClient.update(); // Atualiza o horário

  //Imprimi o horário atual
  Serial.print("Horário atual: ");
  Serial.print(timeClient.getHours());
  Serial.print(":");
  Serial.println(timeClient.getMinutes());

  caixa2.setActive(true);
  caixa2.setRemedy("Dipirona");
  caixa2.setPeriodicity(8);
  caixa2.setHour(20);
  caixa2.setMinutes(36);
  caixa4.setActive(true);

  if(caixa1.getActive()){
    Serial.println("Caixa 1 ativa!");
  }
  if(caixa2.getActive()){
    Serial.println("Caixa 2 ativa!");
    if(caixa2.compare(timeClient.getHours(), timeClient.getMinutes())){
      caixa2.on();
      Serial.println("***Ativa saída 2***");
    }else {
      caixa2.off();
    }
  }
  if(caixa3.getActive()){
    Serial.println("Caixa 3 ativa!");
  }
  if(caixa4.getActive()){
    Serial.println("Caixa 4 ativa!");
  }
  if(caixa5.getActive()){
    Serial.println("Caixa 5 ativa!");
  }
  if(caixa6.getActive()){
    Serial.println("Caixa 6 ativa!");
  }
  if(caixa7.getActive()){
    Serial.println("Caixa 7 ativa!");
  }
  delay(3000);
}

void wifiConnect(){
   Serial.println("Conectando a rede");  
   WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(1000);
  }  
}

