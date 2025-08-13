#include <iostream>
using namespace std;

int pas[14] = {1,4,10,20,35,56,84,120,165,220,286,364,455,560};
int n,a,b,s=1;

signed main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
    }
    if(n<3){
        cout << 0;
    }
    else{
        cout << pas[n-3];
    }

    return 0;
}