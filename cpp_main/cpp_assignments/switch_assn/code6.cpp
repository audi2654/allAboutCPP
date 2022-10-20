#include<iostream>

int main() {

	int a=5; 
    int b=3;
	
	switch(a) {
	
		case 1:
			printf("One\n");
			
		case 5:
			printf("Two.\n");
			
		case b:     //this b is neither a constant int nor a character so ERROR
			printf("Three.\n");
			
		case 'a':
			printf("Four.\n");
			
		default:
			printf("Default.\n");
			
	}

    return 0;
}	