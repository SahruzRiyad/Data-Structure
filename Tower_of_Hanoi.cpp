#include <iostream>
using namespace std;

void TowerOfHanoi(int n , char from_rod , char to_rod , char aux_rod){
    if(n == 1){
        cout<<"Move Disk 1 from "<<n<<' '<<from_rod<<" to rod "<<to_rod<<endl;
        return;
    }
    TowerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<"Move Disk "<<n<<" from "<<from_rod<<" to rod " <<to_rod<<endl;
    TowerOfHanoi(n-1, aux_rod , to_rod , from_rod);

}
int main(){
    int i , j ,n ;
    cin>>n;
    TowerOfHanoi(n,'A','C','B');
    return 0;
}
