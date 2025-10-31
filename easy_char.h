#ifndef EASY_CHAR_H
#define EASY_CHAR_H

// Standart karakter işleme fonksiyonlarına erişim sağlamak için ctype.h dahil edilir.
#include <ctype.h> 

// -----------------------------------------------------------
// 1. Karakter Sorgulama Fonksiyonları (Soru İşaretli - Boolean Kontroller)
// -----------------------------------------------------------

// Dokümantasyon: alphabetical_character?()
// Amacı: Standart C'deki isalpha() fonksiyonunun yerini alır. Karakterin bir harf (a-z, A-Z) olup olmadığını kontrol eder.
// Parametreler: int character (kontrol edilecek karakter, aslında int olarak iletilir)
// Dönüş Değeri: Harf ise sıfır olmayan (DOĞRU), değilse 0 (YANLIŞ) döndürür.
inline int alphabetical_character_query(int character) {
    return isalpha(character);
}
// Ek Kolaylık İçin Makro: Soru işaretli çağrıya izin verir
#define alphabetical_character?(c) alphabetical_character_query(c)

// Dokümantasyon: number?()
// Amacı: Standart C'deki isdigit() fonksiyonunun yerini alır. Karakterin bir rakam (0-9) olup olmadığını kontrol eder.
// Parametreler: int character
// Dönüş Değeri: Rakam ise DOĞRU, değilse YANLIŞ döndürür.
inline int number_query(int character) {
    return isdigit(character);
}
#define number?(c) number_query(c)

// Dokümantasyon: space?()
// Amacı: Standart C'deki isspace() fonksiyonunun yerini alır. Karakterin boşluk (space, tab, newline vb.) olup olmadığını kontrol eder.
// Parametreler: int character
// Dönüş Değeri: Boşluk ise DOĞRU, değilse YANLIŞ döndürür.
inline int space_query(int character) {
    return isspace(character);
}
#define space?(c) space_query(c)

// Dokümantasyon: alphanumeric_character?()
// Amacı: Standart C'deki isalnum() fonksiyonunun yerini alır. Karakterin harf VEYA rakam olup olmadığını kontrol eder.
// Parametreler: int character
// Dönüş Değeri: Harf veya rakam ise DOĞRU, değilse YANLIŞ döndürür.
inline int alphanumeric_character_query(int character) {
    return isalnum(character);
}
#define alphanumeric_character?(c) alphanumeric_character_query(c)

// Dokümantasyon: uppercase_letter?()
// Amacı: Standart C'deki isupper() fonksiyonunun yerini alır. Karakterin büyük harf (A-Z) olup olmadığını kontrol eder.
// Parametreler: int character
// Dönüş Değeri: Büyük harf ise DOĞRU, değilse YANLIŞ döndürür.
inline int uppercase_letter_query(int character) {
    return isupper(character);
}
#define uppercase_letter?(c) uppercase_letter_query(c)

// Dokümantasyon: lowercase_letter?()
// Amacı: Standart C'deki islower() fonksiyonunun yerini alır. Karakterin küçük harf (a-z) olup olmadığını kontrol eder.
// Parametreler: int character
// Dönüş Değeri: Küçük harf ise DOĞRU, değilse YANLIŞ döndürür.
inline int lowercase_letter_query(int character) {
    return islower(character);
}
#define lowercase_letter?(c) lowercase_letter_query(c)

// -----------------------------------------------------------
// 2. Karakter Dönüşüm Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: capitalize()
// Amacı: Standart C'deki toupper() fonksiyonunun yerini alır. Karakteri büyük harfe dönüştürür. 
// Küçük harf değilse, karakteri olduğu gibi döndürür.
// Parametreler: int character
// Dönüş Değeri: Karakterin büyük harf karşılığı (int olarak).
inline int capitalize(int character) {
    return toupper(character);
}

// Dokümantasyon: convert_to_lowercase()
// Amacı: Standart C'deki tolower() fonksiyonunun yerini alır. Karakteri küçük harfe dönüştürür.
// Büyük harf değilse, karakteri olduğu gibi döndürür.
// Parametreler: int character
// Dönüş Değeri: Karakterin küçük harf karşılığı (int olarak).
inline int convert_to_lowercase(int character) {
    return tolower(character);
}


#endif // EASY_CHAR_H