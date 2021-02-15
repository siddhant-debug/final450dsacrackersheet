#include<iostream>
#include<algorithm>
using namespace std;
int getmindiff(int arr[],int m ,int k)
{
    if(m==1)
    return 0;

    sort(arr,arr+m);
    int ans =arr[m-1]-arr[0];

    int small = arr[0]+k;
    int big=arr[m-1]-k;
    if (small>big)
    {
        swap(small,big);
    }
    for (int i = 1; i < m-1; i ++) 
    { 
        int subtract = arr[i] - k; 
        int add = arr[i] + k; 
  
        // If both subtraction and addition 
        // do not change diff 
        if (subtract >= small || add <= big) 
            continue; 
  
        // Either subtraction causes a smaller 
        // number or addition causes a greater 
        // number. Update small or big using 
        // greedy approach (If big - subtract 
        // causes smaller diff, update small 
        // Else update big) 
        if (big - subtract <= add - small) 
            small = subtract; 
        else
            big = add; 
    } 
  
    return  min(ans, big - small); 
} 
    




int main()
{
    int arr[]={4,5,6,7,8,2};
    int m=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    cout<<"Maximum diff is "<<getmindiff(arr,m,k);
    return 0;

}