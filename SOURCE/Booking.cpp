#include "Booking.h"
using namespace std;
Booking::Booking(){
    bookingid = 0;
    customerid = 0; 
    packageid =0;
    bookingid =0;
}
void Booking::setbookingid(int id){
    bookingid = id;
}
void Booking::setcustomerid(int id){
    customerid = id;
}
void Booking::setpackageid(int id){
    packageid = id;
}
void Booking::setbookingdate(string date){
    bookingdate = date;
}
void Booking::displayBookingDetails(){
    cout << "Booking ID: " << bookingid << endl;
    cout << "Customer ID: " << customerid << endl;
    cout << "Package ID: " << packageid << endl;   
    cout << "Booking Date: " << bookingdate << endl;
}