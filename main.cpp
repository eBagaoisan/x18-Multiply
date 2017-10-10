#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //variables
    vector<vector<int> > matrix;
    int row = 0;
    int col = 0;

    //Matrix sizing
    matrix.resize(13);
    for (int i = 0; i<matrix.size(); i++)
    {
        matrix[i].resize(13);
    }

    //Matrix Border
    for (int x = 0; x<matrix.size(); x++){
        matrix[x][0] = row;
        row++;
    }
    for (int y = 0; y<matrix.size(); y++){
        matrix[0][y] = col;
        col++;
    }

    //cout<< " X |";
    //Matrix value initialization and print
    for (int r = 1; r<matrix.size(); r++)
    {
        for (int c = 1; c<matrix[r].size(); c++){
            matrix[r][c] = matrix[r][0] * matrix[0][c];
            if (matrix[r][c] < 10){
                cout<<" "<<matrix[r][c]<< " |";
            }
            else if(matrix[r][c] < 100){
                cout<<" "<<matrix[r][c]<<"|";
            }
            else{
                cout<<matrix[r][c]<<"|";
            }
         }
    cout<<endl;
    }
    return 0;
}
