#include <iostream>
#include<string>
#include <stdio.h>
#include <exception>
using namespace std;
int main()
{

//fill your code here
int n;// no of seats
cin>>n;
int Arr[n+1];
for(int i=4;i<=n;i++)
    Arr[i]=1;
char ans;
cin>>ans;//y or n
while(ans!='n'){
    
    int seat;
    cin>>seat;//seatno
    try{
      
       
        if(seat<0 || seat>n){
            throw "ArrayIndexOutOfBoundsException";
        }
        else if(Arr[seat]==1){
            throw "SeatNotAvailableException";
        }
        else {
            cout<<"Seat booked successfully";
            Arr[seat]=1;
        }
    }
    catch (string s){
        cout<<s;
    }
    cin>>ans;
}
return 0;

}

