#include "Destination.h"
using namespace std;
Destination::Destination(){
    destinationid = 0;
    destinationname = "";
    destinationlocation = "";
    description = "";
}
void Destination::setdestinationid(int id){
    destinationid = id;
}
void Destination::setdestinationname(string name){
    destinationname = name;
}
void Destination::setdestinationlocation(string location){
    destinationlocation = location;
}
void Destination::setdescription(string desc){
    description = desc;
}
void Destination::displaydestinationDetails(){
    cout << "Destination ID: " << destinationid << endl;
    cout << "Destination Name: " << destinationname << endl;
    cout << "Destination Location: " << destinationlocation << endl;
    cout << "Description: " << description << endl; 
}