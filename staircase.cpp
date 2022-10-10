/**
 * @file staircase.cpp
 * @author Micelle Tran
 * @brief Staircase Algorithm challenge from HackerRank.com 
 * @version 0.1
 * @date 2022-10-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std; 

void printStairs(int n);

int main()
{
    printStairs(4);
    cout << endl;
    printStairs(6);
    return 0;
}

/*
    Goal Output
    n = 6
        # (5) (0)
       ## (4) (1)
      ### (3) (2)
     #### (2) (3)
    ##### (1) (4)
   ###### (0) (5)
*/
void printStairs(int n)
{
    // structure of staircase
    char stair[n][n];
    int index = 0;
    // fill array with space 
    for(int a = 0; a < n; a++)
    {
        for(int b = 0; b < n; b++)
        {
            stair[a][b] = ' ';
        }
    }

    // create the stair case
    for(int a = 0; a < n; a++)
    { // rows
        index = a+1; // how many '#' needed
        for(int b = 0; b < index; b++)
        {
            // stair[row][column index starting from the last index]
            stair[a][n - 1 - b] = '#';
        }
    }

    // print the staircase
    for(int a = 0; a < n; a++)
    {
        for(int b = 0; b < n; b++)
        {
            cout << stair[a][b];
        }
        cout << endl;
    }

}