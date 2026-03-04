#pragma once
struct product {
	int bills = 0;
	short int coins = 0;
	short int count = 1;

	void plus(int bills_x, short int coins_x);
	void multiply(short int x);
	void rounding();
	void output();
	static void totalcalculate(product items[], int size);

};