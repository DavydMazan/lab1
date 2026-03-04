#include <stdio.h>
#include "Header.h"

int main() {
	const int size = 100;
	product items[size];

    FILE* list;
	int err = fopen_s(&list, "C:/Users/Davyd/Desktop/list1.txt", "r");
	if (err != 0) return 1;

	int i = 0;
	while (i < size && fscanf_s(list, "%d %hi %hi", &items[i].bills, &items[i].coins, &items[i].count) == 3) {
		i++;
	}

    product::totalcalculate(items, size);

    fclose(list);
	return 0;
}