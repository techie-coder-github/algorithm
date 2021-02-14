#include<iostream>
#include<vector>

using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    int i,j,small,pos,temp;
    for(i=0;i<arr.size();i++)
    {
        small=arr.at(i);
        pos=i;
        for(j=i+1;j<arr.size();j++)
        {
            if(small>arr.at(j))
            {
                small=arr.at(j);
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
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
    vector<int> b = selectionSort(a);
    for(i=0;i<b.size();i++)
    {
        cout<<b.at(i)<<" ";
    }
}
