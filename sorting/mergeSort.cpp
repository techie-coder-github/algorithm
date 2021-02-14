#include<iostream>
#include<vector>

using namespace std;

void merge_arr(vector<int> &l,vector<int> &r,vector<int> &a)
{
    int ln=l.size();
    int rn=r.size();
    int i=0,j=0,k=0;
    while(i<ln&&j<rn)
    {
        if(l.at(i)<=r.at(j))
        {
            a.at(k)=l.at(i);
            i=i+1;
        }
        else
        {
            a.at(k)=r.at(j);
            j=j+1;
        }
        k=k+1;
    }
    while(i<ln)
    {
        a.at(k)=l.at(i);
        i++;
        k++;
    }
    while(j<rn)
    {
        a.at(k)=r.at(j);
        j++;
        k++;
    }
}
void merge_short(vector<int> &a)
{
   int n=a.size();
   if(n<2)
    return;

   int i,k=0,mid = n/2;
   vector<int>l(mid);
   vector<int>r(n-mid);
   for(i=0;i<mid;i++)
   {
       l[i]=a[k];
       k++;
   }
   for(i=0;i<n-mid;i++)
   {
       r[i]= a[k];
       k++;
   }
   merge_short(l);
   merge_short(r);
   merge_arr(l,r,a);
}
int main()
{
    int n,i;
    cout<<"enter the no of element \n"<<endl;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a.at(i);
    }
    merge_short(a);
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
}
