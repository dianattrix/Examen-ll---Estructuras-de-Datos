#include <iostream>
#include "Menu.h"
#include "MachineDetails.h"
int main(){
    
    Menu menu;
    menu.menuPrincipal();
    /*MachineDetails ma1;
    MachineDetails ma2;
    MachineDetails ma3;
    MachineDetails ma4;
    MachineDetails ma5;
    MachineDetails ma6;
    MachineDetails ma7;
    MachineDetails ma8;
    MachineDetails ma9;
    MachineDetails ma10;
    MachineDetails ma11;
    MachineDetails ma12;
    MachineDetails ma13;
    MachineDetails ma14;
    MachineDetails ma15;
    ma1 = MachineDetails("1", 2, 1, 1, 3);
    ma2 = MachineDetails("2",3,1,1,2);
    ma3 = MachineDetails("3",1,0,2,5);
    ma4 = MachineDetails("4",2,0,1,2);
    ma5 = MachineDetails("5",0,1,0,3);
    ma6 = MachineDetails("6",0,0,0,2);
    ma7 = MachineDetails("7",2,1,0,1);
    ma8 = MachineDetails("8",3,1,0,4);
    ma9 = MachineDetails("9",2,0,0,0);
    ma10 = MachineDetails("10",0,4,1,0);
    ma11 = MachineDetails("11",0,2,0,0);
    ma12 = MachineDetails("12",1,2,0,1);
    ma13 = MachineDetails("13",3,0,0,1);
    ma14 = MachineDetails("14",0,1,0,1);
    ma15 = MachineDetails("15",1,3,2,0);
    cout << "Peso total: " << ma1.getFinalWeight()<<endl;
    cout << "Peso total: " << ma2.getFinalWeight() << endl;
    cout << "Peso total: " << ma3.getFinalWeight() << endl;
    cout << "Peso total: " << ma4.getFinalWeight() << endl;
    cout << "Peso total: " << ma5.getFinalWeight() << endl;
    cout << "Peso total: " << ma6.getFinalWeight() << endl;
    cout << "Peso total: " << ma7.getFinalWeight() << endl;
    cout << "Peso total: " << ma8.getFinalWeight() << endl;
    cout << "Peso total: " << ma9.getFinalWeight() << endl;
    cout << "Peso total: " << ma10.getFinalWeight() << endl;
    cout << "Peso total: " << ma11.getFinalWeight() << endl;
    cout << "Peso total: " << ma12.getFinalWeight() << endl;
    cout << "Peso total: " << ma13.getFinalWeight() << endl;
    cout << "Peso total: " << ma14.getFinalWeight() << endl;
    cout << "Peso total: " << ma15.getFinalWeight() << endl;

    /*
        0, 1, 10
        0, 2, 7
        1, 2, 8
        1, 3, 5
        2, 4, 4
        2, 5, 2
        3, 4, 4
        3, 5, 8
        3, 7, 2
        3, 6, 5
        4, 5, 2
        5, 7, 4
        6, 7, 6
        6, 8, 2
        7, 8, 6
        */
    return 0;

}
