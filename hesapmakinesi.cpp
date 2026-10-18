#include <iostream>

int main() {
	double sayi1, sayi2;
	char islem;
	
	std::cout << "Ilk sayiyi girin:";
	std::cin >> sayi1;
	std::cout << "Ikinci sayiyi girin:";
	std::cin >> sayi2;
	std::cout << "Yapilacak islemi girin (+, -, *, /):";
	std::cin >> islem;
	
	if (islem == '+') {
		std::cout << "Sonuc:" << sayi1 + sayi2;
	}
	else if (islem == '-') {
		std::cout << "Sonuc:" << sayi1 - sayi2;
	}
	else if (islem == '*') {
		std::cout << "Sonuc:" << sayi1 * sayi2;
	}
	else if (islem == '/') {
		std::cout << "Sonuc:" << sayi1 / sayi2;
	}
	else {
		std::cout << "Gecersiz bir islem girdiniz.";
	}
	 return 0;
}
