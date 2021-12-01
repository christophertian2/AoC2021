/*
*   Author: Christopher Tian
*   Date: 01 DEC 2021
*   Project: Challenge 1 of AoC 2021 - Find the count of integers in a list that are greater than the previous integer
*   Edge case: first int is not counted
*/

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main() 
{
    // input is in separate text file so have to read in each int
    ifstream input;
    int first = 0,result = 0,number,tmp;
    input.open("input.txt");
    
    // while loop to read in number and compare to last number grabbed 
    // skip the first number since no previous number
    while(input >> number) {
        if(first == 0) {
            tmp = number; first++;           
            continue;
        }
        if(number > tmp) result++; // increment result counter if current number is greater than previous
        tmp = number;    
    }
    input.close();

    cout << result << endl;
}