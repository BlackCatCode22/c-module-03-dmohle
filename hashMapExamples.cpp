#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

int main() {
    cout << "Welcome to Hashmap Examples!" << endl;

    map<int, string> myMap;
    myMap.insert(pair<int, string>(1, "one"));
    myMap.insert(pair<int, string>(2, "two"));
    myMap.insert(pair<int, string>(3, "three"));
    myMap.insert(pair<int, string>(4, "four"));
    myMap.insert(pair<int, string>(5, "five"));

    // Output the hashmap.
    // This for loop was suggested by CLion's code complete .
    for (auto item = myMap.begin(); item != myMap.end(); item++) {
        cout << item->first << " " << item->second << endl;
    }

    cout << endl;
    // This is a for : each loop (a little easier to read?)
    for (auto pair: myMap) {
        cout << pair.first << " " << pair.second << endl;
    }


    return 0;
}
