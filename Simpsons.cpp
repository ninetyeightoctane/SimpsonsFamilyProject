#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Human{
private:
    string name;
    int age;
    char sex;

public:
    Human(){
        name = " ";
        age = 0;
        sex = " ";
    }
    Human(string n,int old,char mf){
        name=n;
        age=old;
        sex=mf;
    }
    void setName(string);
    void setAge(int);
    void setSex(char);
    string getName();
    int getAge();
    char getSex();
};

void Human::setName(string str){
    name=str;
}
void Human::setAge(int num){
    age=num;
}
void Human::setSex(string sx){
    sex=sx;
}
string Human::getName(){
    return name;
}
int Human::getAge(){
    return age;
}
char Human::getSex(){
    return sex;
}


class Child:public Human{
private:
    string momName, dadName;
    int allowance;
public:
    Child(){
        momName= " ";
        dadName= " ";
        allowance = 0;
    }

    Child(string mName, string dName, int pay){
        momName= mName;
        dadName= dName;
        allowance = pay;
    }
    void setmName(string);
    void setdName(string);
    void setAllowance(int);
    string getmName();
    string getdName();
    int getAllowance();
    void printParents();
};

void Child::setmName(string MomsName){
    momName = MomsName;
}
void Child::setdName(string DadsName){
    momName = DadsName;
}
void Child::setAllowance(int money){
    allowance = money;
}
string Child::getmName(){
    return momName;
}
string Child::getdName(){
    return dadName;
}
int Child::getAllowance(){
    return allowance;
}
void Child::printParents(){

}



class Parent : public Human {
private:
    vector<string> Children;  //save the name of the children
public:
    Parent(){
        //declare here
    }

    Parent(string name, int age, char sex){
        //input her
    }

    void printChild{
    //print children vector
    }
    void setChild(){
    //input children into children vector
    }
    void setChildAllowance(allowance, child){
    child.setAllowance(allowance);
    }
};

int main(){

    //set parent1
    Parent Marge("Marge", 34, "f");
    //set parent2
    Parent Homer("Homer", 36, "m");
    //set child 1
    Child Bart("Bart" ,10, "m", "Marge", "Homer"", 0);
    //set child 2
    Child Lisa("Lisa" ,12, "f","Marge", "Homer"", 0);
    //set child 3
    Child Maggie("Maggie" ,3, "f","Marge", "Homer"", 0);

    //set children inside parents vector
    Marge.setChild(Bart);
    Marge.setChild(Lisa);
    Homer.setChild(Bart);
    Homer.setChild(Lisa);

    //print barts allowance
    cout<<"Bart's Allowance: "<<Bart.getAllowance()<<endl;

    //have homer set barts allowance to 5
    Homer.setChildAllowance(5,"Bart");

    //print barts allowance
    cout<<"Bart's Allowance: "<<Bart.getAllowance()<<endl;

    //have bart print out all of his parents
    cout<<"Bart's Parrents: "<<Bart.getParents()<<endl;

    void printInfo(Human){
        //print all info about person
    }

    //printInfo(Marge);
    //printInfo(Lisa);
}
