#include<iostream>
using namespace std;
int main(){
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n500;
    n1=n2=n5=n10=n20=n50=n100=n500=0;

    cout<<"Please enter the amount to find the number of notes : ";

    switch(amount>=500){
        case 1:
            n500=amount/500;
            amount -= n500*500;
        break;
    }
     switch(amount>=100){
        case 1:
            n100=amount/100;
            amount -= n100*100;
        break;
    }
     switch(amount>=50){
        case 1:
            n50=amount/50;
            amount -= n50*50;
        break;
    }
     switch(amount>=20){
        case 1:
            n20=amount/20;
            amount -= n20*20;
        break;
    }
     switch(amount>=10){
        case 1:
            n10=amount/10;
            amount -= n10*10;
        break;
    }

     switch(amount>=5){
        case 1:
            n5=amount/5;
            amount -= n5*5;
        break;
    }
     switch(amount>=2){
        case 1:
            n2=amount/2;
            amount -= n2*2;
        break;
    }
     switch(amount>=1){
        case 1:
            n1=amount/1;
            amount -= n1*1;
        break;
    }
    cout<<"Number of notes of ruppess 500 in amount "<<amount<<" are: "<<n500<<endl;
    cout<<"Number of notes of ruppess 100 in amount "<<amount<<" are: "<<n100<<endl;
    cout<<"Number of notes of ruppess 50 in amount "<<amount<<" are: "<<n50<<endl;
    cout<<"Number of notes of ruppess 20 in amount "<<amount<<" are: "<<n20<<endl;
    cout<<"Number of notes of ruppess 10 in amount "<<amount<<" are: "<<n10<<endl;
    cout<<"Number of notes of ruppess 5 in amount "<<amount<<" are: "<<n5<<endl;
    cout<<"Number of notes of ruppess 2 in amount "<<amount<<" are: "<<n2<<endl;
    cout<<"Number of notes of ruppess 1 in amount "<<amount<<" are: "<<n1<<endl;


}