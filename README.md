==================================================
PROJECT TITLE: Travel Agency Booking System
==================================================
Student Name: Ayush Bharwad
Enrollment Number: IU2541230484
Project Code: CPP44
GitHub Repository: https://github.com/bharwadayush13-bot/TravelAgencyProject

--------------------------------------------------
1. PROJECT DESCRIPTION
--------------------------------------------------
A robust C++ application designed to efficiently manage destinations, travel packages, customer details, and agency bookings with persistent file handling.

--------------------------------------------------
2. CORE CLASSES
--------------------------------------------------
* Customer: Manages customer details and personal data.
* Destination: Handles location details and sightseeing spots.
* Package: Manages travel packages, pricing, and itinerary.
* Booking: Handles agency bookings and transaction mapping.
* TravelAgency: Core system class handling the central menu and operations.
* FileManager: Handles data persistence, saving, and loading from files.

--------------------------------------------------
3. PROJECT FOLDER STRUCTURE
--------------------------------------------------
IU2541230484_CPP44_Project/
├── Source/          -> Contains main.cpp and modular .h/.cpp files
├── Data/            -> Contains data files (.txt/.dat) for persistence
├── Diagrams/        -> Contains Use Case, Class, and Sequence Diagrams
├── Executable/      -> Contains the compiled TravelAgency program
├── Screenshots/     -> Contains program execution screenshots
├── README.txt       -> Project overview and instructions
└── ProjectReport.pdf-> Detailed project report

--------------------------------------------------
4. HOW TO BUILD & RUN
--------------------------------------------------
Prerequisites: C++ Compiler (GCC / Clang)

Compilation Command:
g++ -std=c++17 Source/*.cpp -o Executable/TravelAgency

Execution Command:
./Executable/TravelAgency
