#include <iostream>

#define MATRIX_SIZE_X 3
#define MATRIX_SIZE_Y 3

using namespace std;

int **matrix_init(int n, int m);
void output(int **matrix, int n, int m);

int main(){

    int **matrix = matrix_init(MATRIX_SIZE_X, MATRIX_SIZE_Y);

    output(matrix,MATRIX_SIZE_X, MATRIX_SIZE_Y);

    free(matrix);

    return 0;
}

int **matrix_init(int n, int m){

    int **new_matrix = (int **)malloc(n * m * sizeof(int) + n * sizeof(int*));
    int *p_matrix = (int *)(new_matrix + n);
    for(int i = 0; i < n; i++){
        new_matrix[i] = p_matrix + m * i;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; i < m; i++){
            new_matrix[i][j] = 0;
        }
    }
    return new_matrix;
}

void output(int **matrix, int n, int m){
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
}