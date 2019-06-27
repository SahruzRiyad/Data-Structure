#include <bits/stdc++.h>
#define Mx 1000000009
using namespace std;

int tree[100005*3];
int last;


void Insert(int root , int data){
    if(tree[root] == Mx){ //tree[root] == mx means array storage is empty;
        tree[root] = data;//So we store the data in tree[root]
        last = root;// In last I store the last index number of the tree
        return;
    }
    else if(tree[root] == data){//when tree[root] == data that means the data is previously entered;
        cout<<root<<endl;
        return;
    }
    int left = 2 * root + 1; // As BST has only two child of a parent , so we use 2 * root + 1 as left child
    int right = 2 * root + 2;// 2 * root + 1 as right child
    if(data <= tree[root])//if data is less than or equal to parent then we proceed to left otherwise right;
         Insert(left,data);// root is being equals to left here
    else Insert(right,data);//root is being equals to right here

}



int main(){
    int n , i , j, item,x,root=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>item;
        Insert(0,item);
    }
    for(i=0;i<=last;i++){
        if(tree[i]!=0)//if the array storage is not empty
            cout<<i<<' '<<tree[i]<<endl;
    }

    return 0;
}
