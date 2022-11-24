#include <iostream>

class Father{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
};

class Son: private Father{
    private:
    int d;
    public:
    void test(){
        std::cout<<d<<std::endl;
        std::cout<<a<<b<<std::endl;
    }
};

int main() {
    // od predka odvozujeme potomka (specializovaná verze predka)
    // predek superclass potomek subclass
    // vše co je v predkovy bude v potomkovi (všechny metody, atributy)

    Father * father = new Father();
    Son * son = new Son();

    father->a=10;
    son->a=10;    

    return 0;
}