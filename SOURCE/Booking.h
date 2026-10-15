#ifndef Booking_h
#define Booking_h
#include<iostream>
#include<string>
using namespace std;
class Booking{
    int bookingid;
    int customerid;
    int packageid;
    string bookingdate;
    public:
    Booking();
    Booking(int bookingid,int customerid,int packageid,string date){
        this ->bookingid=bookingid;
        this ->customerid=customerid;
        this ->packageid=packageid;
        bookingdate=date;
    }
    int getbookingid(){
        return bookingid;
    }
    int getcustomerid(){
        return customerid;
    }
    int getpackageid(){
        return packageid;
    }
    string getbookingdate(){
        return bookingdate;
    }
    void setbookingid(int id);
    void setcustomerid(int id);
    void setpackageid(int id);
    void setbookingdate(string date);
    void displayBookingDetails();
};
#endif