#include<iostream>

int main()
{
    int size;
    std::cout << "Enter number: ";
    std::cin >> size;

    int *myArray = new int[size]; 
    // make myArray pointer point to new integer array
    // and the size of the array is out input number
    // new là từ khoá cấp phát bộ nhớ
    // cấp phát Size ô nhớ cho mảng myArray thuộc kiểu int (4 bytes)

    for(int i = 0; i  < size ; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> myArray[i];
    }

    for(int i = 0; i  < size ; i++)
    {
        std::cout << *(myArray + i) << "\t|\t";
    }

    // Deallocate memory
    delete[]myArray; // delete[] -> giải phóng mảng, delete giải phóng con trỏ
    myArray = NULL; // mảng này sẽ ko trỏ tới bất kì địa chỉ nào nữa



    return 0;
}