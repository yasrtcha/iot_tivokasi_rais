#include <Arduino.h>  

// Definisi pin untuk masing-masing lampu
int lampuHijau = 33;  // Lampu hijau di GPIO 33
int lampuKuning = 26; // Lampu kuning di GPIO 26
int lampuMerah = 27;  // Lampu merah di GPIO 27

void setup() {
    Serial.begin(115200);
    Serial.println("Simulasi Lampu Lalu Lintas");

    // Atur semua pin sebagai output
    pinMode(lampuHijau, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuMerah, OUTPUT);
}

void loop() {
    // Nyalakan lampu merah selama 3 detik
    digitalWrite(lampuMerah, HIGH);
    Serial.println("Lampu Merah ON");
    delay(1000);
    digitalWrite(lampuMerah, LOW);
    Serial.println("Lampu Merah OFF");

    // Nyalakan lampu kuning selama 1 detik
    digitalWrite(lampuKuning, HIGH);
    Serial.println("Lampu Kuning ON");
    delay(1000);
    digitalWrite(lampuKuning, LOW);
    Serial.println("Lampu Kuning OFF");

    // Nyalakan lampu hijau selama 3 detik
    digitalWrite(lampuHijau, HIGH);
    Serial.println("Lampu Hijau ON");
    delay(1000);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Lampu Hijau OFF");

    // Tunggu sebentar sebelum mengulang siklus
    delay(500);
}
