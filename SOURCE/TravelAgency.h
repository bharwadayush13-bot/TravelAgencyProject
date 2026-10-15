#ifndef travelagency_h
#define travelagency_h
#include<iostream>
#include<string>
#include "Customer.h"
#include "Destination.h"
#include "Package.h"    
#include "Booking.h"
#include "FileManager.h"
using namespace std;
class TravelAgency{
    Customer customer[100];
    Destination destination[100];
    Package package[100];
    Booking booking[100];
    int customercount;
    int destinationcount;
    int packagecount;
    int bookingcount;
    FileManager fileManager;
    public:
    TravelAgency();
    void addcustomer();
    void displaycustomers();
    void searchcustomer();
    void updatecustomer();
    void deletecustomer();

    void adddestination();
    void displaydestination();
    void searchdestination();
    void updatedestination();
    void deletedestination();

    void addpackage();
    void displaypackage();
    void searchpackage();
    void updatepackage();
    void deletepackage();

    void addbooking();
    void displaybooking();
    void searchbooking();
    void updatebooking();
    void deletebooking();

    void savedata();
    void loaddata();

    void displayreport();
};
#endif