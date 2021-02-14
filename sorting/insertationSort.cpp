#include<iostream>
#include<vector>

using namespace std;
vector<int> insertationSort(vector<int> arr)
{
    int i,j,temp;
    for(i=1;i<arr.size();i++)
    {
        temp=arr.at(i);
        j=i-1;
        while(temp<arr[j])
        {
            if(j==-1)
                break;

            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    vector<int> b = insertationSort(a);
    for(i=0;i<b.size();i++)
    {
        cout<<b.at(i)<<" ";
    }
}
