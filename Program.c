#include "myheader.h"



int str_to_int(const char* str1) {
	long result = strtol(str1, NULL, 10);
	return result;
}


int main() {
	int a = subtract(10, 3);
	int b = add(3, 2);
	int c = multiply(10, 20);
	float d = divide(4, 2);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%f\n", d);
	char str1[] = "\narmenia";
	char str2[] = " the best country!";
	char* join = concat(str1, str2);
	printf("result: %s\n", join);
	free(join);
	char buf[20];
	



	const char* str = "123 iq";
	int res = str_to_int(str);
	printf("%d", res);
	return 0;
}





