#include<iostream>
using namespace std;
/*struct employee{
    int eId;
    char favChar;
    float salary;
};
int main(){
    struct employee Mohsin;
    Mohsin.eId=1001;
    Mohsin.favChar='m';
    Mohsin.salary=1028309.19;
    cout<<"The value of eId: "<<Mohsin.eId<<endl;
    cout<<"The value of favChar: "<<Mohsin.favChar<<endl;
    cout<<"The value of salary: "<<Mohsin.salary<<endl;
    return 0;
}*/
/*union money
{
    / data /
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}*/

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    return 0;
}
    