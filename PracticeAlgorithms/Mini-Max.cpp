


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
