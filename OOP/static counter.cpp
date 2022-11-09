#include <iostream>

class TicketMachine{
    static int s_counter;
    int m_number;
    public:
    
    TicketMachine(){
        if(s_counter <4){
            m_number = ++s_counter;
        }else{
            s_counter=0;
            m_number = ++s_counter;
    }}

    void printInfo(){
        std::cout << "Ticket machine number: " << m_number << std::endl;
        s_counter++;
        m_number = s_counter;
    }
};

int TicketMachine::s_counter=0;

int main(){
TicketMachine*tm1=new TicketMachine();
TicketMachine*tm2=new TicketMachine();
TicketMachine*tm3=new TicketMachine();
TicketMachine*tm4=new TicketMachine();
TicketMachine*tm5=new TicketMachine();
TicketMachine*tm6=new TicketMachine();
TicketMachine*tm7=new TicketMachine();
TicketMachine*tm8=new TicketMachine();
TicketMachine*tm9=new TicketMachine();
TicketMachine*tm10=new TicketMachine();

tm1->printInfo();
tm2->printInfo();
tm3->printInfo();
tm4->printInfo();
tm5->printInfo();
tm6->printInfo();
tm7->printInfo();
tm8->printInfo();
tm9->printInfo();
tm10->printInfo();


return 0;
}
