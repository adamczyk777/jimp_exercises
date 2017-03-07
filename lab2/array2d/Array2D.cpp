//
// Created by jadamczyk on 07/03/17.
//

#include "Array2D.h"

int **Array2D(int n_rows, int n_columns) {

    if (n_rows <= 0 || n_columns <= 0){
        return nullptr;
    }

    int **array = new int *[n_rows];
    for (int i=0;i<n_rows;i++) {
        array[i] = new int[n_columns];
    }
    int num = 1;
    for (int j=0;j<n_rows;j++){
        for (int k=0;k<n_columns;k++){
            array[j][k] = num;
            num++;
        }
    }

    return array;
}

void DeleteArray2D(int** array, int n_rows, int n_columns) {
    for (int i=0;i<n_rows;i++){
        delete array[i];
    }
    delete array;
}

