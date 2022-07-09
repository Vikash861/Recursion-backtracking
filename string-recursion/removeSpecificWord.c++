#include<bits/stdc++.h>
using namespace std;


bool isPartPresent(string str, string cmp){
    for (int i = 0; i < cmp.length(); i++)
    {
        if(cmp[i] != str[i]){
            return false;
        }
    }
    return true;
}

string removeSpecificWrd(string str){
    if(str.empty()){
        return "";
    }
    if(str[0] == 'a'){
        if( (isPartPresent(str,"app")) && !(isPartPresent(str,"apple")) ){
            str.erase(0,1);
        }
            return removeSpecificWrd(str.erase(0,1));
    }
    else{
        return str[0] + removeSpecificWrd(str.erase(0,1));
    }
}

// type-2 
// string removeApp(string str){
//     if(str.empty()){
//         return "";
//     }
//     if(str[0] == 'a'){
//         if(isPartPresent(str,"apple")){
//             str.erase(0,4);
//         }
//         return removeSpecificWrd(str.erase(0,1));
//     }
//     else{
//         return str[0] + removeSpecificWrd(str.erase(0,1));
//     }
// }

int main(){
    cout << removeSpecificWrd("bcdapplevikash") << endl;
}