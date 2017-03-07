//
// Created by jadamczyk on 07/03/17.
//

#include "Array2D.h"

int main() {

    int **tab = NewArray2D(5, 7);
    int **tab2 = NewArray2D(0, 7);
    int **tab3 = NewArray2D(5, 0);
    int **tab4 = NewArray2D(0, 0);

    for (int i=0; i<5;i++){
        for (int j=0;j<7;j++){
            cout << tab[i][j] << endl;
        }
    }

    for (int i=0; i<5;i++){
        for (int j=0;j<7;j++){
            cout << tab2[i][j] << endl;
        }
    }

    for (int i=0; i<5;i++){
        for (int j=0;j<7;j++){
            cout << tab3[i][j] << endl;
        }
    }

    for (int i=0; i<5;i++){
        for (int j=0;j<7;j++){
            cout << tab4[i][j] << endl;
        }
    }
    
    
    
    return 0;
}