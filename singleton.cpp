#include <iostream>
 class Singleton{
        private:
        int data;
        protected:
            Singleton()= default;
        public:
            static Singleton& get_instance(){
                static Singleton instance;
                return instance;
            }
            void setData(int number){
                this->data=number;
            }
            int getData(){
                return data;
            }

    };
int main(){
    Singleton &singleton1= Singleton::get_instance();
    singleton1.setData(40);
    Singleton &singleton2= Singleton::get_instance();

    std::cout<<singleton1.getData()<<std::endl;
    std::cout<<singleton2.getData()<<std::endl;


    return 0;
}