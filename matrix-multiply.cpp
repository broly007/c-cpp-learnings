#include <iostream.h>
#include <conio.h>

#define SIZE_MAT_ONE 3
#define SIZE_MAT_TWO 3



void multiply( int mat1[][3], int mat2[][3], int res[][3]) {
        int i, j, k;
        for (i = 0; i < SIZE_MAT_ONE; i++){
     	  for (j = 0; j < SIZE_MAT_TWO; j++){
     		  res[i][j] = 0;
         	  for (k = 0; k < SIZE_MAT_ONE; k++) {
       		       res[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
   }


int main() {
    int res[3][3];
    int mat1[3][3] = { {1, 1, 1}, 
                       {2, 2, 2}, 
                       {3, 3, 3} };
     
    int mat2[3][3] = { {1, 1, 1}, 
                       {2, 2, 2}, 
                       {3, 3, 3} }; 

    multiply(mat1, mat2, res);
    cout << "result of the array is "<< endl;
    for(int i = 0; i < 3; i++) {
     	for (int j = 0; j < 3; j++){
     		cout << res[i][j] << " ";
        }
        cout << endl;
    }
   	getch();
   	return 0;
   }
