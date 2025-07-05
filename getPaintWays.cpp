#include<iostream>
using namespace std;

int getPaintWays(int n,int k){
    //base Case

    if (n == 1) return k;
    if (n == 2) return k + k*(k-1);

    int ans = (k-1)*(getPaintWays(n-1, k) + getPaintWays(n-2, k));
    return ans;
}
int main(){
    int k = 3;// colours
    int n = 3;//post
    
    int ans = getPaintWays(n, k);
    cout << ans << endl;
}