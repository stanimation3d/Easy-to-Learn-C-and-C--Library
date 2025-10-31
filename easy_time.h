#ifndef EASY_TIME_H
#define EASY_TIME_H

// Standart C zaman fonksiyonlarına erişim sağlamak için time.h ve ctime.h dahil edilir.
// C'de ctime.h yerine genellikle time.h kullanılır, ancak bu isimler C++'ta ctime olarak geçer. 
// C için temel olarak time.h yeterlidir.
#include <time.h> 
#include <stddef.h> // size_t ve NULL tanımları için

// -----------------------------------------------------------
// 1. Zaman Yönetimi Fonksiyonları
// -----------------------------------------------------------

// Dokümantasyon: get_current_time()
// Amacı: Standart C'deki time() fonksiyonunun yerini alır. Geçerli takvim zamanını saniye cinsinden döndürür.
// Parametreler: time_t* time_pointer (Eğer NULL değilse, mevcut zamanı bu işaretçiye yazar.)
// Dönüş Değeri: time_t türünde mevcut takvim zamanı.
inline time_t get_current_time(time_t* time_pointer) {
    return time(time_pointer);
}

// Dokümantasyon: converting_time()
// Amacı: Standart C'deki ctime() fonksiyonunun yerini alır. time_t türündeki zamanı, okunabilir 
// bir C dizesine (string) dönüştürür.
// Parametreler: const time_t* time_pointer (dönüştürülecek zaman değerinin işaretçisi)
// Dönüş Değeri: char* türünde, biçimlendirilmiş zamanı içeren statik olarak ayrılmış dizeye işaretçi.
inline char* converting_time(const time_t* time_pointer) {
    return ctime(time_pointer);
}

// Dokümantasyon: time_difference()
// Amacı: Standart C'deki difftime() fonksiyonunun yerini alır. İki time_t zaman değeri arasındaki 
// farkı saniye cinsinden döndürür.
// Parametreler: time_t end_time (son zaman), time_t start_time (başlangıç zamanı)
// Dönüş Değeri: double türünde (end_time - start_time) farkı saniye cinsinden.
inline double time_difference(time_t end_time, time_t start_time) {
    return difftime(end_time, start_time);
}

// -----------------------------------------------------------
// 2. Ek Faydalı Zaman Fonksiyonları (Öğrenme Kolaylığı İçin)
// -----------------------------------------------------------

// Dokümantasyon: local_time_info()
// Amacı: time() ile alınan zamanı, yerel saat dilimine göre parçalanmış yapıya (struct tm*) dönüştürür.
// Parametreler: const time_t* time_pointer (dönüştürülecek zaman değeri)
// Dönüş Değeri: struct tm* türünde yerel zaman bilgisine işaretçi.
inline struct tm* local_time_info(const time_t* time_pointer) {
    return localtime(time_pointer);
}

// Dokümantasyon: format_time_string()
// Amacı: Bir struct tm* yapısındaki zaman bilgisini belirtilen format dizesine göre biçimlendirir. (strftime)
// Parametreler: char* destination (çıktı tamponu), size_t max_size (tamponun maksimum boyutu), 
//               const char* format (biçimlendirme dizesi), const struct tm* time_info (parçalanmış zaman)
// Dönüş Değeri: Biçimlendirilmiş dizeye yazılan karakter sayısı.
inline size_t format_time_string(char* destination, size_t max_size, const char* format, const struct tm* time_info) {
    return strftime(destination, max_size, format, time_info);
}


#endif // EASY_TIME_H