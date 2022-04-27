#include <iostream>

inline float butort(float vp, float vy, float bp, float fy) { //bütünleme sýnavý dahil ortalama
    return (vp * vy) / 100 + (bp * fy) / 100;
}

inline float ort(float vp, float vy, float fp, float fy) { // sadece vize ve final ortalamasý
    return (vp * vy) / 100 + (fp * fy) / 100;
}

int main()
{
    float vp, fp, bp; //vp: vize puaný, fp: final puaný, bp: bütünleme puaný, hn: harf notu
    int vy, fy; //vy: vize yüzdesi, fy: final yüzdesi
    char but; //but: bütünleme sýnavý

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
        std::cout << "Butunleme sinavina girdiniz mi? (Y/N) "; // farklý bir deðer girildiðinde soruyu tekrar soracaktýr.
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
