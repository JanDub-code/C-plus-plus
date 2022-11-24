#include <iostream>
#include <vector>

class Car{
protected:
    int m_wheels;
    std::string m_brand;
    int m_weight;
    int m_id;
    static int s_counter;
public:
    Car(std::string brand, int weight){
        m_wheels = 4;
        m_brand = brand;
        m_weight = weight;
        m_id = ++s_counter;
    }

    int getWeight(){
        return  m_weight;
    };

    std::basic_string<char> getBrand(){
        return m_brand;
    };

    int getID(){
        return m_id;
    }


};

class CarCatalog {
    std::vector<Car*> m_cars;
public:
    CarCatalog() {
        
    
    m_cars={};
    }

    void addCar(std::string brand, int weight){
        Car * car = new Car(brand,weight);
        m_cars.push_back(car);
    }

    void printOutCars(){
        for(int i=0;i<m_cars.size();i++){
            std::cout<<"Car Brand: ";
            std::cout<<m_cars.at(i)->getBrand()<<std::endl;
            std::cout<<"Car ID: ";
            std::cout<<m_cars.at(i)->getID()<<std::endl;
            std::cout<<"Car Weight: ";
            std::cout<<m_cars.at(i)->getWeight()<<std::endl;
        }
    }
};

int Car::s_counter=0;

int main(){
    CarCatalog * catalog = new CarCatalog();
    catalog->addCar("BMW", 1500);
    catalog->addCar("Audi", 1600);
    catalog->addCar("Mercedes", 1700);
    catalog->printOutCars();

    return 0;
}
