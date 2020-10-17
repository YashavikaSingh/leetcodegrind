#include <cmath>
#include <iostream>
using namespace std;


bool isPowerOfTwo(int n)
{

if(n==0)
return false;
    double ans;
    ans = log2(n);

    cout<<ans;

    if (ceil(ans) == ans)
        return true;
    else
    {
        return false;
    }

}




    int main(){

        cout << isPowerOfTwo(1288871111) << endl;
        
        return 0;
    }
