//
//  main.cpp
//  Sorted_Arrays - Bubble Sort
//
//  Created by: Oscar M. Cairoli.


#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sortFunction.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int iArray[100] = { 0 };
    int arraySize = 0;
    int searchNum = 0;
    
    cout << "Enter an Array size between 1 to 100: ";
    cin >> arraySize;
    cout << endl;
    
    arraySort( iArray, arraySize );
    sortedArray( iArray, arraySize );
    
    cout << "Enter a value to search for (1 - 100): ";
    cin >> searchNum;
    cout << endl;
    
    searchNumber( iArray, arraySize, searchNum);
    
    return 0;
}