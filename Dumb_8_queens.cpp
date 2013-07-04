/** Dumb8QueenProblem -- Using backtracking, 2D array to represent the board
 *  Dumb_8_queens.cpp
 *     
 *  Fall, 2011
 *
 *  Problem: DumbEightQueen Problem
 *     The eight queens puzzle is the problem of placing eight chess queens on an 8×8 chessboard so 
 *     that no two queens attack each other. Thus, a solution requires that no two queens share the same row, 
 *	   column, or diagonal. The eight queens puzzle is an example of the more general n-queens problem of placing
 *	   n queens on an n×n chessboard, where solutions exist for all natural numbers n with the exception of 2 and 3.
 *  
 *  For More Description & Example of Problem:
 *     Check Link: http://en.wikipedia.org/wiki/Eight_queens_puzzle
 *      
 *  Input Format: 
 *      No Input is required, just run the program and it will display output arrangements of 8-queens.
 *
 *  OutPut Format:
 *      This program will out put all possible 8 queen arrangements on Chessboard, where no two queens attack  
 *      each other. i.e. this solution will output arrangements such that no two queens share the same row, column, 
 *      or diagonal. In the Output, 1 will represent queen and 0 non-queen.
 *
 * @Compiler version on which Program is Last Run before uploading to Github: Dev-C++ 5.4.1, Date: 1st July, 2013  
 * @author Gurpreet Singh
 */

#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

bool ok(int board[8][8]){
    for(int c = 7; c > 0; c--){
        int r = 0;
        while(board[r][c] != 1 ){
            r++;
        } // while loop

        for(int i = 1; i <= c; i++){
            if(board[r][c-i] == 1)
                return false;
            else if (board[r-i][c-i] == 1)
                return false;
            else if (board[r+i][c-i] == 1)
                return false;
        } // for loop

    } // for loop
        return true;
} // ok

void print(int board[8][8], int count){
    cout << count << endl;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << board[i][j];
        } // for loop 
        cout << endl;

    } // for loop

    cout << endl;
} // print board

int main (){

    int board[8][8]={0};
    int count = 0;
    for(int i0 = 0; i0 < 8; i0++)
       for(int i1=0; i1 < 8; i1++)
          for(int i2 = 0; i2 < 8; i2++)
         for(int i3 = 0; i3 < 8; i3++)
            for(int i4 = 0; i4 < 8; i4++)
           for(int i5 = 0; i5 < 8; i5++)
              for(int i6 = 0; i6 < 8; i6++)
                 for(int i7 = 0; i7 < 8; i7++){
                board[i0][0]=1;
                            board[i1][1]=1;
                            board[i2][2]=1;
                            board[i3][3]=1;
                            board[i4][4]=1;
                            board[i5][5]=1;
                            board[i6][6]=1;
                            board[i7][7]=1;

                            if(ok(board))print(board, ++count);

                            board[i0][0]=0;
                            board[i1][1]=0;
                            board[i2][2]=0;
                            board[i3][3]=0;         
                            board[i4][4]=0; 
                            board[i5][5]=0;
                            board[i6][6]=0;
                            board[i7][7]=0;
              }
    
    system("pause");
    return 0;
}
