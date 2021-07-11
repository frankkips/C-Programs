#include <stdio.h>
#define MOLECULE 3E-23
#define QUART 950

int main()
{
	double quartMol = QUART/MOLECULE;
	int quart;
    double molecules;
	printf("Enter mass of water in quarts: \n");
	scanf("%d" , &quart);
	molecules = quart * quartMol;
	printf("The number of molecules in %d quarts is %lf molecules", quart,molecules);
	return 0;
}
EOF