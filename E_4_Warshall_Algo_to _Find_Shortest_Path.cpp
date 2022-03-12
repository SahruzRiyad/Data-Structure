#include <iostream>
#include <stdio.h>
#define Inf 10000005
#define Sz 105
using namespace std;
int Q[Sz][Sz];
int weight[Sz][Sz];

int main(){
    int i , j , n ,k , sum;
    //freopen("riyad.txt","r",stdin);
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>Q[i][j];
            //if(weight[i][j] == 0)
              //  Q[i][j] = Inf;
            //else Q[i][j] = weight[i][j];
        }
    }
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                sum = Q[i][k] + Q[k][j];
                Q[i][j] = Q[i][j] | (Q[i][k] & Q[k][j]);
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
          cout<<Q[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
