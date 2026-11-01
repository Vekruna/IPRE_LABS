#include <stdio.h>

int main() {
	int num;
	int a;
	printf("enter num: ");
	scanf("%d", &num);
	
	if(num !=1 || num < 1) {
		printf("Error \n");
		return 1;
	}
	while(num !=1) {		
		if(num %2 == 0) {
			num /=2;
		} else {
			num = num*3+1;
		}
	}
	printf("%d", num);
	return 0;
}
