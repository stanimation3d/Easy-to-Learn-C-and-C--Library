#ifndef EASY_MATH_H
#define EASY_MATH_H

// Standart matematik fonksiyonlarına erişim sağlamak için math.h dahil edilir.
#include <math.h>

// rand() ve malloc() gibi bazı fonksiyonlar stdlib.h'nin parçasıdır.
// random_number() ve memory_size() için stdlib.h dahil edilmelidir.
#include <stdlib.h> 

// -----------------------------------------------------------
// 1. Matematik Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: exponentiation()
// Amacı: Standart C'deki pow() fonksiyonunun yerini alır. Tabanın (base) kuvvetini (exponent) hesaplar.
// Parametreler: double base (taban), double exponent (kuvvet/üs)
// Dönüş Değeri: double türünde (taban^kuvvet) sonucunu döndürür.
inline double exponentiation(double base, double exponent) {
    return pow(base, exponent);
}

// Dokümantasyon: absolute_value()
// Amacı: Standart C'deki fabs() fonksiyonunun yerini alır. Bir double değerin mutlak değerini döndürür.
// Parametreler: double value (mutlak değeri alınacak sayı)
// Dönüş Değeri: double türünde sayının mutlak değerini döndürür.
inline double absolute_value(double value) {
    return fabs(value);
}

// Dokümantasyon: logarithm()
// Amacı: Standart C'deki log() fonksiyonunun yerini alır. Sayının doğal logaritmasını (e tabanına göre) hesaplar.
// Parametreler: double value (logaritması hesaplanacak pozitif sayı)
// Dönüş Değeri: double türünde doğal logaritma değerini döndürür.
inline double logarithm(double value) {
    return log(value);
}

// -----------------------------------------------------------
// 2. Rastgele Sayı ve Bellek Yönetimi (Öğrenme Kolaylığı İçin Buraya Eklendi)
// -----------------------------------------------------------

// Dokümantasyon: random_number()
// Amacı: Standart C'deki rand() fonksiyonunun yerini alır. 0 ile RAND_MAX arasında rastgele bir tamsayı döndürür.
// NOT: Genellikle rastgele sayı üretecinin tohumlanması için main() içinde srand() fonksiyonuna ihtiyaç duyulur.
// Dönüş Değeri: int türünde bir rastgele sayı.
inline int random_number() {
    return rand();
}

// Dokümantasyon: memory_size()
// Amacı: Standart C'deki malloc() fonksiyonunun yerini alır. Belirtilen boyutta bellek bloğu ayırır.
// Parametreler: size_t size_in_bytes (ayrılacak bellek boyutu, bayt cinsinden)
// Dönüş Değeri: void* türünde ayrılmış belleğe işaretçi. Başarısız olursa NULL döndürür.
inline void* memory_size(size_t size_in_bytes) {
    return malloc(size_in_bytes);
}

// -----------------------------------------------------------
// 3. Sabitler ve Yardımcı Fonksiyonlar
// -----------------------------------------------------------

// Sabit: PI_VALUE
// Amacı: Matematikte kullanılan pi sayısının değerini (M_PI, math.h'den gelir) sağlar.
#define PI_VALUE M_PI


#endif // EASY_MATH_H