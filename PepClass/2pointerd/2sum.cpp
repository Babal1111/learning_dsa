#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<int> stringToArray(const string& str) {
    vector<int> result;
    string temp;
    
    // Remove square brackets
    string ss= (str.substr(1, str.size() - 2));
    
    while (getline(ss, temp, ',')) {
        result.push_back(stoi(temp));  // Convert each substring to an integer and store in result
    }
    
    return result;
}

int main() {
    string str = "[1,2,3]";
    vector<int> arr = stringToArray(str);

    // Print the array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
