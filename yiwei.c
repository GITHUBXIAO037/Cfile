#include <stdio.h>
unsigned short hash(unsigned short key){

	return (key>>1)%256;
}
int main(int argc, char const *argv[])
{
	unsigned short a = hash(16);
	unsigned short b =hash(256);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}