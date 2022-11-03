class Product{
    int m_weight;
    std::string m_description;
public:
    Product(int weight,std::string description){
        m_weight=weight;
        m_description=description;
    }
    int getWeight(){
        return m_weight;
    }

    std::string getDescription(){
        return m_description;
    }
};