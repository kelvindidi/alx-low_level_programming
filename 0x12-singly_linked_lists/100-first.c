#include <stdio.h>

/* Function to print a message before main */
void myInitializationFunction(void) __attribute__ ((constructor));

void myInitializationFunction(void) {
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void) {
	/* Your main code here */
	printf("Inside the main function\n");
	return (0);
}
