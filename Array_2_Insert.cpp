#include <bits/stdc++.h>
using namespace std;

int a[10000];
string str[10000];

void Insert_Int(int n ,int num , int x){
    int i , save , tmp;
    tmp = a[x-1];
    for(i=x-1;i<n;i++){
        save = a[i+1];
        a[i+1] = tmp;
        tmp = save;
    }
    a[x-1] = num;
    for(i=0;i<=n;i++)
        cout<<a[i]<<' ';
    cout<<endl;

}

void Insert_String(int n , string item , int x){
    int i;
    string tmp , save;
    tmp = str[x-1];
    for(i=x-1;i<n;i++){
        save = str[i+1];
        str[i+1] = tmp;
        tmp = save;
    }
    str[x-1] = item;
    for(i=0;i<=n;i++)
        cout<<str[i]<<' ';
    cout<<endl;
}
int main(){
    int i , j, n , num ,x;
    string item;
    cout<<"Enter the number of element and elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element and position you want to start"<<endl;
    cin>>num>>x;
    if(x>n)
        cout<<"Invalid Input for the Position ... Position > Size\n";
    else
        Insert_Int(n , num , x);

    cout<<"Enter the number of String element and elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"Enter the String element and position you want to start"<<endl;
    cin>>item>>x;
    Insert_String(n,item,x);


    return 0;
}
