#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int bananas = 3000, distance = 1000, carry = 1000;
    int x[1000];
    x[0] = bananas;
    for (int i = 0; i < 999; i++)
    {
        int times = ceil((x[i] + 0.0) / carry);
        x[i + 1] = x[i] - (times * 2 - 1);
    }
    cout<<"No. of bananas = "<<bananas<<endl<<"Total distance = "<<distance<<endl<<"Maximum bananas = "<<x[999];
    return 0;
}