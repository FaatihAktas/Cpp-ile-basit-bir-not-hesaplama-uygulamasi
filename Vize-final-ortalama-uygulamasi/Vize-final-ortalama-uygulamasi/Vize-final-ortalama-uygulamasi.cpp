#include <iostream>

inline float butort(float vp, float vy, float bp, float fy) { //b�t�nleme s�nav� dahil ortalama
    return (vp * vy) / 100 + (bp * fy) / 100;
}

inline float ort(float vp, float vy, float fp, float fy) { // sadece vize ve final ortalamas�
    return (vp * vy) / 100 + (fp * fy) / 100;
}

int main()
{
    float vp, fp, bp; //vp: vize puan�, fp: final puan�, bp: b�t�nleme puan�, hn: harf notu
    int vy, fy; //vy: vize y�zdesi, fy: final y�zdesi
    char but; //but: b�t�nleme s�nav�

    std::cout << "Vize sinaviniz ortalamayi % kac etkiliyor? ";
    std::cin >> vy;
    std::cout << "Final sinaviniz ortalamayi % kac etkiliyor? ";
    std::cin >> fy;

    std::cout << "Vize sinavinizdan kac puan aldiniz? ";
    std::cin >> vp;
    std::cout << "Final sinavinizdan kac puan aldiniz? ";
    std::cin >> fp;

    while (true)
    {
        std::cout << "Butunleme sinavina girdiniz mi? (Y/N) "; // farkl� bir de�er girildi�inde soruyu tekrar soracakt�r.
        std::cin >> but;

        if (but == 'Y' || but == 'y')
        {
            std::cout << "Butunleme sinavindan kac puan aldiniz? ";
            std::cin >> bp;
            std::cout << "100 Uzerinden: " << butort(vp, vy, bp, fy) << std::endl;
            std::cout << "4 Uzerinden: " << butort(vp, vy, bp, fy) / 25 << std::endl;
            break;
        }
        else if (but == 'N' || but == 'n')
        {
            std::cout << "100 Uzerinden: " << ort(vp, vy, fp, fy) << std::endl;
            std::cout << "4 Uzerinden: " << ort(vp, vy, fp, fy) / 25 << std::endl;

            break;
        }
        else
        {
            std::cout << "Lutfen sadece 'Y' veya 'N' olarak tanimlayiniz.\n";
        }
    }

}
