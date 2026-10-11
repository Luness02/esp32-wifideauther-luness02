# ESP32 Wi-Fi Deauther

Bu depo, ESP32 mikrodenetleyicisi kullanarak çevredeki Wi-Fi ağlarını tarayan ve yönetim paketleri (Deauthentication frames) göndererek cihazların ağ bağlantısını test etmeye yarayan bir uygulama içerir.

## Özellikler

- Çevredeki Wi-Fi ağlarını ve kanallarını tarama
- Temel 802.11 yönetim paketleri altyapısı
- Kolayca özelleştirilebilir C++ / Arduino yapısı

### Dikkat! Yasal Uyarı
Bu araç yalnızca **eğitim, güvenlik testi ve laboratuvar ortamları** amacıyla tasarlanmıştır. İzinsiz ağlara veya cihazlara yönelik kullanılması yasalara göre suçtur. Oluşabilecek her türlü yasal sorumluluk kullanıcıya aittir.

## Kurulum ve Kullanım

1. Projeyi Arduino IDE ile açın.
2. ESP32 kart kütüphanenizin yüklü olduğundan emin olun.
3. Kodu kartınıza derleyip yükleyin.