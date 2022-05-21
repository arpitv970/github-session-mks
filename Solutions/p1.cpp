#include<iostream>
using namespace std;

void multiply(int mat1[4][1],
              int mat2[4][1],
              int res[4][4])
{
    int i, j, k ,N=4;
    for(i=0; i<N; i++){
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            res[i][j] = mat1[i][0] * mat2[i][0];
        }
        
    }
}
int main()
{
    int i, j;
    int res[4][4]; // To store result
    int mat1[4][1] = { {10},
                       {10},
                       {10},
                       {10}};
 
    int mat2[4][1] = {{1},
                       {2},
                       {3},
                       {4} };
 
    multiply(mat1, mat2, res);

    int N=4;

    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
}