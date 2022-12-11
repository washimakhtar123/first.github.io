#include<iostream>
using namespace std;
int main(){

    int m,n;
    cin>>m>>n;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<"for printing of 2D array "<<endl;
  for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Enter key for searching element  "<<endl;
    cin>>key;
    cout<<"for searching element in  2D array "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==key){
                cout<<i<<" "<<j;
            
            }
        }
        cout<<endl;
    }
}
