#include "container.h"

class Section{
    std::string  m_position;
    std::vector<Container*> m_containers;
public:
    Section(std::string position){
        m_position=position;
    }
    
        void removeProduct(
                std::string productDescription,
                std::string containerPosition
                ){
            for(int i=0;i<m_containers.size();i++){
                if(m_containers.at(i)->getPosition()==containerPosition){
                    m_containers.at(i)->deleteProduct(productDescription);
                }
            }
        }

        void addEmptyContainer(std::string containerPosition){
            Container * container = new Container(containerPosition,100);
            m_containers.push_back(container);
        }

        void addEmptyContainer(std::string containerPosition,int loadCapacity){
            Container * container = new Container(containerPosition,loadCapacity);
            m_containers.push_back(container);
        }

        void removeContainerFromPosition(std::string containerPosition){
            for(int i=0;i<m_containers.size();i++){
                if(m_containers.at(i)->getPosition()==containerPosition){
                    m_containers.erase(m_containers.begin()+i);
                }
            }
        }

        void addProductToContainer(
                std::string productDescription,
                std::string containerPosition
                ){
            for(int i=0;i<m_containers.size();i++){
                if(m_containers.at(i)->getPosition()==containerPosition){
                    m_containers.at(i)->newProduct(productDescription);
                }
            }
        }

        void printStatistics(){
            std::cout<<"Section: "<<m_position<<std::endl;
            std::cout<<"Containers: "<<std::endl;
            for(int i=0;i<m_containers.size();i++){
                m_containers.at(i)->printInfo();
            }
        }

        
};
