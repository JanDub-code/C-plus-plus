#include <iostream>

int main(){

    class sibenice{
        std::string heslo;
        std::string zobrazeni;
        char inp;
        int pocetpokusu;
        int konec;
    public:
        sibenice(std::string hesl){
            heslo=hesl;
            for(int i=0;i<heslo.length();i++){
                zobrazeni.push_back('_');
            }
            pocetpokusu=5;
            konec=0;
        }
        std::string getheslo(){
            return zobrazeni;
        }

        int konecc(){
            if(konec==1){
                std::cout<<"vyhrál jsi";
            }
            if(konec==2){
                std::cout<<"prohrál jsi";
            }
            return konec;
        }

        char getinput(){
            std::cout<<"vyber si písmeno"<<std::endl;
            std::cin>>inp;
            return inp;
        }

        void zobrazeno(){
            for(int i=0;i<heslo.length();i++){
                if(inp==i){
                    zobrazeni[i]=inp;
                    std::cout<<"trefa"<<std::endl;
                    pocetpokusu++;
                    for(int j=0;j<heslo.length();j++){
                        if(j!='_'){
                            konec=1;
                        }
                    }
                }
                pocetpokusu--;
            }
        }
        void vykreslitSibenici() {
    if (pocetpokusu >= 1) {
        std::cout << "  ____" << std::endl;
        std::cout << " |    |" << std::endl;
    }
    if (pocetpokusu >= 2) {
        std::cout << " |    O" << std::endl;
    }
    if (pocetpokusu >= 3) {
        std::cout << " |   /|\\ " << std::endl;
    }
    if (pocetpokusu >= 4) {
        std::cout << " |   / \\" << std::endl;
        konec=2;
    }
    std::cout << " |" << std::endl;
    std::cout << "_|_________" << std::endl;
}
        
    };

    sibenice* sibenic=new sibenice("kouzlo");
    while(sibenic->konecc()==0){
    sibenic->getinput();
    sibenic->zobrazeno();
    std::cout<<sibenic->getheslo();
    sibenic->vykreslitSibenici();
    sibenic->konecc();
    }



    return 0;
}