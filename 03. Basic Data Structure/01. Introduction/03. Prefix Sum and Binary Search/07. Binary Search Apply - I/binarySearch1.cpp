#include<bits/stdc++.h>
using namespace std;

int main()
{  int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++) {
    cin>>a[i];
}
int x;
cin>>x;
bool flag = false;
int l = 0;
int r = n-1;

while(l<=r) {
    int mid_index = (l+r)/2;
    if(a[mid_index]==x) {
      flag = true;
      return mid_index;
      break;
    }
    else {
        if(a[mid_index]<x) {
           l = mid_index+1;
        }
        else {
            r = mid_index-1;
        }
    }

}
if(flag==true) {
    cout<<"Found"<<endl;
}
else {
    cout<<"Not Found"<<endl;
}

    return 0;
}