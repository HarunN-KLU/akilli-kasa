# Akıllı Kasa - Para Üstü Hesaplama Programı

Bu proje, bir mağazada girilen ürün tutarı ve ödenen miktara göre verilecek en az sayıda banknot ve madeni para (küpür) miktarını hesaplayan C dili programıdır.

## Proje Hakkında
* **Dil:** C
* **Geliştirme Ortamı:** OnlineGDB
* **Özellikler:** 
  - `float` hassasiyet kayıplarını önlemek için uygun yuvarlama yöntemi kullanılmıştır.
  - Verilecek banknot (200, 100, 50, 20, 10, 5, 1 TL) ve madeni para (50, 25, 10, 5, 1 Kr) adetlerini en az sayıda parça verecek şekilde (Greedy yaklaşımı) hesaplar.
  - Toplam parça adedini ekrana yazdırır.

## Çalıştırma (Compile & Run)
GCC derleyicisi kullanarak aşağıdaki komutlarla çalıştırabilirsiniz:

```bash
gcc main.c -o akilli_kasa
./akilli_kasa
