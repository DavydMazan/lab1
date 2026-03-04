#include <iostream>
#include "Header.h"

void product::plus(int bills_x, short int coins_x) {
	bills += bills_x;
	coins += coins_x;
}

void product::multiply(short int x) {
	bills *= x;
	coins *= x;
}

void product::rounding() {
	if (coins >= 100) {
		bills += coins / 100;
		coins = coins % 100;
	}
}

void product::output() {
	product::rounding();
	std::cout << "Ціна продукту: " << bills << " Гривень " << coins << " Копійки" << std::endl;
}

void product::totalcalculate(product items[], int size) {
	product total;
	for (int j = 0; j < size; j++) {
		items[j].multiply(items[j].count);
		total.plus(items[j].bills, items[j].coins);
	}
	total.rounding();
	std::cout << "Сума чеку: " << total.bills << " Гривень " << total.coins << " Копійки" << std::endl;
	total.coins = ((total.coins + 9) / 10) * 10;
	std::cout << "Сума до оплати з заокругленням: " << total.bills << " Гривень " << total.coins << " Копійки" << std::endl;
}
