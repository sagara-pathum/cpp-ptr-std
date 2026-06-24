#include <iostream>

using namespace std;

int main()
{
     int rows,cols;
     cout << "Enter number  of  rows  : ";
     cin >> rows;
     cout << "Enter number of columns : ";
     cin >> cols;
     int** myArray = new int*[rows];

     for (int i = 0; i < rows; i ++)
     {
          myArray[i] = new int[cols];
     }


     for (int i = 0; i < rows; i++)
     {
          for(int j = 0; j < cols; j++)
          {
               cout << "Enter the element [" << i+1 << "][" << j+1 << "] : ";
               cin >> myArray[i][j];
          }
     }

     cout << "\n-------------------array registerd----------------------\n" << endl;

     for (int i = 0; i < rows; i++)
     {
          for(int j = 0; j < cols; j++)
          {
               cout << myArray[i][j] << "  ";
          }
          cout << endl;
     }

}
