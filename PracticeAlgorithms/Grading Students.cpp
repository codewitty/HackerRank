// Taken from: https://www.hackerrank.com/challenges/grading/problem

vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for (int i = 0; i < grades.size(); ++i) {
        if (grades[i] < 38){
            res.push_back(grades[i]);
        }
        else if (grades[i] % 5 >= 3){
            int num = grades[i];
            while (num % 5 != 0) {
                num += 1;
            }
            res.push_back(num);
        }
        else {
            res.push_back(grades[i]);
        }
    }
    return res;

}


//Driver Code for testing

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for (int i = 0; i < grades.size(); ++i) {
        if (grades[i] < 38){
            res.push_back(grades[i]);
        }
        else if (grades[i] % 5 >= 3){
            int num = grades[i];
            while (num % 5 != 0) {
                num += 1;
            }
            res.push_back(num);
        }
        else {
            res.push_back(grades[i]);
        }
    }
    return res;

}

int main() {
  vector <int> a = {73, 67, 33, 38, 44, 77, 46, 78};
  cout << a.size();
  vector <int> b = gradingStudents(a);
  for (auto i:b){
    cout << "Grade: " << i << endl;
  }
    return 0;
}
