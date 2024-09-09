// dH 9/9/24
// cppWhileLoopRevised.cpp

#include <iostream>
using namespace std;

// my function prototype
// my function signature
// my function declaration
int sumArange(int, int);

int main() {
    cout << "\n My revised range function - that will now work! " << endl;

    // Call (or invoke) the function named sumArange().
    int aPlaceForMyReturnValue = 0;
    aPlaceForMyReturnValue = sumArange(3, 6);

    // Let's take a look at the return value!
    cout << "\n the returned value is: " << aPlaceForMyReturnValue << endl;



    return 0;
}

// define my function named sumArange.
int sumArange(int startRange, int endRange) {
    // this function will sum the range of numbers
    // between startRange and endRange

    // We need an accumulator
    int theSumOftheRange = 0;

    for (int i = startRange; i <= endRange; i++) {
        cout << "\n inside sumARange and theSumOfTheRange = " << theSumOftheRange << endl;
        // Let's take a look at i every time through this loop
        cout << "\n i is equal to: " << i << endl;
        cout << "\n theSumOftheRange is equal to: " << theSumOftheRange << endl;
        theSumOftheRange = theSumOftheRange + i;
    }
    return theSumOftheRange;

}