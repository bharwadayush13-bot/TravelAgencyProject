#ifndef Package_h
#define Package_h
#include <iostream>
#include <string>
using namespace std;
class Package{
    int packageid;
    string packagename;
    int destinationid;
    int days;
    double price;
    public:
    Package();
    Package(int id, string name, int destid, int days, double price){
        packageid = id;
        packagename = name;
        destinationid = destid;
        this->days = days;
        this->price = price;
    }
    int getpackageid(){
        return packageid;
    }
    string getpackagename(){
        return packagename;
    }
    int getdestinationid(){
        return destinationid;
    }
    int getdays(){
        return days;
    }     
    double getprice(){
        return price;
    }
    void setpackageid(int id);
    void setpackagename(string name);
    void setdestinationid(int destid);
    void setdays(int days);
    void setprice(double price);
    void displaypackageDetails();
};
#endif