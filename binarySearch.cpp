#include <iostream>
#include <vector>

int binarySearch(std::vector<int> array, int searchValue){
    int size = array.size();
    int low = 0;
    int high = size - 1;
    int mid;

    while(low <= mid){
        mid = (low + high) / 2;
        if(array[mid] == searchValue) return mid;

        if(array[mid] < searchValue){
            high = mid - 1;
        }

        if(array[mid] > searchValue){
            low = mid + 1;
        }
    }

    return -1;

}

int main() {

    std::vector<int> array = {1, 3, 7, 10, 24, 67};

    int target = 0;
    std::cin >> target;

    std::cout << binarySearch(array, target);

    return 0;
}
