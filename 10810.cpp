#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[101] = {0};
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >>a>>b>>c;
        for(int y=a-1;y<b;y++){
            arr[y] = c;
        }
    }
    for(int k = 0;k<n;k++){
        cout << arr[k] << " ";
    }
   return 0; 
}