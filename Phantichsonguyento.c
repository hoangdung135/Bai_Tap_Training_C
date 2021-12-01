#include <stdio.h>
#include <stdlib.h>
 
int main() 
{
	unsigned int n;
	unsigned i = 2;
	scanf("%u", &n);
	
	if(n < 1) {
	} else if(n == 1) {
		printf("1 = 2^0");
	} else {
		int count = 0;
		while(n > 1) {
			if(n % i == 0) {
				count++;
				if(n == i) {
					printf("%d^%d", i, count);
				}
				n =n/i;
			} else {
				if(count > 0) {
					printf("%d^%d x ", i, count);
					count = 0;
				}
				i++;
			}
		}
	}
	return 0;
}
