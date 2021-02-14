#include<iostream>
#include<vector>

using namespace std;

vector<int> bubbleSort(vector<int> arr)
{
    int i,j,t;
    for(i=0;i<arr.size();i++)
    {
        for(j=0;j<arr.size()-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
             t=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=t;
            }
        }
    }
    return arr;
}
int main()
{
    int n,i;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a.at(i);
    }
    for(i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    vector<int> b = bubbleSort(a);
    for(i=0;i<b.size();i++)
    {
        cout<<b.at(i)<<" ";
    }
}
