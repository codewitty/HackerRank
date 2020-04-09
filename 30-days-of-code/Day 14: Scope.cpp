#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int> inputArray){
        elements = inputArray;
    }

    int computeDifference(){
        int maxInt = 0;
        for (int i = 0; i < elements.size() - 1; ++i){
            for(int j = i +1; j < elements.size(); ++j){
                maxInt = max(maxInt, abs(elements[i] - elements[j]));
            }
        }
        maximumDifference = maxInt;
        return maxInt;
    }


}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}

/*
// Driver Code for testing
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int computeDifference(vector<int> elements){
        int maxInt = 0;

        for (int i = 0; i < elements.size() - 1; ++i){
          for(int j = i + 1; j < elements.size(); ++j){
            maxInt = max(maxInt, abs(elements[i] - elements[j]));
          }
        }
        return maxInt;

}

int main() {
  vector <int> a = {8, 19, 3, 2, 7};
    cout << computeDifference(a);
    
    return 0;
}
*/

