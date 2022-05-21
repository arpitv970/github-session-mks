#include <iostream> // pre processing library "#"
using namespace std;
#define N 4// number of rows and columns  *** N defined***
void multiply(int mat1[][N],
              int mat2[][N],
              int res[][N])
{

    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j]; // multiplying mat1 and mat2 using rows and columns
            }
        }
    }
}
int main()
{
    int i, j;
    int res[N][N];                   // To store result
    int mat1[N][N] = {{1, 1, 1, 1},  // elements of row 1 for mat1
                      {2, 2, 2, 2},  // elements of row 2 for mat1
                      {3, 3, 3, 3},  // elements of row 3 for mat1
                      {4, 4, 4, 4}}; // elements of row 4 for mat1

    int mat2[N][N] = {
        {1, 1, 1, 1},  // elements of row 1 for mat2
        {2, 2, 2, 2},  // elements of row 2 for mat2
        {3, 3, 3, 3},  // elements of row 3 for mat2
        {4, 4, 4, 4}}; // elements of row 4 for mat2

 multiply(mat1, mat2, res); // calling the declared function above

    cout << "Result matrix is  \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
}