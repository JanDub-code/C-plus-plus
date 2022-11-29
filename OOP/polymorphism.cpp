#include <iostream>
// pozdní vazba

class Father{
    std::string m_name;
    public:
    Father(std::string name){
        m_name = name;
        std::cout<<"Father created"<<std::endl;
    }
    ~Father(){
        std::cout<<"Father destroyed"<<std::endl;
    }

    virtual void greet(){
        std::cout<<"Hello, I am "<<m_name<<std::endl;
    }

};

class Son: public Father{
    public:
    Son(std::string name):Father(name){
        std::cout<<"Son created"<<std::endl;
    }
    
    ~Son(){
        std::cout<<"Son destroyed"<<std::endl;
    }
};

class Daughter: public Father{
    public:
    Daughter(std::string name):Father(name){
        std::cout<<"Daughter created"<<std::endl;
    ~Daughter(){
        std::cout<<"Daughter destroyed"<<std::endl;
    }
};

int main() {
    Father * david = new Son("John");
    david->greet();
    Son* petr = new Son("Petr");
    petr->greet();

    return 0;
}