#include <iostream>
#include <iomanip>

using namespace std;

/*
    driver main written by Brian
    we just wanted something to commit & branch from
*/

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int rows = 8;
    int cols = 10;
    int minesAmount = 10;

    int gridMines[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            gridMines[i][j] = 0;
        }
    }

    for(int i = 0; i < minesAmount; i++){
        int r = rand() % (rows - 1);
        int c = rand() % (cols - 1);
        if(gridMines[r][c] == 1) i--;
        else gridMines[r][c] = 1;
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << gridMines[i][j];
        }
        cout << endl;
    }

    return 0;
}