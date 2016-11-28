#include <iostream>
#include <fstream>
using namespace std;

void printSpiral(int data[][10], int size)
{
    int startingRow = 0, startingCol =0, endingRow = size-1, endingCol = size-1;
    int i;
    
    while((startingRow <= endingRow) && (startingCol <= endingCol))
    {
        for(i = startingCol; i <= endingCol; i++)
        {
            cout << " " << data[startingRow][i];
        }
        startingRow++;
        
        for(i = startingRow; i <= endingRow; i++)
        {
            cout << " " << data[i][endingCol];
        }
        endingCol--;
        
        if(startingCol <= endingCol)
        {
            for(i = endingCol; i >= startingCol; i--)
            {
                cout << " " << data[endingRow][i];
            }
            
        }
        endingRow--;
        if(startingRow <= endingRow)
        {
            for(i = endingRow; i>= startingRow; i--)
            {
                cout << " " << data[i][startingCol];
            }
        }
        startingCol++;
    }
    cout << endl;
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << data[i][j];
        }
        cout << endl;
    }
    return;
}


int main()
{
    int size;
    int dataArray[10][10];
    
    cout << "Enter size of the array: ";
    cin >> size;
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "\nEnter Element [" << i << "][" << j << "]: ";
            cin >> dataArray[i][j];
        }
    }
    
    printSpiral(dataArray, size);
    
    return 0;
   
}
