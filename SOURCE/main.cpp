#include <iostream>
#include"TravelAgency.h"
using namespace std;
int main(){
    TravelAgency travelagency;
    travelagency.loaddata();
    int choice;
    do{
        cout<<"\n===== TRAVEL AGENCY BOOKING====="<<endl;
        cout<<"1.add customer"<<endl;
        cout<<"2.display customer"<<endl;
        cout<<"3.search customr"<<endl;
        cout<<"4.update customer"<<endl;
        cout<<"5.delete customer"<<endl;
        cout<<"6.add destination"<<endl;
        cout<<"7.display destination"<<endl;
        cout<<"8.search destination"<<endl;
        cout<<"9.update destination"<<endl;
        cout<<"10.delete destination"<<endl;
        cout<<"11.add package"<<endl;
        cout<<"12.display package"<<endl;
        cout<<"13.search package"<<endl;
        cout<<"14.update package"<<endl;
        cout<<"15.delete package"<<endl;
        cout<<"16.add booking "<<endl;
        cout<<"17.display booking "<<endl;
        cout<<"18.search booking"<<endl;
        cout<<"19.update booking"<<endl;
        cout<<"20.delete booking"<<endl;
        cout<<"21.report "<<endl;
        cout<<"22.save data"<<endl;
        cout<<"23.exit"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            travelagency.addcustomer();
            break;
        case 2:
            travelagency.displaycustomers();
            break;
        case 3:
            travelagency.searchcustomer();
            break;
        case 4:
            travelagency.updatecustomer();
            break;
        case 5:
            travelagency.deletecustomer();
            break;
        case 6:
            travelagency.adddestination();
            break;
        case 7:
            travelagency.displaydestination();
            break;
        case 8:
            travelagency.searchdestination();
            break;
        case 9:
            travelagency.updatedestination();
            break;
        case 10:
            travelagency.deletedestination ();
            break;
        case 11:
            travelagency.addpackage();
            break;
        case 12:
            travelagency.displaypackage();
            break;
        case 13:
            travelagency.searchpackage();
            break;
        case 14:
            travelagency.updatepackage();
            break;
        case 15:
            travelagency.deletepackage();
            break;
        case 16:
            travelagency.addbooking();
            break;
        case 17:
            travelagency.displaybooking();
            break;
        case 18:
            travelagency.searchbooking();
            break;
        case 19:
            travelagency.updatebooking();
            break;
        case 20:
            travelagency.deletebooking();
            break;
        case 21:
            travelagency.displayreport();
            break;
        case 22:
            travelagency.savedata();
            break;
        case 23:
            travelagency.savedata();
            cout<<"Thank You for using Travel Agency Booking."<<endl;
            break;
        
        default:
        cout<<"Invalid Choice"<<endl;
            break;
        }
    }while(choice!=23);
    return 0;
}