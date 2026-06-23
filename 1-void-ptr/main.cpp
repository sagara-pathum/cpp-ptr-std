#include <iostream>
#include <string>
using namespace std;

void printValue(void* ptr,char type)
{
    switch (type)
    {
        case 'i': cout << *((int*)ptr) <<endl; break;
        case 'c': cout << *((char*)ptr) <<endl; break;
        case 's': cout << *((string*)ptr) <<endl; break;
        case 'b': cout << *((bool*)ptr) <<endl; break;
        case 'f': cout << *((float*)ptr) <<endl; break;
    }
}

int main()
{
    int five = 5;
    float pi = 3.14;
    bool logic = true;
    char first_letter = 'a';
    string name = "sagara";

    printValue(&five,'i');
    printValue(&pi,'f');
    printValue(&logic,'b');
    printValue(&first_letter,'c');
    printValue(&name,'s');

    return 0;
}
