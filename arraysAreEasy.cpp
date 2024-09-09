// dH 9/9/24
// arraysAreEasy.cpp
// An array is a fixed-size, data structure, that must contain the same data types

#include <iostream>
using namespace std;

int main()
{
    cout << "\n Arrays are easy and fun (up until the third dimension)" << endl;

    // Our first array.
    int luckyNums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "\n the value in luckyNums[4] is :" << luckyNums[4] << endl;

    // To find the size of our array, as in the number of elements of our array,
    // we can divide the memory e of our array by the memory size of
    // our array's datatype.

    cout << "\n the (memory) size of our array is: " << sizeof(luckyNums) << endl;
    cout << "\n the size of an int is " << sizeof(int) << endl;

    int numOfElementsInLuckyNums = sizeof(luckyNums) / sizeof(int);

    cout << "\n the number of elements in LuckyNums is: " << numOfElementsInLuckyNums << endl;

    // Create an int array with 100 elements.
    int myIntArrayWith100elements[100];

    // fill the array using a for loop
    for (int i = 0; i < 100; i++) {
         myIntArrayWith100elements[i] = rand() % 100;
         // myIntArrayWith100elements[i] = i;
    }

    // display all element of the array with a ...for loop
    for(int i = 0; i < 100; i++) {
        cout << "myIntArrayWith100elements[" << i << "] is " << myIntArrayWith100elements[i] << endl;

    }

    // create an int 2d array of 3 rows and 4 columns
    int my2dArray[3][4];

    // fill the array with a nested for loop.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            my2dArray[i][j] = rand() % 100;
        }
    }

    // Output our 2D array.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "\n my2dArray[" << i << "][" << j << "] is " <<  my2dArray[i][j] << endl;
        }
    }

    // create an int 3d array of 5 "sheets" of 3 rows and 4 columns
    int my3dArray[5][3][4];

    // fill your 3d array!
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                my3dArray[i][j][k] = rand() % 100;
            }
        }
    }

    // output your 3D array.
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << "\n my3darray[" << i << "][" << j << "]["<< k <<"] is " << my3dArray[i][j][k];
            }
        }
    }



    return 0;
}
