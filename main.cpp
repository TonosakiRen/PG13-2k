#include"main.h"
#include "Pokemon.h"
int main() {
	Pokemon* pikachu = new Pokemon("ピカチュウ");
	printf("１体目　: %s\n", pikachu->name);
	Pokemon* pikachu2 = new Pokemon(*pikachu);
	printf("２体目　: %s\n", pikachu2->name);

	delete pikachu;
	delete pikachu2;
	END();
	return 0;
}

