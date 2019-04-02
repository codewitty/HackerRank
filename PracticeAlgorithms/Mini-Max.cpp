/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

For example, vector<int> vect{ 0, 0, -1, 4, 5}; . Our minimum sum is 3 and our maximum sum is 9. We would print 3 9
*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void miniMaxSum(vector<int> arr) {
  long long sum_of_elems = 0;
  long long number = arr.size();
  long long largest = arr[0];
  long long smallest = arr[0];
  for (auto &n : arr)
    sum_of_elems += n;
  for (int n = 0; n < (number - 1); n++) {
    if (arr[n + 1] < smallest)
      smallest = arr[n + 1];
    else if (arr[n + 1] > largest)
      largest = arr[n + 1];
  }
  cout << sum_of_elems - largest << " " << sum_of_elems - smallest << endl;
}
int main()
{
  vector<int> vect{ 0, 0, -1, 4, 5};
  miniMaxSum(vect);
  return 0;
}
