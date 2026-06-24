#include <iostream>

using namespace std;

void rtnMinAndMax(int arr[],int length_arr,int* minimum, int* maximum){
     *(int*)minimum = arr[0];
     *(int*)maximum = arr[0];

     for (int i = 0; i < length_arr; i++)
     {
          if (arr[i] < *minimum)
          {
               *minimum = arr[i];
          }

          if (arr[i] > *maximum)
          {
               *maximum = arr[i];
          }
     }
}

int main()
{
    int myarray[5] = {2,40,6,8,10};
    int minNumber;
    int maxNumber;
    rtnMinAndMax(myarray,5,&minNumber,&maxNumber);
    cout << "Min number is : " << minNumber << endl;
    cout << "Max number is : " << maxNumber << endl;
    return 0;
}
