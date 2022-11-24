#include <iostream>

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

    void greet(){
        std::cout<<"Hello, I am "<<m_name<<std::endl;
    }

};

class Son: public Father{
    public:
    Son(std::string name):Father("no name"){
        std::cout<<"Son created"<<std::endl;
    }
    
    ~Son(){
        std::cout<<"Son destroyed"<<std::endl;
    }
};

int main() {
    Son * david=new Son("David");
    Father * father = new Father("John");
    david->greet();
    david->Father::greet();
    delete david;
    return 0;
}