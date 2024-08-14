#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <conio.h>
#include <iomanip>
#include <sstream>
#include <windows.h>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <unordered_set>

using namespace std;

class admin {
public:

	string username, password;


	admin();

	admin(string n, string p);

	string GetUsername() const;

	string GetPassword() const;

	void SetUser(string u);

	void SetPass(string p);
};


class customer :public admin {

public:
	string name, phone_number, address;
	int ID;
	customer* next, * prev;

	customer();

	customer(string name, string username, string phonenumber, string password, int ID, string address);

	string GetName() const;

	string GetAddress()const;

	string GetPhone() const;

	int GetID() const;

	void SetID(int ID);

	void SetName(string name);

	void SetAddress(string address);

	void SetPhone(string phone);
};



class Car {
public:
	int ID;
	int price;
	string carModel;
	string carName;
	string carCompany;
	int kmsDriven;
	string licensePlate;
	bool isAvailable;
	Car* next, * prev;

	// Constructor
	Car();

	Car(std::string model, std::string name, std::string company, int kms, std::string plate, int id, Car* n, Car* p, int pp);

	// Setter and Getter for carModel
	void setCarModel(std::string model);

	std::string getCarModel() const;

	// Setter and Getter for carName
	void setCarName(std::string name);

	std::string getCarName() const;

	// Setter and Getter for carCompany
	void setCarCompany(std::string company);

	std::string getCarCompany() const;

	// Setter and Getter for kmsDriven
	void setKmsDriven(int kms);

	int getKmsDriven() const;

	// Setter and Getter for licensePlate
	void setLicensePlate(std::string plate);

	std::string getLicensePlate() const;

	// Setter and Getter for isAvailable
	void setAvailability(bool available);

	bool isCarAvailable() const;

	//setter and getter for id
	void setID(int id);

	int getID() const;
	//setter and getter for price
	void setPrice(int pre);

	int getPrice() const;
};

class Driver {
public:
	std::string name;
	int id;
	std::string cnic;
	std::string phoneNumber;
	std::string address;
	double salary;
	bool available;
	int age;
	Driver* next, * prev;


	// Constructor
	Driver();

	Driver(const std::string& name, int id, const std::string& cnic, const std::string& phoneNumber,
		const std::string& address, double salary, bool available, int age, Driver* next, Driver* prev);

	// Getter methods
	std::string getName() const;

	int getID() const;

	std::string getCNIC() const;

	std::string getPhoneNumber() const;

	std::string getAddress() const;

	double getSalary() const;

	bool isAvailable() const;

	int getAge() const;

	// Setter methods
	void setName(const std::string& name);

	void setID(int id);

	void setCNIC(const std::string& cnic);

	void setPhoneNumber(const std::string& phoneNumber);

	void setAddress(const std::string& address);

	void setSalary(double salary);

	void setAvailability(bool availability);

	void setAge(int age);
};

class Rent {
public:
	int startDay;
	int startMonth;
	int startYear;
	int endDay;
	int endMonth;
	int endYear;
	double totalCost;
	bool driverPicked;
	string CustomerUname, carname, carlicense;
	Rent* next, * prev;
	int ID;


	Rent();

	Rent(int startD, int startM, int startY, int endD, int endM, int endY, double cost, bool driver);

	// Getters
	int getStartDay() const;

	int getStartMonth() const;

	int getStartYear() const;

	int getEndDay() const;

	int getEndMonth() const;

	int getEndYear() const;

	double getTotalCost() const;

	bool isDriverPicked() const;

	Rent* getNext() const;

	Rent* getPrev() const;

	int getID() const;

	// Setters
	void setStartDay(int day);

	void setStartMonth(int month);

	void setStartYear(int year);

	void setEndDay(int day);

	void setEndMonth(int month);

	void setEndYear(int year);

	void setTotalCost(double cost);

	void setDriverPicked(bool picked);

	void setNext(Rent* nextRent);

	void setPrev(Rent* prevRent);

	void setID(int id);

	void setCustomerUname(const std::string& username);

	std::string getCustomerUname() const;

	void setCarName(const std::string& name);

	std::string getCarName() const;

	void setCarLicense(const std::string& license);

	std::string getCarLicense() const;
};


class System {

public:
	int date, month, year;
	customer* head, * tail;
	Car* heade, * taile;
	Driver* headd, * taild;
	Rent* headr, * tailr;
	int size = 0, csize = 0;
	int dsize = 0;
	int rsize = 0;
	System();

	void AddCustomer();

	void DeleteCustomer(int pos);

	void ForgetPass(string u, int pos);

	void ForgotUsername(int pos);

	void CustomerTable();

	void ShowAllCustomers();

	void SpecificUser(int pos);

	void SearchByID(int pos);

	void SearchByName(string s);

	void SearchByUserName(string s);

	void SearchByPhone(string s);

	void SearchByAddress(string s);

	void readFromFile();

	void writeToFile();

	//car functions

	void AddCar();

	void DeleteCar(int pos);

	void CarTable();

	void ShowAllCars();

	void Specificar(int pos);

	void CSearchByID(int id);


	void CSearchByName(string s);

	void CSearchByCompany(string s);

	void CSearchByModel(string s);

	void CSearchByLicense(string s);

	void UpdateDetails(int pos);

	void sortKMs();

	void swapCars(Car* car1, Car* car2);

	void updateCarIDs();


	void CarreadFromFile();

	void CarwriteToFile();

	//sort by price
	void sortPrice();

	//search using filter from price
	void filterByPrice();

	void DisplayCarsByPriceAscending();

	void DisplayCarsByPriceDescending();

	void DisplayCarsByKmsAscending();

	void DisplayCarsByKmsDescending();

	void UpdatePrice(int pos);

	//Time waits for no man, time is obviously a woman.
	//driver functions

	void AddDriver();

	void DeleteDriver(int pos);

	void DriverTable();

	void ShowAllDrivers();

	void DSearchByID(int pos);

	void DSearchByName(string s);

	void DSearchByAddress(string s);

	void DSearchByPhone(string s);

	void DSearchByCnic(string s);

	void ShowAvailableDrivers();

	void ShowNotAvailableDrivers();

	void filterBySalary();

	void filterByAge();

	void DisplayDriversBySalaryAscending();

	void DisplayDriversBySalaryDescending();

	void readDriverFromFile();

	void writeDriverToFile();

	void RealDateStore();

	void RealDatePrint();

	//rent functions
	void RealTime();

	void RentNow();

	void removeDuplicateLines();

	void storeRentDataToFile();

	void readRentDataFromFile();

	void RentTable();

	void ShowAllRents();

	void DeleteRent(int pos);

	void RSearchByID(int pos);

	void RSearchByUser(string s);

	void SetAvailableDriver();

	void ShowAvailableCars();

	void SShowNotAvailableCars();

	void SetAvailableCar();

	void SetNotAvailableCar();

	void SetNotAvailableDriver();

	void LoginTime()
	{
		auto currentTime = std::chrono::system_clock::now();

		// Extract the time part
		auto time = std::chrono::system_clock::to_time_t(currentTime);
		std::tm timeinfo;
		localtime_s(&timeinfo, &time);

		// Print the time


		std::cout << "logged in at: ";
		RealDatePrint();
		cout << "\t";
		cout << timeinfo.tm_hour << ":" << timeinfo.tm_min;
		if (timeinfo.tm_hour < 12)
		{
			cout << " am";
		}
		else
			cout << "pm";




	}

	int CustomerLogin()
	{
		cin.ignore();
	pl1:
		string s, s1;
		string f;
		int d = 0, m, y;
		int n1 = 0, n2 = 0, n3;

		customer* temp = head;

		int n = 0;

		cout << "\nEnter your Username: ";

		getline(cin, s);

		for (int i = 1; i <= size; i++)
		{
			if (s == temp->GetUsername())
			{
				n = i;
				break;
			}
			temp = temp->next;
		}
		if (n == 0)
		{
			cout << "\nEnter a valid username. ";
			goto pl1;
		}
		else
		{
		mkl2:
			char ch;
			string password = "";

			cout << "\nEnter your password: ";
			ch = _getch();

			while (ch != 13) {
				if (ch == 8) {  // Backspace key
					if (!password.empty()) {
						password.pop_back();
						cout << "\b \b";  // Move the cursor back, overwrite the character with a space, and move the cursor back again
					}
				}
				else {
					password.push_back(ch);
					cout << '*';
				}

				ch = _getch();
			}

			if (password == temp->GetPassword())
			{
				system("cls");
				SpecificUser(n);
				LoginTime();
			}
			else
			{
				cout << "\n\nThe password you Entered is Wrong.";
				d++;
				if (d == 3)
				{
					cout << "\n\nYou Entered the Wrong password too many times.Bye BYE :)\n";
					exit(0);
				}
				goto mkl2;
			}
		}
		return n;
	}

};

#endif
