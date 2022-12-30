#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int s[3][3];
    int a;
    vector<int>dup;
    vector<int>non_exist;
    int num_arr[9];
    //1-9 number occurance prep.
    for (int i=0;i<9;i++){
            num_arr[i] = 0;
    }
    for (int i=0;i<9;i++){
        cin>>a;
        num_arr[a-1]++;
    }
    for (int i=0;i<9;i++){
        cout<<num_arr[i];
    }

    return 0;
}
