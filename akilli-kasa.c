#include <stdio.h>

int main() {
    float tutar, para;
    float fark;
    int kurus;
    
    // Girdiler
    printf("Urun tutarini giriniz: ");
    scanf("%f", &tutar);
    
    printf("Odenen parayi giriniz: ");
    scanf("%f", &para);
    
    // Para ustu hesaplama
    fark = para - tutar;
    
    // Hassasiyet kaybini onleyen dogru yuvarlama yontemi
    kurus = (int)(fark * 100 + 0.5);

    printf("\nPara Ustu: %.2f TL\n", fark);
    printf("Kurus Cinsinden: %d kurus\n\n", kurus);
    
    int kalan = kurus;
    
    // Banknotlar
    int tl200 = kalan / 20000;
    kalan = kalan % 20000;
    
    int tl100 = kalan / 10000;
    kalan = kalan % 10000;
    
    int tl50 = kalan / 5000;
    kalan = kalan % 5000;
    
    int tl20 = kalan / 2000;
    kalan = kalan % 2000;
    
    int tl10 = kalan / 1000;
    kalan = kalan % 1000;
    
    int tl5 = kalan / 500;
    kalan = kalan % 500;
    
    int tl1 = kalan / 100;
    kalan = kalan % 100;
    
    // Madeni paralar
    int kr50 = kalan / 50;
    kalan = kalan % 50;
    
    int kr25 = kalan / 25;
    kalan = kalan % 25;
    
    int kr10 = kalan / 10;
    kalan = kalan % 10;
    
    int kr5 = kalan / 5;
    kalan = kalan % 5;
    
    int kr1 = kalan;
    
    // Toplam kupur adedi
    int toplam = tl200 + tl100 + tl50 + tl20 + tl10 + tl5 + tl1 + kr50 + kr25 + kr10 + kr5 + kr1;
    
    // Ciktilar
    printf("--- VERILECEK PARALAR ---\n");
    printf("200 TL: %d adet\n", tl200);
    printf("100 TL: %d adet\n", tl100);
    printf("50 TL: %d adet\n", tl50);
    printf("20 TL: %d adet\n", tl20);
    printf("10 TL: %d adet\n", tl10);
    printf("5 TL: %d adet\n", tl5);
    printf("1 TL: %d adet\n", tl1);
    printf("50 Kurus: %d adet\n", kr50);
    printf("25 Kurus: %d adet\n", kr25);
    printf("10 Kurus: %d adet\n", kr10);
    printf("5 Kurus: %d adet\n", kr5);
    printf("1 Kurus: %d adet\n", kr1);
    
    printf("\nToplam verilen parca sayisi: %d\n", toplam);
    
    return 0;
}