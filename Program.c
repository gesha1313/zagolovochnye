#include "myheader.h"





int main() {
	int a = subtract(sub_A, sub_B);
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
	printf("dlina: %f\n", segment_lenght(0, 0, 3, 4));
	return 0;
}





