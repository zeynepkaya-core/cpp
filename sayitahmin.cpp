#include <iostream>
#include<cstdlib>
#include<ctime>

int main() {
	std::srand(std::time(0));
	int sayi = std::rand() % 10 + 1;
	int tahmin;
	std::cout << "Tutulan sayiyi tahmin edin." << std::endl;
	
	do {
		std::cout << "Tahmininiz:";
		std::cin >> tahmin;
		
		if (tahmin < sayi){
			std::cout << "Daha buyuk bir sayi girin." << std::endl;
		}
		else if (tahmin > sayi){
			std::cout << "Daha kucuk bir sayi girin." << std::endl;
		}
		else {
			std::cout << "Tutulan sayiyi dogru tahmin ettiniz.";
		}
	}
	while (tahmin!=sayi);
	
	return 0;
}
