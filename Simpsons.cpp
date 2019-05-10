#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Human{
    std::string name;
    int age;
    char sex;

protected:
    Human(std::string nameIn, int ageIn, char sexIn){
        name = nameIn;
        age = ageIn;
        sex = sexIn;
    }

public:

    Human(){}

    void setName(std::string nameIn) {
        name = nameIn;
    }
    void setAge(int ageIn) {
        name = ageIn;
    }
    void setSex(char sexIn) {
        name = sexIn;
    }
    std::string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    char getSex() {
        return sex;
    }

    ~Human(){
        std::cout << "Destructing human \n";
    }
};


void printInfo(Human human) {

    std::string name = human.getName();
    int age = human.getAge();
    char sex = human.getSex();

    std::cout << "Print Human: " << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "Sex : " << sex << std::endl;
}


class Child:public Human{
private:
    std::string momName, dadName;
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
    std::string getmName();
    std::string getdName();
    int getAllowance();
    void printParents();
};

void Child::setmName(std::string MomsName){
    momName = MomsName;
}
void Child::setdName(std::string DadsName){
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
    }

    Parent(std::string name, int age, char sex){
        //input here
    }

    string printChild{
    for(int i=0; i<3; i++){
        cout<<" "<<names[i]<<endl;
        }
    };
    void setChild(){
    std::string names[3] = {"Bart", "Lisa", "Maggie"};
    }
    void setChildAllowance(int allowance, std::string child){
    Child.setAllowance(allowance);
    }
};

int main(){

    //set parent1
    Parent Marge("Marge", 34, "f");
    //set parent2
    Parent Homer("Homer", 36, "m");
    //set child 1
    Child Bart("Bart" ,10, "m", "Marge", "Homer", 0);
    //set child 2
    Child Lisa("Lisa" ,12, "f","Marge", "Homer", 0);
    //set child 3
    Child Maggie("Maggie" ,3, "f","Marge", "Homer", 0);

    //print barts allowance
    cout<<"Bart's Allowance: "<<Bart.getAllowance()<<endl;

    //have homer set barts allowance to 5
    Homer.setChildAllowance(5,"Bart");

    //print barts allowance
    cout<<"Bart's Allowance: "<<Bart.getAllowance()<<endl;

    //have bart print out all of his parents
    cout<<"Bart's Parrents: "<<Bart.printParents()<<endl;

    printInfo(Marge);
    printInfo(Lisa);
}
