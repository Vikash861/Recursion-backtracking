#include <bits/stdc++.h>
using namespace std;


long long maxSubSumKConcat(int *arr, int n, int k)
{
vector<int>CONCAT;
    for(int i = 0; i < (n*k); i++){
        CONCAT.push_back(arr[i%n]);
    }
    
    long int maxSum = -2147483647;
    int currSum = 0;
    for(int i = 0; i < (n*k); i++){
        currSum += CONCAT[i];
        if(maxSum < currSum){
            maxSum = currSum;
        }
        if(currSum < 0 && maxSum){
            currSum = 0;
        }
    }
    
    if(maxSum <= 0){
        for(int i = 0; i < (n*k); i++){
            currSum += CONCAT[i];
            if(maxSum < currSum){
                maxSum = currSum;
            }
        }
    }
    
    return maxSum;
}


int main()
{
    int arr[17] = {341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625};

    int n = 17;
    int k = 16;
    cout << maxSubSumKConcat(arr, n, k) << endl;


};

// 70118


// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625
// 341, 74,-37, 608, -262, 286, 955, -506, 580, 630, 238, 222, 975, 624, 596, 305, -625