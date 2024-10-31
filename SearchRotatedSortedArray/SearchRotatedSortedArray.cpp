// SearchRotatedSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int GetElementIndex(const std::vector<int>& arr, int target)
{
    if (arr[arr.size() - 1] >= target)
    {
        for (auto i = arr.size() - 1; i >= 0; --i)
            if (arr[i] == target)
                return i;
    }
    else
    {
        for (auto i = 0; i < arr.size(); ++i)
            if (arr[i] == target)
                return i;
    }
    
    return -1;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The numbers of the rotated sorted array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        int target = 0;
        std::cout << "The target number to find: ";
        std::cin >> target;

        std::cout << "The index of the target is: " << GetElementIndex(vec, target) << std::endl << std::endl;
    }
}
