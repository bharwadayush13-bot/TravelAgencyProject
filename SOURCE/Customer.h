#ifndef Customer_h
#define Customer_h
#include<iostream>
#include<string>
using namespace std;
class Customer{
    int customerid;
    string customername;
    string customeraddress;
    string phone;
    public:
    Customer();
    Customer(int id, string name, string address, string phone){
        customerid = id;
        customername = name;
        customeraddress = address;
        this-> phone = phone;
    }
    int getcustomerid(){
        return customerid;
    }
    string getcustomerName(){
        return customername;
    }
    string getcustomerAddress(){
        return customeraddress;
    }
    string getPhone(){
        return phone;
    }
    void setcustomerid(int id);
    void setcustomername(string name);
    void setcustomeraddress(string address);
    void setphone(string phone);
    void displayCustomerDetails();
};
#endif