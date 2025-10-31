#ifndef EASY_CLAIM_H
#define EASY_CLAIM_H

// Standart iddia (assertion) mekanizmasına erişmek için assert.h dahil edilir.
// assert.h, NDEBUG makrosu tanımlandığında (genellikle yayın/release derlemelerinde)
// assert makrosunu boş bir ifadeye dönüştürür.
#include <assert.h> 
#include <stdio.h>

// -----------------------------------------------------------
// 1. Koşul İddia (Claim) Makrosu
// -----------------------------------------------------------

// Dokümantasyon: to_claim_a_condition()
// Amacı: Standart C'deki assert() makrosunun yerini alır. 
//        Belirtilen koşulun doğru (sıfır olmayan) olduğunu iddia eder.
//        Koşul yanlışsa:
//        1. Ekrana hata mesajı yazar (hangi dosya, hangi satır, hangi koşul).
//        2. Programın yürütülmesini sonlandırır (abort()).
// Parametreler: expression (kontrol edilecek boolean ifade/koşul)
// Dönüş Değeri: Yok.
// Teknik Detay: assert makrosunu doğrudan yeni adımızla sarmalayacağız.

#define to_claim_a_condition(expression) assert(expression)

// -----------------------------------------------------------
// 2. Ek Bilgilendirme Fonksiyonları (İsteğe Bağlı)
// -----------------------------------------------------------

/*
* Bu fonksiyonlar, assert mekanizmasının nasıl çalıştığını eğitim amaçlı gösterir,
* ancak asıl to_claim_a_condition makrosu assert'in kendisini kullanmalıdır.
* Bu, NDEBUG'in doğru çalışmasını sağlar.
*/

// Dokümantasyon: claim_note()
// Amacı: Basit bir bilgilendirme notu yazmak için kullanılır, iddia başarısız olsa bile devam eder.
// Parametreler: const char* message (yazılacak mesaj)
// Dönüş Değeri: Yok.
inline void claim_note(const char* message) {
    fprintf(stderr, ">>> CLAIM NOTE: %s\n", message);
}


#endif // EASY_CLAIM_H