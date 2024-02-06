#include "func.h"
#include <stdlib.h>

int** Create_Array(int a, int b) {

	int** array = malloc(a * sizeof(int*) + a * b * sizeof(int));

	if (array == NULL) {
		return NULL;
	}

	char* pc = array;
	pc += a * sizeof(int*);
	for (int i = 0; i < a; i++)
		array[i] = pc + i * b * sizeof(int);
	return array;
}

int Set_Array(int** array, int M, int N, int a, int b, int res) {

	if (array == NULL) {
		return -1;
	}

	if (a < 0 || b < 0 || a > M || b > N) {
		return -1;
	}

	return array[a][b] = res;
}

int Get_Array(int** array,int M, int N, int a, int b) {

	if (array == NULL) {
		return -1;
	}

	if (a < 0 || b < 0 || a > M || b > N) {
		return -1;
	}

	return array[a][b];
}

void Array_Free(int** array) {
	if (array != NULL) {
		free(array);
	}
}



