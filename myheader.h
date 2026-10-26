#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define sub_A 10
#define sub_B 3
#define SQUARE(x) ((x)*(x))


double segment_lenght(double x1, double y1, double x2, double y2);

double segment_lenght(double x1, double y1, double x2, double y2) {
	return sqrt(SQUARE(x2 - x1) + SQUARE(y2 - y1));
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
