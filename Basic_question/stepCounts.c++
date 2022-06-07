#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int stepsOfCount(int n, int step)
    {
        if (n == 0)
        {
            return step;
        }
        if (n % 2 == 0)
        {
            return stepsOfCount(n / 2, step + 1);
        }
        else{
            return stepsOfCount(n - 1, step + 1);
        }
    }

    void printStep(int n, int step = 0)
    {
        cout << stepsOfCount(n, step);
    }
};

int main()
{
    solution s1;
    s1.printStep(100);
}
// leetcode Question given an interger return number of step that includes reduce the number till zero. if number is even divide it by 2 if number is odd substract by 1
