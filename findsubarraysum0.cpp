#include<bits/stdc++.h>
using namespace std;
bool subarraysum(int arr[],int n)
{
    unordered_set<int> sumSet;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum==0||sumSet.find(sum)!=sumSet.end())
        return true;
        sumSet.insert(sum);
    }
    return false;
}
int main()
{
    int arr[20],n;
    cout<<"enter size of array";
    cin>>n;
    cout<<"Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if (subarraysum(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}
