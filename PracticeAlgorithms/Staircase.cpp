#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int lines, spaces, w = 1, k;
  cin >> lines;
  k = lines - 1;
  for (int i = 0; i < lines; i++) {
    spaces = k;
    for (int j = 0; j < spaces; j++)
    cout << " ";
    for (int m = 0; m < w; m++) 
    cout << "#";
    cout << endl;
     k--;
     w++;

  }
  return 0;
}
