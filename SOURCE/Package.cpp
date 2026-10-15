#include "Package.h"
using namespace std;
Package::Package(){
    packageid = 0;
    packagename = "";
    destinationid = 0;
    days = 0;
    price = 0.0;
}
void Package::setpackageid(int id){
    packageid = id;
}
void Package::setpackagename(string name){
    packagename = name;
}
void Package::setdestinationid(int destid){     
    destinationid = destid;
}
void Package::setdays(int days){
    this->days = days;
}
void Package::setprice(double price){
    this->price = price;   
}
void Package::displaypackageDetails(){
    cout << "Package ID: " << packageid << endl;   
    cout << "Package Name: " << packagename << endl;
    cout << "Destination ID: " << destinationid << endl;
    cout << "Days: " << days << endl;
    cout << "Price: " << price << endl;         
}