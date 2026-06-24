#include <iostream>

using namespace std;

int main()
{
     int size;

     cout << "Enter the size of the array : ";
     cin >> size;

     int* myArray = new int[size];

     for (int i = 0; i < size; i++)
     {
          cout << "Enter element [" << i+1 << "] : ";
          cin >> myArray[i];
     }

     cout << "-----array registered-----" << endl;
     for (int i = 0; i < size; i++)
     {
          cout << *(myArray+i) << "   ";
     }


     return 0;
}
