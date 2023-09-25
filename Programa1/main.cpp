#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int horas;
	int mins;
	int minres; 
	printf("Mins:");
	scanf("%i",&mins);
	horas=mins/60;
	minres=mins%60;
	printf("Equivale a %i: %02i",horas, minres);
}
