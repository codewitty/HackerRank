#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> nums(6);
    int sum = 0;
    int m = INT_MIN;

    for (int i = 0; i < 6; i++) {
        nums[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> nums[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

        for (int i = 0; i <= 3; i++) {
            for (int j = 0; j <=3; j++) {
                sum = nums[i][j] + nums[i][j+1] + nums[i][j+2] + nums[i+2][j] + nums[i+2][j+1] + nums[i+2][j+2] + nums[i+1][j+1];
                m = max(m,sum); 
            }
        }
        cout << m << endl;

    return 0;
}
