#include <iostream>

int main() {
	double miktar;
	double bakiye = 0;
	int secim;
	
	do {
		std::cout << std::endl << "Bakiyeniz:" << bakiye << std::endl;
		std::cout << "1-Para Yatirma" << std::endl << "2-Para Cekme" << std::endl << "3- Cikis" << std::endl;
		std::cout << "Seciminiz (1, 2, 3):";
		std::cin >> secim;
		
		if (secim == 1) {
			std::cout << "Yatirilicak para miktarini giriniz:";
			std::cin >> miktar;
			bakiye = miktar + bakiye;
		}
		else if (secim == 2) {
			std::cout << "Cekilecek para miktarini giriniz:";
			std::cin >> miktar;
			if (miktar <= bakiye) {
				bakiye = bakiye - miktar;
			}
			else {
				std::cout << "Yetersiz bakiye.";
			}
		}
		else if (secim == 3) {
			std::cout << "Iyi gunler dileriz.";
		}
		else {
			std::cout << "Gecerli bir secim yapiniz." << std::endl;
		}
	}
	while (secim != 3);
	return 0;
}
