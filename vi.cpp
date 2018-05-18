#include<iostream>
using namespace std;
void imprimir(char a, char b, char c){
    char aux[3]={a,b,c};
    cout<<" "<<" "<<c<<" "<<" "<<c<<endl;
    cout<<" "<<b<<a<<b<<b<<a<<b<<endl;
    cout<<" "<<" "<<c<<" "<<" "<<c<<endl;
    cout<<" "<<b<<a<<b<<b<<a<<b<<endl;
    cout<<" "<<" "<<c<<" "<<" "<<c<<endl;
}
int main(){
    char a=197;
    char b=196;
    char c=179;
    int k=1;
    int j=1;
    int arr[3][3][3]={{{0,0,0},{0,0,0},{0,0,0}},{{0,0,0},{0,0,0},{0,0,0}},{{0,0,0},{0,0,0},{0,0,0}}};
    for(int*i =(int*)arr;i<(int*)arr+27;i++ ){
            cout<<*i<<c;
            if (i == (int *)arr + (3 * k)-1){
                cout <<endl;
                cout<<b<<a<<b<<a<<b<<a<<endl;
                k++;
            }
            if (i == (int *)arr + (9 * j)-1){
                cout <<endl;
                ++j;
            }
    }
    imprimir(a,b,c);
}
