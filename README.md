# nodeMCU-Blynk-IFTTT-LED
Konsep dasar Device Smart LED dengan Google assistant.

1. Bahan yang dibutuhkan :
- NodeMCU ESP8266 12E
- LED Merah, Kuning, Hijau.
- NodeMCU Base (Optional)
- Kabel jumper (Male - Female & Male - Male)
- Breadboard / protoboard
- Baterai 9v (Kotak)
- Kepala baterai & Jack power

2. Rangkai seperti pada diagram berikut :

# Circuit Diagram

![Circuit Diagram](https://github.com/idejongkok/nodeMCU-Blynk-IFTTT-LED/blob/master/NodeMCU_LED_BLYNK_IFTTT.PNG)

3. Install Arduino IDE (Jika belum punya) pada PC/Laptop windows (Windows 10 yang sekarang).

4. Install Driver CH340G ke PC/Laptop agar port NodeMCU terbaca saat dihubungkan ke PC windows. Download & Extract CH341SER.zip, lalu jalankan File .EXE nya.

5. File NodeMCU_BLYNK_IFTTT_LED_test.ino berisi sourcecode untuk di-upload ke perangkat NodeMCU.
Buka file NodeMCU_BLYNK_IFTTT_LED_test.ino dengan ArduinoIDE, Jangan lupa untuk mengedit file ino :
- auth dengan token yang dikirim oleh Blynk via email
- ssid dengan nama wifi / jaringan yang dipakai
- pass untuk password dari wifi nya.

6. Tutorial Lengkap ada pada Video berikut :

# Tutorial NodeMCU Google Assistant + Blynk : Kontrol LED dengan Suara
[![Video Tutorial](https://img.youtube.com/vi/yTkODtOfwqI/0.jpg)](https://www.youtube.com/watch?v=yTkODtOfwqI)
