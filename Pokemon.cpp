#include "Pokemon.h"
#include<stdio.h>
Pokemon::Pokemon(const char* name) {
	this->name = name;

}
Pokemon::~Pokemon() {

}
Pokemon::Pokemon(const Pokemon& obj) {
	name = obj.name;
	printf("%s���R�s�[\n", name);

}
