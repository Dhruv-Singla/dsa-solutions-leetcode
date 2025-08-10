#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        float f1=true;
        while(f1){
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                a[i]--;
                f1=true;
                break;
            }
            else{
                f1=false;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                a[i]++;
                break;
            }
        }
        count++;
        }
        cout<<count<<endl;
        }
    return 0;
}
