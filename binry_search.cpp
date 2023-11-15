#include <iostream>
//binary search whith class method
class BinarySearch {
public:
    BinarySearch (int *array, int size) : arr(array), size(size){}
        int search(int num) {
        int left = 0;
        int right = size -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == num) {
                return mid;
            }

            if (arr[mid] > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        }

private:
    int *arr;
    int size;
};
int main() {
    int sortedArray[]= {0 ,1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arraySize = sizeof(sortedArray) / sizeof(sortedArray[0]);
    BinarySearch ob1(sortedArray, arraySize);
    int num;
    std::cout<<"select number for search : ";
    std::cin>>num;
    int answer = ob1.search(num);
    std::cout << "search number :::  " << answer<< std::endl;
    return 0;
}
