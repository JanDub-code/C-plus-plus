#include "product.h"
#include <vector>


class Container{
    std::string m_position;
    int m_loadCapacity;
    std::vector <Product*> m_itemList;
public:
    Container(std::string descriptionOfPosition,int loadCapacity){
        m_position=descriptionOfPosition;
        m_loadCapacity = loadCapacity;
        m_itemList={};
    }

    void newProduct(std::string descriptionOfProduct){
        Product * product = new Product(1,descriptionOfProduct);
        m_itemList.push_back(product);
    }

    void deleteProduct(std::string description){
        for(int i=0;i<m_itemList.size();i++){
            if(m_itemList.at(i)->getDescription()==description){
                m_itemList.erase(m_itemList.begin()+i);
            }
        }
    }

    void printInfo(){
        std::cout<<"Position: "<<m_position<<std::endl;
        std::cout<<"Load capacity: "<<m_loadCapacity<<std::endl;
        std::cout<<"Items: "<<std::endl;
        for(int i=0;i<m_itemList.size();i++){
            std::cout<<m_itemList.at(i)->getDescription()<<std::endl;
        }
    }

    std::string setPosition(std::string position){
        m_position=position;
        return m_position;
    }

    std::string getPosition(){
        return m_position;
    }
};