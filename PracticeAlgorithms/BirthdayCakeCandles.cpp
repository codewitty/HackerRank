#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector<int> ar) {

    long long number = ar.size();
    long long largest = ar[0];
    int count = 0;
    for (int n = 0; n < (number - 1); n++) {
     if (ar[n + 1] > largest)
        largest = ar[n + 1];
    }
    for (int n = 0; n < (number); n++) {
      if (ar[n] == largest)
        count += 1;
    }
    return count;
}

int main()
{
  vector<int> vect{ 3, 1, 2, 3};
  birthdayCakeCandles(vect);
  return 0;
}
