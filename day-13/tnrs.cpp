#include<iostream>

using namespace std;

//tnrs==Take nothing return something

int findsum(){

    int num;
    cout<<"num:";
    cin>>num;

    int sum=0;

    for(int i=0;i<=num;i++){
        sum+=i; //sum=sum+i;

    }
    return sum;
}

int main(){

        cout<<"sum is "<<findsum()<<"/-  ";

return 0;  
    
}