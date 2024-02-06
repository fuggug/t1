#include <stdio.h>
#include "func.h"

#define M 3
#define N 3

int main() {

	int a, b, f;
	ar Array;
	Array.body = Create_Array(M, N);

	if (Array.body == NULL) {
		return NULL;
	}

	for (a = 0; a < N; a++) {
		for (b = 0; b < M; b++){
			f = Set_Array(Array.body, M, N, a, b, a * b);
			if (f == -1){
				break;
			}
		}
		if (f == -1) {
			break;
		}
	}

	for (a = 0; a < N; a++) {
		for (b = 0; b < M; b++){
			f = Get_Array(Array.body, M, N, a, b);
			if (f == -1) {
				break;
			}
			printf(" %d", Get_Array(Array.body,M,N, a, b));
		}
		if (f == -1) {
			break;
		}
		printf("\n");
	}

	Array_Free(Array.body);


	return 0;
}
