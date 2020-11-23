#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin >> n;
    int sum  = 0;
    int N = n;
    while(n>0){
        int lastdigit =  n%10;
        sum += pow(lastdigit,3);
        n /= 10;
    }
    if(N == sum)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong" << endl;
    return 0;
}



