#include<iostream>

#include<iomanip>

using namespace std;

class emp

{  protected:

    char name[100];

    int age;

    int sal;

public:

    void read()

    {     fflush(stdin);

            std::cin.getline(name,100);

            cin>>age;

               cin>>sal;

    }

    virtual void clerk(){}

};

class cse:public emp

{   public:

    void clerk()

    {  cout<<"\nDept: CSE";

        cout<<"\nName: "<<name;

        cout<<"\nAge: "<<age;

        cout<<"\nSalary: "<<sal<<endl;

    }

};

class ece:public emp

{

public:

    void clerk()

    {  cout<<"\nDept: ECE";

        cout<<"\nName: "<<name;

        cout<<"\nAge: "<<age;

        cout<<"\nSalary: "<<sal<<endl;

    }

};

class me:public emp

{ public:

    void clerk()

    { cout<<"\nDept: ME";

        cout<<"\nName: "<<name;

        cout<<"\nAge: "<<age;

        cout<<"\nSalary: "<<sal<<endl;

    }

};

int main()

{ emp *ptr;

    int ch;

    //cout<<"Choose the department.\n1.CSE\n2.ECE\n3.ME\n0.Quit\n";

    cin>>ch;

    switch(ch)

    { case 0:

        return 0;

        case 1: {cse c; ptr=&c; break;}

        case 2: {ece e; ptr=&e; break;}

        case 3: {me m; ptr=&m; break;}

    }

    //cout<<"enter the employee record\n";

    ptr->read();

    ptr->clerk();

            return 0;

}
