#include <iostream>

class TicketMachine{
    static int s_counter;
    int m_number;
    public:
    TicketMachine(){
        s_counter++;
        m_number = s_counter;
    }

    void printInfo(){
        std::cout << "Ticket machine number: " << m_number << std::endl;
    }
};

int TicketMachine::s_counter=0;

int main(){
TicketMachine*tm1=new TicketMachine();
TicketMachine*tm2=new TicketMachine();
TicketMachine*tm3=new TicketMachine();

tm1->printInfo();
tm2->printInfo();
tm3->printInfo();
return 0;
}
