#ifndef EASY_IO_H
#define EASY_IO_H

// Standart C I/O (Input/Output) fonksiyonlarına erişim sağlamak için stdio.h dahil edilir.
// Değişken argümanlı (variadic) fonksiyonlar için stdarg.h gereklidir (printf/scanf sarmalayıcıları için).
#include <stdio.h>
#include <stdarg.h>

// -----------------------------------------------------------
// 1. Konsol I/O Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: writing()
// Amacı: Standart C'deki printf() fonksiyonunun yerini alır. Konsola formatlı veri yazmak için kullanılır.
// Parametreler: const char* format, ... (Değişken sayıda argüman)
// Dönüş Değeri: Başarılı olursa yazılan karakter sayısı, hata olursa negatif bir değer döndürür.
inline int writing(const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

// Dokümantasyon: scanning()
// Amacı: Standart C'deki scanf() fonksiyonunun yerini alır. Konsoldan formatlı veri okumak için kullanılır.
// Parametreler: const char* format, ... (Değişken sayıda argüman - okunan değişkenlerin adresleri)
// Dönüş Değeri: Başarılı bir şekilde eşleşen ve atanan öğelerin sayısını döndürür.
inline int scanning(const char* format, ...) {
    va_list args;
    va_start(args, format);
    // scanf'in değişken argümanlı versiyonu olan vscanf kullanılıyor.
    int result = vscanf(format, args); 
    va_end(args);
    return result;
}

// Dokümantasyon: get_the_character()
// Amacı: Standart C'deki getchar() fonksiyonunun yerini alır. Standart girdiden tek bir karakter okur.
// Dönüş Değeri: unsigned char olarak okunan karakteri (int'e dönüştürülmüş olarak), hata veya dosya sonu (EOF) durumunda EOF döndürür.
inline int get_the_character() {
    return getchar();
}

// Dokümantasyon: put_the_character()
// Amacı: Standart C'deki putchar() fonksiyonunun yerini alır. Tek bir karakteri standart çıktıya yazar.
// Parametreler: int character (yazılacak karakter)
// Dönüş Değeri: Başarılı olursa yazılan karakteri, hata olursa EOF döndürür.
inline int put_the_character(int character) {
    return putchar(character);
}

// -----------------------------------------------------------
// 2. Dosya I/O Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: file_open()
// Amacı: Standart C'deki fopen() fonksiyonunun yerini alır. Belirtilen isim ve modda bir dosyayı açar.
// Parametreler: const char* filename (dosya adı), const char* mode (açma modu, örn: "r", "w", "a")
// Dönüş Değeri: Başarılı olursa açılan dosyayı temsil eden FILE* işaretçisi, hata olursa NULL döndürür.
inline FILE* file_open(const char* filename, const char* mode) {
    return fopen(filename, mode);
}

// Dokümantasyon: file_close()
// Amacı: Standart C'deki fclose() fonksiyonunun yerini alır. Açık bir dosya akışını kapatır.
// Parametreler: FILE* file_pointer (kapatılacak dosyanın işaretçisi)
// Dönüş Değeri: Başarılı olursa 0, hata olursa EOF döndürür.
inline int file_close(FILE* file_pointer) {
    return fclose(file_pointer);
}

// Dokümantasyon: file_writing()
// Amacı: Standart C'deki fprintf() fonksiyonunun yerini alır. Belirtilen dosyaya formatlı veri yazar.
// Parametreler: FILE* file_pointer (yazılacak dosya), const char* format, ...
// Dönüş Değeri: Başarılı olursa yazılan karakter sayısı, hata olursa negatif bir değer döndürür.
inline int file_writing(FILE* file_pointer, const char* format, ...) {
    va_list args;
    va_start(args, format);
    // fprintf'in değişken argümanlı versiyonu olan vfprintf kullanılıyor.
    int result = vfprintf(file_pointer, format, args);
    va_end(args);
    return result;
}

// Dokümantasyon: file_scanning()
// Amacı: Standart C'deki fscanf() fonksiyonunun yerini alır. Belirtilen dosyadan formatlı veri okur.
// Parametreler: FILE* file_pointer (okunacak dosya), const char* format, ...
// Dönüş Değeri: Başarılı bir şekilde eşleşen ve atanan öğelerin sayısını döndürür.
inline int file_scanning(FILE* file_pointer, const char* format, ...) {
    va_list args;
    va_start(args, format);
    // fscanf'ın değişken argümanlı versiyonu olan vfscanf kullanılıyor.
    int result = vfscanf(file_pointer, format, args);
    va_end(args);
    return result;
}


#endif // EASY_IO_H