#ifndef EASY_STRING_H
#define EASY_STRING_H

// Standart dize fonksiyonlarına erişim sağlamak için string.h dahil edilir.
#include <string.h> 
#include <stddef.h> // size_t için

// -----------------------------------------------------------
// 1. Dize Uzunluğu ve Temel Bilgi Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: string_length()
// Amacı: Standart C'deki strlen() fonksiyonunun yerini alır. Dizenin null sonlandırıcı ('\0') hariç uzunluğunu hesaplar.
// Parametreler: const char* string_pointer (uzunluğu hesaplanacak dize)
// Dönüş Değeri: size_t türünde (unsigned integer) dize uzunluğu.
inline size_t string_length(const char* string_pointer) {
    return strlen(string_pointer);
}

// -----------------------------------------------------------
// 2. Dize Kopyalama ve Birleştirme Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: copy_string()
// Amacı: Standart C'deki strcpy() fonksiyonunun yerini alır. Kaynak dizeyi hedef diziye kopyalar. 
//        Hedef dizinin yeterli alana sahip olduğundan EMİN OLUNMALIDIR.
// Parametreler: char* destination (hedef dize), const char* source (kaynak dize)
// Dönüş Değeri: char* türünde hedef dizi işaretçisini döndürür.
inline char* copy_string(char* destination, const char* source) {
    return strcpy(destination, source);
}

// Dokümantasyon: join_strings()
// Amacı: Standart C'deki strcat() fonksiyonunun yerini alır. Kaynak dizeyi hedef dizinin sonuna ekler (birleştirir).
//        Hedef dizinin birleştirme sonrası yeterli alana sahip olduğundan EMİN OLUNMALIDIR.
// Parametreler: char* destination (birleştirmenin yapılacağı hedef dize), const char* source (kaynak dize)
// Dönüş Değeri: char* türünde hedef dizi işaretçisini döndürür.
inline char* join_strings(char* destination, const char* source) {
    return strcat(destination, source);
}

// -----------------------------------------------------------
// 3. Dize Karşılaştırma Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: compare_strings()
// Amacı: Standart C'deki strcmp() fonksiyonunun yerini alır. İki dizeyi sözlükbilimsel (lexicographical) olarak karşılaştırır.
// Parametreler: const char* string1, const char* string2 (karşılaştırılacak dizeler)
// Dönüş Değeri: 
//              - string1 < string2 ise: Negatif tamsayı
//              - string1 == string2 ise: 0
//              - string1 > string2 ise: Pozitif tamsayı
inline int compare_strings(const char* string1, const char* string2) {
    return strcmp(string1, string2);
}

// -----------------------------------------------------------
// 4. Dize Arama Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: find_character_in_string()
// Amacı: Standart C'deki strchr() fonksiyonunun yerini alır. Dizideki belirtilen karakterin İLK geçtiği yeri bulur.
// Parametreler: const char* string_pointer (aranacak dize), int character (aranan karakter)
// Dönüş Değeri: char* türünde, karakterin dize içindeki konumuna işaretçi. Bulunamazsa NULL döndürür.
inline char* find_character_in_string(const char* string_pointer, int character) {
    return strchr(string_pointer, character);
}

// Dokümantasyon: find_substring_in_string()
// Amacı: Standart C'deki strstr() fonksiyonunun yerini alır. Dizideki belirtilen alt dizenin İLK geçtiği yeri bulur.
// Parametreler: const char* haystack (ana dize), const char* needle (aranan alt dize)
// Dönüş Değeri: char* türünde, alt dizenin başlangıç konumuna işaretçi. Bulunamazsa NULL döndürür.
inline char* find_substring_in_string(const char* haystack, const char* needle) {
    // strstr C'de const char* döndürmez, ancak C++'ta bu şekilde sarmalamak daha güvenli olabilir.
    // C derleyicileri için tip dönüşümü gerekebilir.
    return (char*)strstr(haystack, needle);
}


#endif // EASY_STRING_H