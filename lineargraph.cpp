#include <iostream>
using namespace std;

int main(){
    int cntTest;
    cin>>cntTest;
    for(;cntTest>0;cntTest--){
        // int cnt;
        // cin>>cnt;
        // for(;cnt>0;cnt--){
            int num;
            cin>>num;
            for(int i=0;i<num;i++){
                for(int y = 0;y<num;y++){
                    if(i==(num/2)&&y==(num/2)) cout<<"O";
                    else if(i==(num/2)) cout<<"+";
                    else if(y==(num/2)) cout<<"I";
                    else if(i+y==num-1) cout<<"*";
                    else cout<<".";
                }
                cout<<endl;
            }
            
        }
    }
