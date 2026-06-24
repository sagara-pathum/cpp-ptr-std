#include <iostream>
#include <vector>
#include <algorithm>

bool ascendingCompare(int a, int b) {
    return a < b;
}

bool descendingCompare(int a, int b) {
    return a > b;
}

void sortAscending(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), ascendingCompare);
}

void sortDescending(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), descendingCompare);
}

void customSort(std::vector<int>& vec, bool(*comparePtr)(int,int)) {
    std::sort(vec.begin(), vec.end(), comparePtr);
}


int main() {
    std::vector<int> numbers = {45, 12, 89, 33, 7, 56};

    std::cout << "Given vector : ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";

    sortAscending(numbers);

    std::cout << "Ascending sort: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    sortDescending(numbers);

    std::cout << "Descending sort: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";

    std::vector<int> numbers1 = {52, 112, 29, 11, 70, 321};

    std::cout << "\n\n" << "============Using function pointers ===========\n\n";

    std::cout << "Given vector : ";
    for (int num : numbers1) {
        std::cout << num << " ";
    }

    std::cout << "\n\n";

    bool(*Ptr)(int,int) = ascendingCompare;

    customSort(numbers1,Ptr);

    std::cout << "Ascending sort: ";
    for (int num : numbers1) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    Ptr = descendingCompare;

    customSort(numbers1,Ptr);

    std::cout << "Descending sort: ";
    for (int num : numbers1) {
        std::cout << num << " ";
    }
    std::cout << "\n";


    return 0;
}
