#pragma once

int** Create_Array(int a, int b);

int Set_Array(int** array, int M, int N, int a, int b, int res);

int Get_Array(int** array, int M, int N, int a, int b);

void Array_Free(int** array);

typedef struct {

	int** body;

} ar;