#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    
    map<string,double , greater <string> > myMap;
                myMap["hall1"]=12000.0;
                myMap["hall2"]=23000.0;
                myMap["hall3"]=34000.0;
    	    myMap["hall4"]=11000.0;
		    myMap["hall5"]=28000.0;
    //Fill your code here
     cout<<"1.Update the hall cost"<<endl;                                                                                            
            cout<<"2.Delete hall by cost"<<endl;                                                                                                   
            cout<<"3.Displaying the hall details in descending order"<<endl;
            cout<<"Enter your choice"<<endl;
            int choice;
            cin>>choice;
            double cost;
             map<string , double>::iterator it=myMap.begin();
            while(choice<=3 && choice>=1){
                if(choice==1){
                        
                    cout<<"Enter the hall name to update"<<endl;
                    string hall;
                    cin>>hall;
                    cout<<"Enter the new cost of the hall"<<endl;
                   
                    cin>>cost;
                    myMap[hall]=cost;
                    cout<<"1.Update the hall cost"<<endl;                                                                                            
                    cout<<"2.Delete hall by cost"<<endl;                                                                                                   
                    cout<<"3.Displaying the hall details in descending order"<<endl;
                    cout<<"Enter your choice"<<endl;
                }
                if(choice==2){
                    cout<<"Enter the hall cost"<<endl;
                    cin>>cost;
                  it=myMap.begin();
                   int flag=0;
                    while(it!=myMap.end()){
                        if(it->second==cost){
                            myMap.erase(it);
                            cout<<"The halls with cost "<<it->second<<" are removed"<<endl;
                           flag=1;
                            break;
                        }
                        it++;
                    }
                    if(flag==0){
                        cout<<"No hall with cost "<<cost<<endl;
                    }
                 cout<<"1.Update the hall cost"<<endl;                                                                                            
                cout<<"2.Delete hall by cost"<<endl;                                                                                                   
                cout<<"3.Displaying the hall details in descending order"<<endl;
                cout<<"Enter your choice"<<endl;
                }
                if(choice==3){
                    
                    
                    cout<<"Hall Name"<<"                "<<"Hall Cost"<<endl;
                    it=myMap.begin();
                    while(it!=myMap.end()){
                        
                        cout<<it->first<<"                    "<<(double)(it->second)<<endl;  
                        it++;
                    }
                    cout<<"1.Update the hall cost"<<endl;                                                                                            
                    cout<<"2.Delete hall by cost"<<endl;                                                                                                   
                    cout<<"3.Displaying the hall details in descending order"<<endl;
                    cout<<"Enter your choice"<<endl;
                }
             
            
            cin>>choice;
                
            }
            if(choice>3){
                cout<<"Invalid choice";
            }
}



