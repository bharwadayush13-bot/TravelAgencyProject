#include "TravelAgency.h"
using namespace std;
TravelAgency::TravelAgency(){
    customercount=0;
    destinationcount=0;
    packagecount=0;
    bookingcount=0; 
}
void TravelAgency::addcustomer(){
    int id;
    string name;
    string address;
    string phone;
    cout << "Enter Customer ID: ";
    cin >> id;  
    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin,name);
    cout << "Enter Customer Address: ";
    getline(cin,address);
    cout << "Enter Customer Phone: ";
    getline(cin,phone);
    customer[customercount] = Customer(id,name,address,phone);
    customercount++;
    cout << "Customer added successfully!" << endl;
}
void TravelAgency::displaycustomers(){
    if(customercount==0){
        cout<<"No customers found."<<endl;
        return;
    }
    for(int i=0;i<customercount;i++){
        customer[i].displayCustomerDetails();
        cout << "------------------------" << endl;
    }
}
void TravelAgency::searchcustomer(){
    int id;
    cout<<"enter customer id:";
    cin>>id;
    for(int i=0;i<customercount;i++){
        if(customer[i].getcustomerid()==id){
            customer[i].displayCustomerDetails();
            return;
        }
    }
    cout<<"customer not found"<<endl;
}
void TravelAgency::updatecustomer(){
    int id;
    cout<<"enter customer id:";
    cin>>id;
    cin.ignore();
    for(int i=0;i<customercount;i++){
        if(customer[i].getcustomerid()==id){
            string name,address,phone;
            cout<<"enter new name:";
            cin.ignore();
            getline(cin,name);
            cout<<"enter new address:";
            getline(cin,address);
            cout<<"enter new phone:";
            getline(cin,phone);
            customer[i].setcustomername(name);
            customer[i].setcustomeraddress(address);
            customer[i].setphone(phone);
            cout<<"customer updated successfully"<<endl;
            return;
        }
    }
    cout<<"customer not found"<<endl;
}
void TravelAgency::deletecustomer(){
    int id;
    cout<<"enter customer id:";
    cin>>id;
    for(int i=0;i<customercount;i++){
        if(customer[i].getcustomerid()==id){
            for(int j=i;j<customercount-1;j++){
                customer[j]=customer[j+1];
            }
            customercount--;
            cout<<"customer deleted successfully"<<endl;
            return;
        }
    }
    cout<<"customer not found"<<endl;
}
void TravelAgency::adddestination(){
    int id;
    string name,location,desc;
    cout << "Enter Destination ID: ";
    cin >> id;  
    cin.ignore();
    cout << "Enter Destination Name: ";
    getline(cin,name);
    cout << "Enter Destination Location: ";
    getline(cin,location);
    cout << "Enter Description: ";
    getline(cin,desc);
    destination[destinationcount] = Destination(id,name,location,desc);
    destinationcount++;
    cout << "Destination added successfully!" << endl;
}
void TravelAgency::displaydestination(){
    if(destinationcount==0){
        cout<<"No destinations found."<<endl;
        return;
    }
    for(int i=0;i<destinationcount;i++){
        destination[i].displaydestinationDetails();
        cout << "------------------------" << endl;
    }
}
void TravelAgency::searchdestination(){
    int id;
    cout<<"enter destination id:";
    cin>>id;
    for(int i=0;i<destinationcount;i++){
        if(destination[i].getdestinationid()==id){
            destination[i].displaydestinationDetails();
            return;
        }
    }
    cout<<"destination not found"<<endl;
}   
void TravelAgency::updatedestination(){
    int id;
    cout<<"enter destination id:";
    cin>>id;
    cin.ignore();
    for(int i=0;i<destinationcount;i++){
        if(destination[i].getdestinationid()==id){
            string name,location,desc;
            cout<<"enter new name:";
            getline(cin,name);
            cout<<"enter new location:";
            getline(cin,location);
            cout<<"enter new description:";
            getline(cin,desc);
            destination[i].setdestinationname(name);
            destination[i].setdestinationlocation(location);
            destination[i].setdescription(desc);
            cout<<"destination updated successfully"<<endl;
            return;
        }
    }
    cout<<"destination not found"<<endl;
}
void TravelAgency::deletedestination(){
    int id;
    cout<<"enter destination id:";
    cin>>id;
    for(int i=0;i<destinationcount;i++){
        if(destination[i].getdestinationid()==id){
            for(int j=i;j<destinationcount-1;j++){
                destination[j]=destination[j+1];
            }
            destinationcount--;
            cout<<"destination deleted successfully"<<endl;
            return;
        }
    }
    cout<<"destination not found"<<endl;
}
void TravelAgency::addpackage(){
    int id,destid,days;
    string name;
    double price;
    cout << "Enter Package ID: ";
    cin >> id;  
    cin.ignore();
    cout << "Enter Package Name: ";
    getline(cin,name);
    cout << "Enter Destination ID: ";
    cin >> destid;
    cout << "Enter Number of Days: ";
    cin >> days;
    cout << "Enter Price: ";
    cin >> price;
    package[packagecount] = Package(id,name,destid,days,price);
    packagecount++;
    cout << "Package added successfully!" << endl;
}
void TravelAgency::displaypackage(){
    if(packagecount==0){
        cout<<"No packages found."<<endl;
        return;
    }
    for(int i=0;i<packagecount;i++){
        package[i].displaypackageDetails();
        cout << "------------------------" << endl;
    }
}
void TravelAgency::searchpackage(){
    int id;
    cout<<"enter package id:";
    cin>>id;
    for(int i=0;i<packagecount;i++){
        if(package[i].getpackageid()==id){
            package[i].displaypackageDetails();
            return;
        }
    }
    cout<<"package not found"<<endl;
}
void TravelAgency::updatepackage(){
    int id;
    cout<<"enter package id:";
    cin>>id;
    cin.ignore();
    for(int i=0;i<packagecount;i++){
        if(package[i].getpackageid()==id){
            string name;
            int destid,days;
            double price;
            cout<<"enter new name:";
            getline(cin,name);
            cout<<"enter new destination id:";
            cin>>destid;
            cout<<"enter new days:";
            cin>>days;
            cout<<"enter new price:";
            cin>>price;
            package[i].setpackagename(name);
            package[i].setdestinationid(destid);
            package[i].setdays(days);
            package[i].setprice(price);
            cout<<"package updated successfully"<<endl;
            return;
        }
    }
    cout<<"package not found"<<endl;
}
void TravelAgency::deletepackage(){
    int id;
    cout<<"enter package id:";
    cin>>id;
    for(int i=0;i<packagecount;i++){
        if(package[i].getpackageid()==id){
            for(int j=i;j<packagecount-1;j++){
                package[j]=package[j+1];
            }
            packagecount--;
            cout<<"package deleted successfully"<<endl;
            return;
        }
    }
    cout<<"package not found"<<endl;
}
void TravelAgency::addbooking(){
    int id,custid,pkgid;
    string date;
    cout << "Enter Booking ID: ";
    cin >> id;  
    cout << "Enter Customer ID: ";
    cin >> custid;
    cout << "Enter Package ID: ";
    cin >> pkgid;
    cin.ignore();
    cout << "Enter Booking Date (YYYY-MM-DD): ";
    getline(cin,date);
    booking[bookingcount] = Booking(id,custid,pkgid,date);
    bookingcount++;
    cout << "Booking added successfully!" << endl;
}
void TravelAgency::displaybooking(){
    if(bookingcount==0){        
        cout<<"No bookings found."<<endl;
        return;
    }
    for(int i=0;i<bookingcount;i++){
        booking[i].displayBookingDetails();
        cout << "------------------------" << endl;
    }
}       
void TravelAgency::searchbooking(){
    int id;
    cout<<"enter booking id:";
    cin>>id;
    for(int i=0;i<bookingcount;i++){
        if(booking[i].getbookingid()==id){
            booking[i].displayBookingDetails();
            return;
        }
    }
    cout<<"booking not found"<<endl;
}
void TravelAgency::updatebooking(){
    int id;
    cout<<"enter booking id:";
    cin>>id;    
    for(int i=0;i<bookingcount;i++){
        if(booking[i].getbookingid()==id){
            int custid,pkgid;
            string date;
            cout<<"enter new customer id:";
            cin>>custid;
            cout<<"enter new package id:";
            cin>>pkgid;
            cin.ignore();
            cout<<"enter new booking date:";
            getline(cin,date);
            booking[i].setcustomerid(custid);
            booking[i].setpackageid(pkgid);
            booking[i].setbookingdate(date);
            cout<<"booking updated successfully"<<endl;
            return;
        }
    }
    cout<<"booking not found"<<endl;
}
void TravelAgency::deletebooking(){
    int id;
    cout<<"enter booking id:";
    cin>>id;
    for(int i=0;i<bookingcount;i++){
        if(booking[i].getbookingid()==id){
            for(int j=i;j<bookingcount-1;j++){
                booking[j]=booking[j+1];
            }
            bookingcount--;
            cout<<"booking deleted successfully"<<endl;
            return;
        }
    }
    cout<<"booking not found"<<endl;
}
void TravelAgency::savedata(){
    for(int i=0;i<customercount;i++){
        fileManager.savecustomer(customer[i]);
    }
    for(int i=0;i<destinationcount;i++){
        fileManager.savedestination(destination[i]);
    }
    for(int i=0;i<packagecount;i++){
        fileManager.savepackage(package[i]);
    }
    for(int i=0;i<bookingcount;i++){
        fileManager.savebooking(booking[i]);
    }
    cout<<"data saved successfully"<<endl;
}
void TravelAgency::loaddata(){
    fileManager.loadcustomer();
    fileManager.loaddestination();
    fileManager.loadpackage();
    fileManager.loadbooking();
    cout<<"data loaded successfully"<<endl;
}