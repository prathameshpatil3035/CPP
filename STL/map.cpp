#include <iostream>
#include <map>

using namespace std;

int main() {
    // Constructor
    map<string, int> myMap;

    // insert
    myMap.insert({"John", 30});
    myMap.insert(make_pair("Alice", 25));
    myMap["Bob"] = 40;

    // Output: Map elements after insert: Alice 25, Bob 40, John 30
    cout << "Map elements after insert: ";
    for (const auto& pair : myMap) {
        cout << pair.first << " " << pair.second << ", ";
    }
    cout << endl;

    // empty
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl; // Output: Is map empty? No

    // size
    cout << "Size of map: " << myMap.size() << endl; // Output: Size of map: 3

    // find
    auto it = myMap.find("Alice");
    if (it != myMap.end()) {
        cout << "Found Alice in the map with value: " << it->second << endl; // Output: Found Alice in the map with value: 25
    } else {
        cout << "Alice not found in the map" << endl;
    }

    // erase
    myMap.erase("Alice"); // Remove Alice from the map

    // Output: Map elements after erase: Bob 40, John 30
    cout << "Map elements after erase: ";
    for (const auto& pair : myMap) {
        cout << pair.first << " " << pair.second << ", ";
    }
    cout << endl;

    // clear
    myMap.clear(); // Clear all elements from the map

    // Output: Is map empty after clear? Yes
    cout << "Is map empty after clear? " << (myMap.empty() ? "Yes" : "No") << endl;

    return 0;
}
