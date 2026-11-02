#include <stdio.h>

int main() {
	int num;
	
	printf("Enter num: ");
	scanf("%d", &num);
	
	if(num < 2) {
		printf("Neproste");
		return 0;
	}
	for(int i = 2; i*i <= num; i++) {
		if(num%i == 0) {
			printf("Neproste");
			return 0;
		}
	}
	printf("Proste");
	return 0;
}	
