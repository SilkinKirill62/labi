#include <stdio.h>
int main() {
	char c[2];
	printf("%d", (char*)&c[1] - (char*)&c[0]);

}