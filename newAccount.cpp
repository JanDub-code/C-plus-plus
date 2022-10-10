#include <iostream>
using namespace std;

class Account{
    string m_ownerName;
    float m_balance;
    float m_withdrawalLimit;
    bool m_isTransparent;
    string m_log;
public:
    Account(string ownerName, float withdrawallimit){
        m_ownerName = ownerName;
        m_balance = 0;
        m_withdrawalLimit = withdrawallimit;
        m_isTransparent = false;
        m_log = "";
    }

  void deposit(float amount){
      m_balance += amount;
      m_log += "Deposit: " + to_string(amount)+ ", ";  
    }

    void withdraw(float amount){
        if(amount > m_withdrawalLimit){
            m_log += "Withdrawal limit exceeded, ";
        }else if(amount > m_balance){
            m_log += "Insufficient funds, ";
        }else{
            m_balance -= amount;
            m_log += "Withdrawal: " + to_string(amount)+ ", ";
        }
    }

    void setTransparent(bool isTransparent){
        m_isTransparent = isTransparent;
    }

    void changeWithdrawalLimit(float newLimit){
        m_withdrawalLimit = newLimit;
        m_log+= "Withdrawal limit changed to: " + to_string(newLimit)+ ", ";
    }

    void printInfo(){
    if(m_isTransparent == true){
        cout << "Owner: " << m_ownerName << endl;
        cout << "Balance: " << m_balance << endl;
        cout << "Withdrawal limit: " << m_withdrawalLimit << endl;
        cout << "Is transparent: " << m_isTransparent << endl;
        cout << "Log: " << m_log << endl;
    }
    }

    void printLog(){
        cout << m_log;
    }
    
    void changeOwner(string newOwner){
        m_ownerName = newOwner;
        m_log += "Owner changed to: " + newOwner + ", ";
    }

    string getOwnerName(){
        return m_ownerName;
    }

    float getWithdrawalLimit(){
        return m_withdrawalLimit;
    }
};

int main(){
    Account a1("John", 1000);
    a1.deposit(100);
    a1.withdraw(200);
    a1.setTransparent(false);
    a1.printInfo();
    
    Account a2("Jane", 2000);
    a2.deposit(100);
    a2.withdraw(200);
    a2.setTransparent(true);
    a2.printInfo();
    a2.printLog();
    return 0;
}