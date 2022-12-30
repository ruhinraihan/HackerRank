#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,sum=0;
    int num_arr[9];
    //1-9 number occurance prep.
    for (int i=0; i<9; i++)
    {
        num_arr[i] = 0;
    }
    for (int i=0; i<9; i++)
    {
        cin>>a;
        num_arr[a-1]++;
    }
//    for (int i=0;i<9;i++){
//        cout<<num_arr[i];
//    }
//check for duplicate
    for (int i=0; i<9; i++)
    {
        for (int j=0; num_arr[i]>1; j++)
        {
            if (num_arr[j]==0)
            {
                num_arr[i]--;
                num_arr[j]=1;
                sum = sum + abs(i-j);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
