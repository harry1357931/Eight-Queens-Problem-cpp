/** EightQueenProblem -- Using 1D Array, backtracking and goto
 *  EightQueen.cpp
 *     
 *  Fall, 2011
 *
 *  Problem: EightQueens Problem
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
 
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int q[8];
    q[0] = 0;
    int c = 0,j,k,l,u,v;
    int count = 0;

NC: //cout  << "Next column\n" << "Column = " << c << endl;
    c++;
    if (c == 8) goto print;
    q[c] = -1;

NR: //cout << "Next row\n" << "Row = " << q[c] << "\nColumn = " << c << endl;
    q[c]++;
    if (q[c] == 8) goto backtrack; 
    for(int i = 0; i < c; i++){
        if(q[i] == q[c] || abs(q[c] - q[i]) == (c - i))
            goto NR;
    }
    goto NC;

backtrack:
    //cout << "Backtrack" << endl;
    //cout <<"Column = " << c << endl;
    c--;
    if(c == -1) return 0;
    goto NR;

print:
    //cout << "print" << endl;
    ++count;
    int fa[8][8]={0};
    cout << count << endl;
    for(int i = 0; i <= 7; i++){
            cout << q[i];
            u=q[i];
            fa[u][i]=1;
    }
    cout<<endl<<endl<<endl<<"The solution set is :"<<endl;
    
    for(j=0;j<=7;j+=1){
       for(k=0;k<=7;k++){
          cout<<fa[j][k];                
      }                   
       cout<<endl;
    }
    cout <<"Press Any key to see NEXT>>> Solution >>>" <<endl;
    system("pause");
    goto backtrack;

    return 0;
}
