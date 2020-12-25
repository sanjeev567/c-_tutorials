#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 40; i++)
    {
        if(i==2){
            break;   //as i-->2 this loop the statement gone break and print 0,1
        }
        cout<<i<<endl;
    }
    for (int i = 0; i < 40; i++)
    {
        if(i==2){    //this will print 0,1,3,4,5...,40 (except 2)
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
