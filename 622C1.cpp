#include <bits/stdc++.h>

using namespace std;
#define sz (int)2e5+5

int STMax[4*sz];
int STMin[4*sz];
int A[sz];
int buildMax(int l, int r, int index)
{
    if(l==r)
    {
        STMax[index] = A[i];
    }
    else
    {
        STMax[index] = max(buildMax(l,(l+r)/2,2*index+1),buildMax((l+r)/2 +1 ,r,2*index+2));
    }
    return STMax[index];

}

int buildMin(int l, int r, int index)
{
    if(l==r)
    {
        STMin[index] = A[i];
        return STMin[index];
    }
    STMin[index] = min(buildMin(l,(l+r)/2,2*index+1),buildMin((l+r)/2 +1 ,r,2*index+2));
    return STMin[index];

}

int main()
{

}
