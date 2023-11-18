#include <iostream>
using namespace std;


class Burger{
    string meat;
    string bun;
    string vegetable;
    string extra_ingridient;
    public:

    Burger(string meat,string bun,string vegetable,string extra){
        this->bun=bun;
        this->extra_ingridient=extra;
        this->meat=meat;
        this->vegetable=vegetable;
    }

    Burger(string meat,string bun,string vegetable){
        this->bun=bun;
        this->meat=meat;
        this->vegetable=vegetable;
    }
    string getMeat() const {
        return meat;
    }

    string getBun() const {
        return bun;
    }

    string getVegetable() const {
        return vegetable;
    }

    string getExtraIngredient() const {
        return extra_ingridient;
    }
    
};

class burgerFactory{
    public:
    Burger cheeseburger(){
        return Burger("beef","sesame","lettuce","cheese");
    };
    Burger texas(){
        return Burger("beef","sesame","tomato","onion rings");
    };
    Burger burger(){
        return Burger("beef","sesame","lettuce");
    };

    };

int main(){
    burgerFactory *factory=new burgerFactory();
    Burger cheseburger =factory->cheeseburger();
    cout<<cheseburger.getExtraIngredient()<<endl;
    Burger texas=factory->texas();
    cout<<texas.getExtraIngredient()<<endl;
    Burger burger=factory->burger();
    cout<<burger.getVegetable()<<endl;


    return 0;
}