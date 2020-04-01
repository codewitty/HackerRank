#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int queries;
    string dictKey;
    string value;
    string nameToFind;
    // empty map container 
    map<string, string> myDict; 
    // iterator for find
    map<string,string>::iterator it;
    cin >> queries;
    for (int i = 0; i < queries; ++i){
        cin >> dictKey;
        cin >> value;
        // Add to map here
        myDict.insert(pair<string, string>(dictKey, value)); 
    }
    cin.ignore();
    while (getline(cin,nameToFind)){
        it = myDict.find(nameToFind);
        if (it != myDict.end()) {
            cout << it->first<<"="<< it->second << '\n';
        }
        else
            cout << "Not found" << endl;
    }
  
    return 0;
}
