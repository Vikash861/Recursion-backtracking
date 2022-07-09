#include <bits/stdc++.h>
using namespace std;

void towerOfHonai(int n, string src, string helper, string dest ){
    if(n == 1 ){
        cout << "Transfering disk " << n << " From " << src << " to " << dest << endl;
        return;
    }
    towerOfHonai(n-1,src,dest,helper);
    cout << "Transfering disk" << n << " From " << src << " to " << dest << endl;
    towerOfHonai(n-1,helper,dest,src);

}

int main()
{
    towerOfHonai(3,"S","H","D");
}