#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>











int subtract(int x, int y);
int add(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);
char* concat(const char *a, const char *b);


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
