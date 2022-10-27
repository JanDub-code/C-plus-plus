#include <iostream>
#include <iomanip>

using namespace std;

const int size=1000;
typedef float type[size];
typedef string saving[size];

int main() {
    type field;
    saving savingField;
    int number =0;

    cout<<"input number "<<number+1<<":";
    cin>> field[number];
    while(field[number]!=1000){
        number ++;
        cout<<"input number "<<number+1<<":";
        cin>>field[number];
    }

    float sum=0;

    for(int i=0;i<number;i++){
        sum+=field[i];
    }

    float average=sum/number;
    int underAverage=0;

    for(int i=0;i<number;i++){
        if(field[i]<average){
            underAverage++;
        }
    }

    type underAverageField;
    int index=0;

    for(int i=0;i<number;i++){
        if(field[i]<average){
            underAverageField[index]+= field[i];
            savingField[i]+=to_string(field[i])+", ";
            index++;
        }
    }
    cout<<"printing out under average numbers from first array: "<<endl;
    for(int i=0;i<index;i++){
        cout<<underAverageField[i]<<endl;
    }
    cout<<"-------------------------------"<<endl;
    cout<<"average is : "<<average<<endl;
    cout<<"sum is : "<<sum<<endl;
    cout<<"number of under average numbers in array : "<<underAverage<<endl;
    cout<<"array of under average numbers : "<<savingField<<endl;
    return 0;
}