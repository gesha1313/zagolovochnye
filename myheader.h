#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define sub_A 10
#define sub_B 3
#define SQUARE(x) ((x)*(x))

#define TRIANGLE_MODE 1




double segment_lenght(double x1, double y1, double x2, double y2);

double segment_lenght(double x1, double y1, double x2, double y2) {
	return sqrt(SQUARE(x2 - x1) + SQUARE(y2 - y1));
}


double triangle_perimeter(double x1, double y1, double x2, double y2, double x3, double y3);
int is_triangle(double x1, double y1, double x2, double y2, double x3, double y3);


int is_triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = segment_lenght(x1, y1, x2, y2);   /* сторона между точками 1 и 2 */
	double b = segment_lenght(x2, y2, x3, y3);   /* между 2 и 3 */
	double c = segment_lenght(x3, y3, x1, y1);   /* между 3 и 1 */

	/* неравенство треугольника: каждая сторона строго меньше суммы двух других */ //if zamenyaem na uslovnuy compliling
	if (a < b + c && b < a + c && c < a + b)
		return 1;
	else
		return 0;
}

/* периметр - просто сумма сторон */
double triangle_perimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
	double a = segment_lenght(x1, y1, x2, y2);
	double b = segment_lenght(x2, y2, x3, y3);
	double c = segment_lenght(x3, y3, x1, y1);
	return a + b + c;
}






int subtract(int x, int y);
int add(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);
char* concat(const char *a, const char *b);
int str_to_int(const char* str1);


int subtract(int x, int y) {
	int z = x - y;
	return z;
}

int add(int x, int y) {
	int z = x + y;
	return z;
}

int multiply(int x, int y) {

	int z = x * y;
	return z;
}

float divide(int x, int y) {
	if (y == 0) {
		printf("deleni ne 0 zapresheno");
		return 0;
	}
	else {
		float z = x / y;
		return z;
	}

}

//concat for char type
char* concat(const char* a, const char* b) {
	size_t len1 = strlen(a);
	size_t len2 = strlen(b);

	char* result = (char*)malloc(len1 + len2 + 1);
	if (result == NULL) {
		printf("mistake!!!!! memory is losing!");
		return NULL;
	}



	strcpy(result, a);
	strcat(result, b);
	return result;

}

int str_to_int(const char* str1) {
	long result = strtol(str1, NULL, 10);
	return result;
}
