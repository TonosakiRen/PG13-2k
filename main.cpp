#include"main.h"
#include "Pokemon.h"
int main() {
	Pokemon* pikachu = new Pokemon("�s�J�`���E");
	printf("�P�̖ځ@: %s\n", pikachu->name);
	Pokemon* pikachu2 = new Pokemon(*pikachu);
	printf("�Q�̖ځ@: %s\n", pikachu2->name);

	delete pikachu;
	delete pikachu2;
	END();
	return 0;
}

