#include <bits/stdc++.h>
using namespace std;

//delete duplicaates from array using stl algorithm

int main()
{
    vector<int>arr {1,1,2,2,2,3,4,5,5,5,6,7,7};
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(int x:arr)
    cout << x << " ";
    return 0;
}



