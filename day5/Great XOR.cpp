#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//Count smaller numbers whose XOR with n produces greater value

int main() {
  fastIO;
  lli q;
  cin >> q; //number of queries
  while (q--) {
    lli x;
    cin >> x;
    lli m = 1;
    lli cnt = 0;
    while (x > 0) {
      if ((x & 1) == 0) {
        cnt |= m;
      }
      m <<= 1;
      x >>= 1;
    }

    cout << cnt << endl;
  }
  return 0;
}

/* NOTE:-
What is astonishing, if a bit in n at position m is 0, it tells us that 2^m
additional possible results fulfill the condition k⊕n>n, because there are 2^m numbers that can become 1, after 0⊕1.
That means that we only need to go through the bits of nn and if the bit at the position m is 0, we add 2^m to the counter variable. Since we add only powers of two, we don't need to add the numbers, but can OR them together.
*/
