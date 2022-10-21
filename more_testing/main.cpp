#include <iostream>
using namespace std;

class Account{
private:
    string m_ownerName;
    float m_balance;
    float m_withdrawalLimit;
    bool m_isTransparent;
    string m_log;

public:
    Account(string ownerName,float withdrawalLimit){
        m_ownerName = ownerName;
        m_withdrawalLimit = withdrawalLimit;
        m_isTransparent = false;
        m_balance = 0;
        m_log = "account was created";
    }

    void insertMoney(float amount){
        if(amount <0) {
            cout<< "cannot insert negative value";
        }else {
            m_balance += amount;
        }
    }

    void  withdrawMoney(float amount){
        if(amount > m_balance){
            cout << "not enough money";
        }else {
            m_balance-=amount;
        }
    }

    void changeWithdrawalLimit(float amount){
        if(amount<0){
            cout << "cannot change withdrawal to negative value";
        }else {
            m_withdrawalLimit=amount;
        }
    }

    void setOwnerName(string name){
        if(name.empty()) {
            cerr << "name cannot be empty";
            m_log+="cannot change name";
        }else {
            m_ownerName=name;
            m_log+="Name was changed";
        }
    }
    string getOwnerName(){
        return m_ownerName;
    }

    float getBalance(){
        return m_balance;
    }



    void printInfo(){
        if(m_isTransparent == true){
            cout << "Owner Name :"<<m_ownerName;
            cout << "Balance :"<<m_balance;
            cout << "Withdrawal Limit :"<<m_withdrawalLimit;
        }
    }

    void setTransparent(bool isTransparent){
        m_isTransparent = isTransparent;
    }
};


int main() {

    Account*account= new Account("Ivo",100);
    account->setOwnerName("hehe");
    account->setTransparent(true);
    account->insertMoney(100);
    account->withdrawMoney(50);
    account->printInfo();
    return 0;
}
