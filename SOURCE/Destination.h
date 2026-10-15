#ifndef Destination_h
#define Destination_h
#include <iostream>
#include <string>
using namespace std;
class Destination{
    int destinationid;
    string destinationname;
    string destinationlocation;
    string description;
    public:
    Destination();
    Destination(int id, string name, string location, string desc){
        destinationid = id;
        destinationname = name;
        destinationlocation = location;
        description = desc;
    }
    int getdestinationid(){
        return destinationid;
    }
    string getdestinationname(){
        return destinationname; 
    }
    string getdestinationlocation(){
        return destinationlocation;
    }
    string getdescription(){
        return description; 
    }
    void setdestinationid(int id);
    void setdestinationname(string name);
    void setdestinationlocation(string location);
    void setdescription(string desc);   
    void displaydestinationDetails();
};
#endif