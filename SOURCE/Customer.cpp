#include "Customer.h"
using namespace std;
Customer::Customer(){
    customerid = 0;
    customername = "";
    customeraddress = "";
    phone = "";
}
void Customer::setcustomerid(int id){
    customerid = id;
}
void Customer::setcustomername(string name){
    customername = name;
}
void Customer::setcustomeraddress(string address){
    customeraddress = address;
}  
void Customer::setphone(string phone){
    this->phone = phone;
}
void Customer::displayCustomerDetails(){
    cout << "Customer ID: " << customerid << endl;
    cout << "Customer Name: " << customername << endl;
    cout << "Customer Address: " << customeraddress << endl;
    cout << "Phone: " << phone << endl;
}