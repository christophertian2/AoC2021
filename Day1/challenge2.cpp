/*
*   Author: Christopher Tian
*   Date: 01 DEC 2021
*   Project: Challenge 2 of Day 2 of AoC 2021 - 
*   Edge case: first int is not counted
*/

#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main() 
{
    // input is in separate text file so have to read in each int
    ifstream input;
    int first = 0,result = 0, three = 0, previous = 0,current = 0, number;
    input.open("test.txt");
    
    // while loop to read in number and compare to last number grabbed 
    // skip the first number since no previous number
    while(input >> number) {
        
        
        
    }
    input.close();

    cout << result << endl;
}