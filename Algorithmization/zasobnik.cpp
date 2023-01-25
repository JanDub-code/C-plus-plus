//Dynamicky jednosmerny seznam (zasobnik)
#include <iostream>

//Deklarovani zasobniku. Zasobnik obsahuje prvky, co v sobe maji jen data a ukazatel na dalsi prvek,
//takze pokud neni receno jinak, tak budou jen dva "prvky" (radky) v tomhle deklarovani.
struct Prvek{ //jeden prvek
    int data;
    Prvek dalsi;
};
typedef PrvekUkPrvek; //datovy typ ukazatele na prvek seznamu
UkPrvek Start; //Start je ukazatel na prvni prvek (hlavni ukazatel)

struct TypSeznam{
    UkPrvek Start, Konec;
};

//Musime vynulovat hlavni ukazatel.
void init(UkPrvek &S){
    S = NULL;
}

//Jestli je hlavni ukazatel na seznam prazdny.
bool jePrazdny(UkPrvek S){
    return S == NULL; //prvni zpusob, co byl ve skriptech

    //ja bych to radsi delal takhle, ale ve skriptech to bylo tim prvnim zpusobem:
    /if(S == NULL){
        return 1;
    }
    else{
        return 0;
    }/
}

//Vlozeni prvku. Do zasobniku vkladame jen ze zacatku, takze staci tohle. Aspon u nas to tak bude.
void vlozPrvek(UkPrvek &S, int D){
    UkPrvek Pom = new Prvek;
    Pom->data = D;
    Pom->dalsi = S;
    S = Pom;
}

//Hledani v seznamu.
bool projdi(UkPrvek S, int Co){
    UkPrvek Pom = S; //pomocny ukazatel na zacatek
    while(Pom != NULL and Pom->data != Co){
        Pom = Pom->dalsi;
    }
    return Pom != NULL; //vysledek logickou hodnotou
    //pokud chceme vracet ukazatel, zapiseme: return Pom; a typ funkce je UkPrvek
}

//Odstraneni prvku nekde ze stredu, coz nevim, jestli se u zasobniku muze, ale stejne to sem dam.
int odstranStred(TypSeznam &S, UkPrvek Kde){
    UkPrvek Pom = Kde->dalsi; //pomocny ukazatel na ruseny prvek
    Kde->dalsi = Pom->dalsi; //obejiti ruseneho prvku
    int D = Pom->data; //uschova dat ruseneho prvku
    delete Pom; //odstraneni ruseneho prvku z pameti
    return D; //vystup hodnoty ruseneho prvku
}