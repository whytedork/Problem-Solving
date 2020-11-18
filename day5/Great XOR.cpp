#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//Count smaller numbers whose XOR with n produces greater value

int main(){
    fastIO;
    lli q;
    cin >> q;
    while(q--){
        lli x;
        cin >> x;
        lli m = 1;
        lli cnt = 0;
       while(x > 0){
           if((x & 1) == 0){
               cnt |= m;
           }
           m<<=1;
           x>>=1;
       }
        
        cout << cnt << endl;
    }
    return 0;
}
