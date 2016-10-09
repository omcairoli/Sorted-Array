//
//  sortFunction.cpp
//  Sorted_Arrays
//
//  Created by Oscar M. Cairoli on 2/7/16.
//  Copyright (c) 2016 OMC. All rights reserved.
//

#include "sortFunction.h"
#include <iostream>
using namespace std;

void searchNumber(int iArray[], int arraySize, int searchNum)
{
    int counter  = 0;
    
    cout << "Searching number " << searchNum << "..." << endl;
    for (int i = 0; i < arraySize; i++)
    {
        if ( iArray[i] == searchNum )
        {
            cout << "Your number was found!" << endl;
            cout << (i + 1) << " " << "elements were tested in the search." << endl;
        }
        else if ( iArray[i] != searchNum )
        {
            counter++;
            
            if ( (i == arraySize - 1) && (counter == arraySize) )
            {
                cout << "Your number was not found." << endl;
            }
        }
    }
}

void sortedArray(int iArray[], int arraySize)
{
    cout << "Sorted Array: " << endl;
    cout << "-------------" << endl;
    cout << "[" << " ";
    
    for (int i = 0; i < arraySize; i++)
    {
        cout << iArray[i] << " ";
    }
    cout << "]";
    cout << endl;
    cout << endl;
}

void arraySort(int iArray[], int arraySize)
{
    srand((unsigned int) time(0));
    
    int randomNum = 0;
    int flag = 1;
    int temp = 0;
    
    cout << "Unsorted Array: " << endl;
    cout << "---------------" << endl;
    cout << "[" << " ";
    
    for (int i = 0; i < arraySize; i++)
    {
        randomNum = 1 + (rand() % 100);
        iArray[i] = randomNum;
        cout << iArray[i] << " ";
    }
    cout << "]";
    cout << endl;
    
    for (int j = 0; j < arraySize && flag; j++)
    {
        flag = 0;
        
        for (int k = 0; k < arraySize - 1; k++)
        {
            if ( iArray[k] > iArray[k + 1] )
            {
                temp = iArray[k];
                iArray[k] = iArray[k + 1];
                iArray[k + 1] = temp;
                flag = 1;
            }
        }
    }
}
