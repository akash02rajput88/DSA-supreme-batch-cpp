#include<iostream>
using namespace std;


int hollowRectangle(int colCount)
{
    for (int row = 0; row < colCount; row++)
    {
        if(row == 0 || row == colCount - 1)
        {
            for(int col = 0; col < colCount; col++)
            {
            cout << "*";
            }
        }
        else
        {
            cout << "*";
            for(int col = 0; col < colCount - 2; col++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}


int halfPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for(int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }  
}


int invertedPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for(int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }  
}


int halfNumberPyramid(int n)
{
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < row + 1; col++)
        {
            cout << col+1;
        }
        cout << endl;
    }
}

int invertedNumberPyramid(int n)
{
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n - row; col++)
        {
            cout << col+1;
        }
        cout << endl;
    }
}

int fullPyramid(int num)
{
    for(int row = 0; row < num; row++)
    {
        if(row < num / 2 || row > num / 2)
        {
            for(int col = 0 ; col < num; col++)
            {
                cout << "*";
            }  
        }
        else
            {
                cout << " ";
            }
            cout << endl;
    }
}

int main()
{   
    // hollowRectangle(7);
    // halfPyramid(5);
    // invertedPyramid(6);
    // halfNumberPyramid(8);
    // invertedNumberPyramid(5);
    fullPyramid(11);
    
    return 0;
}