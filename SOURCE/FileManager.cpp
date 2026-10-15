#include "FileManager.h"
using namespace std;
void FileManager::savecustomer(Customer customer){
     ofstream file("customers.txt",ios::app);
     file<<customer.getcustomerid()<<endl;
     file<<customer.getcustomerName()<<endl;
     file<<customer.getcustomerAddress()<<endl;
     file<<customer.getPhone()<<endl;
     file.close();
}
void FileManager::savedestination(Destination destination ){
     ofstream file("destinations.txt",ios::app);
     file<<destination.getdestinationid()<<endl;
     file<<destination.getdestinationname()<<endl;          
     file<<destination.getdestinationlocation()<<endl;
     file<<destination.getdescription()<<endl;
     file.close();
}
void FileManager::savepackage(Package package){
     ofstream file("packages.txt",ios::app);
     file<<package.getpackageid()<<endl;
     file<<package.getpackagename()<<endl;
     file<<package.getdestinationid()<<endl;
     file<<package.getdays()<<endl;
     file<<package.getprice()<<endl;
     file.close();
}
void FileManager::savebooking(Booking booking){
     ofstream file("bookings.txt",ios::app);
     file<<booking.getbookingid()<<endl;
     file<<booking.getcustomerid()<<endl;
     file<<booking.getpackageid()<<endl;
     file<<booking.getbookingdate()<<endl;
     file.close();
}