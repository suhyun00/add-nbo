#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	

	FILE *fp1, *fp2;
	int num1, num2, a, b, c;

	fp1 = fopen (argv[1], "rb");
	fp2 = fopen (argv[2], "rb");

	fread(&num1, sizeof(int), 1, fp1);
	fread(&num2, sizeof(int), 1, fp2);
	
	a= ntohl(num1);
	b= ntohl(num2);
	c=a+b;
	
	printf("%d(%#x) + %d(%#x) = %d(%#x)\n", a, a, b, b, c, c);
	
	fclose(fp1);
	fclose(fp2);
	return 0;

}

