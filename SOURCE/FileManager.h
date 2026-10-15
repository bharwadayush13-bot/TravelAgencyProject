#ifndef FileManager_h
#define FileManager_h

#include <iostream>
#include <fstream>
#include <string>
#include "Customer.h"
#include "Destination.h"
#include "Package.h"
#include "Booking.h"
using namespace std;

class FileManager {
public:
    void savecustomer(Customer customer);
    void savedestination(Destination destination);
    void savepackage(Package package);
    void savebooking(Booking booking);

    void loadcustomer();
    void loaddestination();
    void loadpackage();
    void loadbooking();
};

#endif 