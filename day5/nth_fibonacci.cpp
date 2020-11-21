//T = O(1) , S=O(1)
#include <iostream> 
#include <cmath> 
using namespace std;

int fib(int n) 
{ 
    if(n==1)
        return 0;
        
    double d = (1 + sqrt(5)) / 2; 
    return round(pow(d, n) / sqrt(5)); 
} 
  
int main () 
{ 
    int n;
    cin >> n;
    cout << fib(n); 
    return 0; 
}