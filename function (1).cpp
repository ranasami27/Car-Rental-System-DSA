#include "function.h"


admin::admin()
{
}

admin::admin(string n, string p)
{
	this->username = n;
	this->password = p;
}

string admin::GetUsername() const
{
	return username;
}

string admin::GetPassword() const
{
	return password;
}

void admin::SetUser(string u)
{
	username = u;
}

void admin::SetPass(string p)
{
	password = p;
}


customer::customer() : ID(0), next(NULL), prev(NULL)
{
}

customer::customer(string name, string username, string phonenumber, string password, int ID, string address) :admin(username, password)
{
	this->name = name;
	this->phone_number = phonenumber;
	this->ID = ID;
	this->address = address;
}

string customer::GetName() const
{
	return name;
}

string customer::GetAddress() const
{
	return address;
}

string customer::GetPhone() const
{
	return phone_number;
}

int customer::GetID() const
{
	return ID;
}

void customer::SetID(int ID)
{
	this->ID = ID;
}

void customer::SetName(string name)
{
	this->name = name;
}

void customer::SetAddress(string address)
{
	this->address = address;
}

void customer::SetPhone(string phone)
{
	phone_number = phone;
}


Car::Car()
{
	ID = 0;
	carCompany = "";
	carName = "";
	licensePlate = "";
	carModel = "";
	kmsDriven = 0;
	isAvailable = true;
	next = nullptr;
	prev = nullptr;
	price = 0;
}

Car::Car(std::string model, std::string name, std::string company, int kms, std::string plate, int id, Car* n, Car* p,
	int pp) : carModel(model), carName(name), carCompany(company), kmsDriven(kms), licensePlate(plate), isAvailable(true), ID(id), next(n), prev(p), price(pp)
{}

void Car::setCarModel(std::string model)
{
	carModel = model;
}

std::string Car::getCarModel() const
{
	return carModel;
}

void Car::setCarName(std::string name)
{
	carName = name;
}

std::string Car::getCarName() const
{
	return carName;
}

void Car::setCarCompany(std::string company)
{
	carCompany = company;
}

std::string Car::getCarCompany() const
{
	return carCompany;
}

void Car::setKmsDriven(int kms)
{
	kmsDriven = kms;
}

int Car::getKmsDriven() const
{
	return kmsDriven;
}

void Car::setLicensePlate(std::string plate)
{
	licensePlate = plate;
}

std::string Car::getLicensePlate() const
{
	return licensePlate;
}

void Car::setAvailability(bool available)
{
	isAvailable = available;
}

bool Car::isCarAvailable() const
{
	return isAvailable;
}

void Car::setID(int id)
{
	ID = id;
}

int Car::getID() const
{
	return ID;
}

void Car::setPrice(int pre)
{
	price = pre;
}

int Car::getPrice() const
{
	return price;
}

Driver::Driver() :
	id(0), salary(0), available(0), age(0), next(NULL), prev(NULL)
{

}

Driver::Driver(const std::string& name, int id, const std::string& cnic, const std::string& phoneNumber,
	const std::string& address, double salary, bool available, int age, Driver* next, Driver* prev) :
	name(name), id(id), cnic(cnic), phoneNumber(phoneNumber),
	address(address), salary(salary), available(available), age(age), next(NULL), prev(NULL)
{}

std::string Driver::getName() const
{
	return name;
}

int Driver::getID() const
{
	return id;
}

std::string Driver::getCNIC() const
{
	return cnic;
}

std::string Driver::getPhoneNumber() const
{
	return phoneNumber;
}

std::string Driver::getAddress() const
{
	return address;
}

double Driver::getSalary() const
{
	return salary;
}

bool Driver::isAvailable() const
{
	return available;
}

int Driver::getAge() const
{
	return age;
}

void Driver::setName(const std::string& name)
{
	this->name = name;
}

void Driver::setID(int id)
{
	this->id = id;
}

void Driver::setCNIC(const std::string& cnic)
{
	this->cnic = cnic;
}

void Driver::setPhoneNumber(const std::string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Driver::setAddress(const std::string& address)
{
	this->address = address;
}

void Driver::setSalary(double salary)
{
	this->salary = salary;
}

void Driver::setAvailability(bool availability)
{
	available = availability;
}

void Driver::setAge(int age)
{
	this->age = age;
}

Rent::Rent() : startDay(0), startMonth(0), startYear(0), endDay(0), endMonth(0), endYear(0), totalCost(0),
driverPicked(false),
next(nullptr),
prev(nullptr), ID(0)
{
}

Rent::Rent(int startD, int startM, int startY, int endD, int endM, int endY, double cost, bool driver) : startDay(startD), startMonth(startM), startYear(startY), endDay(endD), endMonth(endM), endYear(endY),
totalCost(cost), driverPicked(driver), next(nullptr), prev(nullptr), ID(0)
{
}

int Rent::getStartDay() const
{
	return startDay;
}

int Rent::getStartMonth() const
{
	return startMonth;
}

int Rent::getStartYear() const
{
	return startYear;
}

int Rent::getEndDay() const
{
	return endDay;
}

int Rent::getEndMonth() const
{
	return endMonth;
}

int Rent::getEndYear() const
{
	return endYear;
}

double Rent::getTotalCost() const
{
	return totalCost;
}

bool Rent::isDriverPicked() const
{
	return driverPicked;
}

Rent* Rent::getNext() const
{
	return next;
}

Rent* Rent::getPrev() const
{
	return prev;
}

int Rent::getID() const
{
	return ID;
}

void Rent::setStartDay(int day)
{
	startDay = day;
}

void Rent::setStartMonth(int month)
{
	startMonth = month;
}

void Rent::setStartYear(int year)
{
	startYear = year;
}

void Rent::setEndDay(int day)
{
	endDay = day;
}

void Rent::setEndMonth(int month)
{
	endMonth = month;
}

void Rent::setEndYear(int year)
{
	endYear = year;
}

void Rent::setTotalCost(double cost)
{
	totalCost = cost;
}

void Rent::setDriverPicked(bool picked)
{
	driverPicked = picked;
}

void Rent::setNext(Rent* nextRent)
{
	next = nextRent;
}

void Rent::setPrev(Rent* prevRent)
{
	prev = prevRent;
}

void Rent::setID(int id)
{
	ID = id;
}

void Rent::setCustomerUname(const std::string& username)
{
	CustomerUname = username;
}

std::string Rent::getCustomerUname() const
{
	return CustomerUname;
}

void Rent::setCarName(const std::string& name)
{
	carname = name;
}

std::string Rent::getCarName() const
{
	return carname;
}

void Rent::setCarLicense(const std::string& license)
{
	carlicense = license;
}

std::string Rent::getCarLicense() const
{
	return carlicense;
}

System::System() : head(NULL), tail(NULL), heade(NULL), taile(NULL), headd(NULL), taild(NULL), date(0), month(0), year(0)
{

}

void System::AddCustomer()
{
	customer* nn = new customer;
	customer* temp = head;
	if (head == NULL)
	{
		size++;
		cin.ignore();
		string s;

		cout << "\nEnter your username: ";
		getline(cin, s);
		nn->SetUser(s);
		cout << "\nEnter your password: ";
		getline(cin, s);
		nn->SetPass(s);
		cout << "\nEnter Your Name: ";
		getline(cin, nn->name);
		cout << "\nEnter your address: ";
		getline(cin, nn->address);
		cout << "\nEnter your phone number: ";
		getline(cin, nn->phone_number);

		nn->ID = size;
		cout << "\nYour Account is Created.\n\nYour ID is: " << size;

		head = nn;
		tail = nn;
		nn->next = NULL;
		nn->prev = NULL;
	}

	else
	{
		size++;
		cin.ignore();
		string s;
	pg3:
		cout << "\nEnter your username: ";
		getline(cin, s);

		temp = head;
		for (int i = 1; i < size; i++)
		{
			if (temp->GetUsername() == s)
			{
				cout << "\nUser name already present. Enter another username.";
				goto pg3;
			}
			temp = temp->next;
		}

		nn->SetUser(s);
		cout << "\nEnter your password: ";
		getline(cin, s);
		nn->SetPass(s);
		cout << "\nEnter Your Name: ";
		getline(cin, nn->name);
		cout << "\nEnter your address: ";
		getline(cin, nn->address);

	pg4:
		cout << "\nEnter your phone number: ";
		getline(cin, nn->phone_number);

		temp = head;
		for (int i = 1; i < size; i++)
		{
			if (temp->GetPhone() == s)
			{
				cout << "\nPhone number already registered. Enter another phone number.";
				goto pg4;
			}
			temp = temp->next;
		}

		nn->ID = size;
		cout << "\nYour Account is Created.\n\nYour ID is: " << size;
		Sleep(2000);
		tail->next = nn;
		nn->prev = tail;
		tail = nn;
		nn->next = NULL;
	}

}

void System::DeleteCustomer(int pos)
{
	customer* temp = head;
	if (pos == 1)
	{
		if (size > 1)
		{
			temp = head->next;
			delete head;
			head = temp;
			head->prev = NULL;
			size--;
			temp = head;
			for (int i = 1; i <= size; i++)
			{
				temp->SetID(pos);
				pos++;
				temp = temp->next;
			}
		}
		else
		{
			delete temp;

			size--;
		}
	}

	else if (pos == size)
	{
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
		size--;
		tail->SetID(size);
	}

	else if (pos > 1 && pos < size)
	{
		for (int i = 1; i < pos; i++)
		{
			temp = temp->next;

		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		size--;
		temp = temp->next;
		for (int i = pos; i <= size; i++)
		{
			temp->SetID(pos);
			pos++;
			temp = temp->next;
		}
		delete temp;


	}

	else
	{
		cout << "\nThe entered ID is not valid.";
	}

}

void System::ForgetPass(string u, int pos)
{
	customer* temp = head;
	for (int i = 1; i < pos; i++)
	{
		temp = temp->next;
	}

	if (u == temp->GetUsername())
	{
		cout << "\nAccount Found.";
		cin.ignore();
	p1:
		cout << "\nEnter New Password: ";
		string s, s1;
		getline(cin, s);
		cout << "\nEnter Password Again: ";

		getline(cin, s1);

		if (s == s1)
		{
			if (s == temp->GetPassword())
			{
				cout << "\nYou can not use an old Password. Enter a new one.";
				goto p1;
			}


			temp->password = s;

		}

		else
		{
			cout << "\nBoth are not same. Enter again.";
			goto p1;
		}
		cout << "\nPassword Changed.";
	}
	else
	{
		cout << "\nThe entered Username is not valid.";
	}

}

void System::ForgotUsername(int pos)
{
	customer* temp = head;
	for (int i = 1; i < pos; i++)
	{
		temp = temp->next;
	}

	cout << "\nEnter your Phone Number: ";
	string s;
	cin.ignore();
	getline(cin, s);

	if (s == temp->phone_number)
	{
		cout << "\nYour Username is: " << temp->GetUsername();
	}
	else
	{
		cout << "\nThe phone number is not valid for the provided id.";
	}
	Sleep(3000);
}

void System::CustomerTable()
{
	cout << "\n\n\t\t\t\t\t Customers Info";
	cout << "\n***************************************************************************************************************";
	cout << "\n ID.            NAME           User Name              PHONE NO.                                      Address";
	cout << "\n***************************************************************************************************************\n";
}

void System::ShowAllCustomers()
{
	customer* temp = head;

	CustomerTable();
	while (temp != NULL)
	{
		cout << setw(3) << temp->GetID() << setw(16);
		cout << temp->GetName() << setw(19) << temp->GetUsername() << setw(23);
		cout << temp->GetPhone() << setw(50);
		cout << temp->GetAddress() << endl;
		temp = temp->next;
	}

}

void System::SpecificUser(int pos)
{
	customer* temp = head;
	for (int i = 1; i < pos; i++)
	{

		temp = temp->next;
	}

	cout << endl;
	cout << "Name: " << temp->GetName() << ", username: " << temp->GetUsername() << ", phone: " << temp->GetPhone() << ", ID: " << temp->GetID() << ", address: " << temp->GetAddress();
	cout << endl;

}

void System::SearchByID(int pos)
{
	if (pos <= size && pos > 0)
	{
		cout << "\nAccount Details: \n\n";
		SpecificUser(pos);
	}

	else
	{
		cout << "\nEnter a Valid ID.";
	}

}

void System::SearchByName(string s)
{
	customer* temp = head;
	int n = 0;

	for (int i = 1; i <= size; i++)
	{
		if (s == temp->name)
		{
			CustomerTable();

			cout << setw(3) << temp->GetID() << setw(16);
			cout << temp->GetName() << setw(19) << temp->GetUsername() << setw(23);
			cout << temp->GetPhone() << setw(50);
			cout << temp->GetAddress() << endl;

			n++;
		}
		temp = temp->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no account with This Name.";
	}

}

void System::SearchByUserName(string s)
{
	customer* temp = head;
	int n = 0;
	for (int i = 1; i <= size; i++)
	{
		if (s == temp->GetUsername())
		{
			cout << "\nAccount Details: \n\n";
			SpecificUser(i);
			n++;
		}
		temp = temp->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no account with This UserName.";
	}

}

void System::SearchByPhone(string s)
{
	customer* temp = head;
	int n = 0;
	for (int i = 1; i <= size; i++)
	{
		if (s == temp->GetPhone())
		{
			cout << "\nAccount Details: \n\n";
			SpecificUser(i);
			n++;
		}
		temp = temp->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no account with This Phone number.";
	}

}

void System::SearchByAddress(string s)
{
	customer* temp = head;
	int n = 0;
	for (int i = 1; i <= size; i++)
	{
		if (s == temp->GetAddress())
		{
			CustomerTable();

			cout << setw(3) << temp->GetID() << setw(16);
			cout << temp->GetName() << setw(19) << temp->GetUsername() << setw(23);
			cout << temp->GetPhone() << setw(50);
			cout << temp->GetAddress() << endl;

			n++;
		}
		temp = temp->next;
	}

	if (n == 0)
	{

		cout << "\nThere is no account with This address.";
	}

}

void System::readFromFile()
{
	std::ifstream inputFile("customer.txt");
	if (inputFile.is_open()) {
		std::string line;
		while (getline(inputFile, line)) {
			std::istringstream iss(line);
			std::string data;

			customer* nn = new customer;

			// Read each data field from the line
			getline(iss, data, ',');
			nn->ID = std::stoi(data);

			getline(iss, data, ',');
			nn->SetUser(data);

			getline(iss, data, ',');
			nn->name = data;

			getline(iss, data, ',');
			nn->SetPass(data);

			getline(iss, data, ',');
			nn->address = data;

			getline(iss, data);
			nn->phone_number = data;

			// Insert the customer node into the linked list
			if (head == NULL) {
				head = nn;
				tail = nn;
				nn->next = NULL;
				nn->prev = NULL;
			}
			else {
				tail->next = nn;
				nn->prev = tail;
				tail = nn;
				nn->next = NULL;
			}

			size++;
		}
		inputFile.close();
	}
	else {
		std::cout << "Unable to open the file.";
	}
}

void System::writeToFile()
{
	std::ofstream outputFile("customer.txt");
	if (outputFile.is_open()) {
		customer* temp = head;
		while (temp != NULL) {
			outputFile << temp->ID << ",";
			outputFile << temp->GetUsername() << ",";
			outputFile << temp->name << ",";
			outputFile << temp->GetPassword() << ",";
			outputFile << temp->address << ",";
			outputFile << temp->phone_number << "\n";

			temp = temp->next;
		}
		outputFile.close();

	}
	else {
		std::cout << "Unable to open the file.";
	}
}

void System::AddCar()
{
	Car* nn = new Car;
	Car* tempe = heade;
	if (heade == NULL)
	{
		csize++;
		cin.ignore();
		string s;

		cout << "\nEnter the Car Company: ";
		getline(cin, nn->carCompany);

		cout << "\nEnter The Car Name: ";
		getline(cin, nn->carName);

		cout << "\nEnter the model: ";
		getline(cin, nn->carModel);

		cout << "\nEnter License Plate Number: ";
		getline(cin, nn->licensePlate);

		cout << "\nEnter Km Driven: ";
		cin >> nn->kmsDriven;

		nn->isAvailable = 1;

		cout << "\nEnter The Cost of Rent per Day: ";
		cin >> nn->price;

		nn->ID = csize;

		cout << "\nCar is Added.\n\nYour ID is: " << csize;

		heade = nn;
		taile = nn;
		nn->next = NULL;
		nn->prev = NULL;
	}

	else
	{
		csize++;
		cin.ignore();
		string s;
	pg8:


		cout << "\nEnter the License Plate number: ";
		getline(cin, s);

		tempe = heade;
		for (int i = 1; i < csize; i++)
		{
			if (tempe->getLicensePlate() == s)
			{
				cout << "\nCar Already added. Enter another License Plate number.";
				goto pg8;
			}
			tempe = tempe->next;
		}

		nn->licensePlate = s;
		cout << "\nEnter the Car Company: ";
		getline(cin, nn->carCompany);

		cout << "\nEnter The Car Name: ";
		getline(cin, nn->carName);

		cout << "\nEnter the model: ";
		getline(cin, nn->carModel);

		cout << "\nEnter Km Driven: ";
		cin >> nn->kmsDriven;

		nn->isAvailable = 1;

		cout << "\nEnter The Cost of Rent per Day: ";
		cin >> nn->price;

		nn->ID = csize;

		cout << "\nCar is Added.\n\nYour ID is: " << csize;


		taile->next = nn;
		nn->prev = taile;
		taile = nn;
		nn->next = NULL;
	}

}

void System::DeleteCar(int pos)
{
	Car* tempe = heade;
	if (pos == 1)
	{
		if (csize > 1)
		{
			tempe = heade->next;
			delete heade;
			heade = tempe;
			heade->prev = NULL;
			csize--;
			tempe = heade;
			for (int i = 1; i <= csize; i++)
			{
				tempe->setID(pos);
				pos++;
				tempe = tempe->next;
			}
		}
		else
		{
			delete tempe;

			csize--;
		}
	}

	else if (pos == csize)
	{
		tempe = taile;
		taile = taile->prev;
		taile->next = NULL;
		delete tempe;
		csize--;
		taile->setID(csize);
	}

	else if (pos > 1 && pos < csize)
	{
		for (int i = 1; i < pos; i++)
		{
			tempe = tempe->next;

		}
		tempe->prev->next = tempe->next;
		tempe->next->prev = tempe->prev;
		csize--;
		tempe = tempe->next;
		for (int i = pos; i <= csize; i++)
		{
			tempe->setID(pos);
			pos++;
			tempe = tempe->next;
		}
		delete tempe;


	}

	else
	{
		cout << "\nThe entered ID is not valid.";
	}

}

void System::CarTable()
{
	cout << "\n\n\t\t\t\t\t\t\t Cars Info";
	cout << "\n**************************************************************************************************************************************";
	cout << "\n ID.         COMPANY             NAME            LICENSE PLATE            MODEL         KMS DRIVEN        AVAILABLE       Cost / Day";
	cout << "\n**************************************************************************************************************************************\n";
}

void System::ShowAllCars()
{

	Car* tempe = heade;

	CarTable();
	while (tempe != NULL)
	{
		cout << setw(3) << tempe->getID() << setw(16);
		cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
		cout << tempe->getLicensePlate() << setw(17);
		cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable() << setw(19) << tempe->price << " Rs" << endl;
		tempe = tempe->next;
	}

}

void System::Specificar(int pos)
{

	Car* tempe = heade;
	for (int i = 1; i < pos; i++)
	{
		tempe = tempe->next;
	}

	cout << endl;
	cout << "ID: " << tempe->getID() << ", Car Company: " << tempe->getCarCompany();
	cout << ", Car Name: " << tempe->getCarName() << ", License Plate number: ";
	cout << tempe->getLicensePlate() << ", Car Model: " << tempe->getCarModel();
	cout << ", KMs Driven: " << tempe->getKmsDriven() << ", Available: ";

	if (tempe->isCarAvailable())
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << ", Price per Day: " << tempe->price << " Rs";
	cout << endl;

}

void System::CSearchByID(int id)
{
	// Convert the linked list to an array
	Car** carArray = new Car * [csize];
	Car* temp = heade;
	int index = 0;
	while (temp != NULL && index < csize)
	{
		carArray[index] = temp;
		temp = temp->next;
		index++;
	}

	// Perform binary search
	int left = 0;
	int right = csize - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (carArray[mid]->getID() == id)
		{
			cout << "\nCar Details: \n\n";
			Specificar(carArray[mid]->getID());
			delete[] carArray; // Clean up the allocated array
			return;
		}
		else if (carArray[mid]->getID() < id)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	// Car with the given ID not found
	cout << "\nCar with ID " << id << " not found.";
	delete[] carArray; // Clean up the allocated array
}

void System::CSearchByName(string s)
{
	Car* tempe = heade;
	int n = 0;
	CarTable();
	for (int i = 1; i <= csize; i++)
	{
		if (s == tempe->getCarName())
		{

			cout << setw(3) << tempe->getID() << setw(16);
			cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
			cout << tempe->getLicensePlate() << setw(17);
			cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable() << setw(19) << tempe->price << " Rs";
			cout << endl;

			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Car with This Name.";
	}

}

void System::CSearchByCompany(string s)
{
	Car* tempe = heade;
	int n = 0;
	CarTable();
	for (int i = 1; i <= csize; i++)
	{
		if (s == tempe->getCarCompany())
		{


			cout << setw(3) << tempe->getID() << setw(16);
			cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
			cout << tempe->getLicensePlate() << setw(17);
			cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable() << setw(19) << tempe->price << " Rs";
			cout << endl;

			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Car with This Company Name.";
	}

}

void System::CSearchByModel(string s)
{
	Car* tempe = heade;
	int n = 0;
	CarTable();
	for (int i = 1; i <= csize; i++)
	{
		if (s == tempe->getCarModel())
		{


			cout << setw(3) << tempe->getID() << setw(16);
			cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
			cout << tempe->getLicensePlate() << setw(17);
			cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable() << setw(19) << tempe->price << " Rs";
			cout << endl;

			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Car with This Model.";
	}

}

void System::CSearchByLicense(string s)
{
	Car* tempe = heade;
	int n = 0;

	for (int i = 1; i <= csize; i++)
	{
		if (s == tempe->getLicensePlate())
		{

			Specificar(i);
			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Car with This License Plate number.";
	}

}

void System::UpdateDetails(int pos)
{
	Car* tempe = heade;
	int n = 0;

	for (int i = 1; i <= csize; i++)
	{
		if (pos == tempe->getID())
		{

			Specificar(i);

			cout << endl << endl;
			cout << "\nEnter the New KMs Driven: ";
			cin >> tempe->kmsDriven;

			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Car with This ID.";
	}

}

void System::sortKMs()
{
	if (heade == NULL)
	{
		cout << "\nNo cars available for sorting.";
		return;
	}

	bool swapped;
	Car* current;
	Car* last = NULL;

	do
	{
		swapped = false;
		current = heade;

		while (current->next != last)
		{
			if (current->kmsDriven > current->next->kmsDriven)
			{
				swapCars(current, current->next);
				swapped = true;
			}
			current = current->next;
		}
		last = current;
	} while (swapped);

	updateCarIDs();
}

void System::swapCars(Car* car1, Car* car2)
{
	// Swap the car details
	swap(car1->carCompany, car2->carCompany);
	swap(car1->carName, car2->carName);
	swap(car1->carModel, car2->carModel);
	swap(car1->licensePlate, car2->licensePlate);
	swap(car1->kmsDriven, car2->kmsDriven);
	swap(car1->isAvailable, car2->isAvailable);
	swap(car1->price, car2->price);
	// Update the car IDs after swapping
	updateCarIDs();
}

void System::updateCarIDs()
{
	Car* current = heade;
	int id = 1;

	while (current != NULL)
	{
		current->ID = id;
		current = current->next;
		id++;
	}
}

void System::CarreadFromFile()
{

	ifstream inputFile("cars.txt");
	if (inputFile.is_open()) {
		string line;
		while (getline(inputFile, line)) {
			istringstream iss(line);
			string data;

			Car* nn = new Car;

			// Read each data field from the line
			getline(iss, data, ',');
			nn->ID = stoi(data);

			getline(iss, nn->carCompany, ',');
			getline(iss, nn->carName, ',');
			getline(iss, nn->licensePlate, ',');
			getline(iss, nn->carModel, ',');

			getline(iss, data, ',');
			nn->kmsDriven = stoi(data);

			getline(iss, data, ',');
			nn->isAvailable = stoi(data);

			getline(iss, data);
			nn->price = stoi(data);
			// Insert the car node into the linked list
			if (heade == NULL) {
				heade = nn;
				taile = nn;
				nn->next = NULL;
				nn->prev = NULL;
			}
			else {
				taile->next = nn;
				nn->prev = taile;
				taile = nn;
				nn->next = NULL;
			}
			csize++;
		}
		inputFile.close();
	}
	else {
		cout << "Unable to open the file.";
	}
}

void System::CarwriteToFile()
{
	ofstream outputFile("cars.txt");
	if (outputFile.is_open()) {
		Car* temp = heade;
		while (temp != NULL) {
			outputFile << temp->ID << ",";
			outputFile << temp->carCompany << ",";
			outputFile << temp->carName << ",";
			outputFile << temp->licensePlate << ",";
			outputFile << temp->carModel << ",";
			outputFile << temp->kmsDriven << ",";
			outputFile << temp->isAvailable << ",";
			outputFile << temp->price << "\n";

			temp = temp->next;
		}
		outputFile.close();

	}
	else {
		cout << "Unable to open the file.";
	}
}

void System::sortPrice()
{
	if (heade == NULL)
	{
		cout << "\nNo cars available for sorting.";
		return;
	}

	bool swapped;
	Car* current;
	Car* last = NULL;

	do
	{
		swapped = false;
		current = heade;

		while (current->next != last)
		{
			if (current->price > current->next->price)
			{
				swapCars(current, current->next);
				swapped = true;
			}
			current = current->next;
		}
		last = current;
	} while (swapped);

	updateCarIDs();
}

void System::filterByPrice()
{
	cout << "\n1. Less than or Equal to X";
	cout << "\n2. Larger than or Equal to X";
	cout << "\n3. Equal to X";
	int n;
pg6:
	cout << "\nSelect an option: ";
	cin >> n;
	cout << "\n\nEnter the value of X: ";
	int cost;
	cin >> cost;
	int r = 0;
	if (n == 1)
	{
		CarTable();
		Car* tempe = heade;
		for (int i = 1; i <= csize; i++)
		{
			if (cost >= tempe->price)
			{
				cout << setw(3) << tempe->getID() << setw(16);
				cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
				cout << tempe->getLicensePlate() << setw(17);
				cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable();
				cout << setw(19) << tempe->price << " Rs";
				cout << endl;
				r++;

			}
			tempe = tempe->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Car in this price range";
		}
	}

	else if (n == 2)
	{
		CarTable();
		Car* tempe = heade;
		for (int i = 1; i <= csize; i++)
		{
			if (cost <= tempe->price)
			{
				cout << setw(3) << tempe->getID() << setw(16);
				cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
				cout << tempe->getLicensePlate() << setw(17);
				cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable();
				cout << setw(19) << tempe->price << " Rs";
				cout << endl;
				r++;

			}
			tempe = tempe->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Car in this price range";
		}
	}

	else if (n == 3)
	{
		CarTable();
		Car* tempe = heade;
		for (int i = 1; i <= csize; i++)
		{
			if (cost == tempe->price)
			{
				cout << setw(3) << tempe->getID() << setw(16);
				cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
				cout << tempe->getLicensePlate() << setw(17);
				cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable();
				cout << setw(19) << tempe->price << " Rs";
				cout << endl;

				r++;
			}
			tempe = tempe->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Car of this price.";
		}
	}

	else
	{
		cout << "\nEnter a valid option. ";
		goto pg6;
	}

}

void System::DisplayCarsByPriceAscending()
{
	// Create a temporary vector to store car nodes
	std::vector<Car*> tempCars;

	// Traverse the linked list and store car nodes in the vector
	Car* tempe = heade;
	while (tempe != NULL)
	{
		tempCars.push_back(tempe);
		tempe = tempe->next;
	}

	// Sort the vector based on car prices in ascending order
	std::sort(tempCars.begin(), tempCars.end(), [](const Car* a, const Car* b) {
		return a->price < b->price;
		});

	// Display the cars from the sorted vector
	CarTable();
	for (const Car* care : tempCars)
	{
		cout << setw(3) << care->getID() << setw(16);
		cout << care->getCarCompany() << setw(19) << care->getCarName() << setw(23);
		cout << care->getLicensePlate() << setw(17);
		cout << care->getCarModel() << setw(19) << care->getKmsDriven() << setw(13) << care->isCarAvailable() << setw(19) << care->price << " Rs" << endl;
	}
}

void System::DisplayCarsByPriceDescending()
{
	// Create a temporary vector to store car nodes
	std::vector<Car*> tempCars;

	// Traverse the linked list and store car nodes in the vector
	Car* tempe = heade;
	while (tempe != NULL)
	{
		tempCars.push_back(tempe);
		tempe = tempe->next;
	}

	// Sort the vector based on car prices in descending order
	std::sort(tempCars.begin(), tempCars.end(), [](const Car* a, const Car* b) {
		return a->price > b->price;
		});

	// Display the cars from the sorted vector
	CarTable();
	for (const Car* car : tempCars)
	{
		cout << setw(3) << car->getID() << setw(16);
		cout << car->getCarCompany() << setw(19) << car->getCarName() << setw(23);
		cout << car->getLicensePlate() << setw(17);
		cout << car->getCarModel() << setw(19) << car->getKmsDriven() << setw(13) << car->isCarAvailable() << setw(19) << car->price << " Rs" << endl;
	}
}

void System::DisplayCarsByKmsAscending()
{
	// Create a temporary vector to store car nodes
	std::vector<Car*> tempCars;

	// Traverse the linked list and store car nodes in the vector
	Car* tempe = heade;
	while (tempe != NULL)
	{
		tempCars.push_back(tempe);
		tempe = tempe->next;
	}

	// Sort the vector based on car prices in ascending order
	std::sort(tempCars.begin(), tempCars.end(), [](const Car* a, const Car* b) {
		return a->kmsDriven < b->kmsDriven;
		});

	// Display the cars from the sorted vector
	CarTable();
	for (const Car* care : tempCars)
	{
		cout << setw(3) << care->getID() << setw(16);
		cout << care->getCarCompany() << setw(19) << care->getCarName() << setw(23);
		cout << care->getLicensePlate() << setw(17);
		cout << care->getCarModel() << setw(19) << care->getKmsDriven() << setw(13) << care->isCarAvailable() << setw(19) << care->price << " Rs" << endl;
	}
}

void System::DisplayCarsByKmsDescending()
{
	// Create a temporary vector to store car nodes
	std::vector<Car*> tempCars;

	// Traverse the linked list and store car nodes in the vector
	Car* tempe = heade;
	while (tempe != NULL)
	{
		tempCars.push_back(tempe);
		tempe = tempe->next;
	}

	// Sort the vector based on car prices in descending order
	std::sort(tempCars.begin(), tempCars.end(), [](const Car* a, const Car* b) {
		return a->kmsDriven > b->kmsDriven;
		});

	// Display the cars from the sorted vector
	CarTable();
	for (const Car* car : tempCars)
	{
		cout << setw(3) << car->getID() << setw(16);
		cout << car->getCarCompany() << setw(19) << car->getCarName() << setw(23);
		cout << car->getLicensePlate() << setw(17);
		cout << car->getCarModel() << setw(19) << car->getKmsDriven() << setw(13) << car->isCarAvailable() << setw(19) << car->price << " Rs" << endl;
	}
}

void System::UpdatePrice(int pos)
{
	Car* tempe = heade;

	for (int i = 1; i <= csize; i++)
	{
		if (pos == tempe->getID())
		{
			cout << "\nThe Current Price/ Day is: " << tempe->price;
			cout << "\nEnter the new Price / Day: ";
			cin >> tempe->price;

			cout << "\nThe price has been updated.";
		}
		tempe = tempe->next;
	}
}

void System::AddDriver()
{

	Driver* nn = new Driver;
	Driver* tempd = headd;
	if (headd == NULL)
	{
		dsize++;
		cin.ignore();
		string s;

		cout << "\nEnter the Name: ";
		getline(cin, nn->name);

		cout << "\nEnter The CNIC number: ";
		getline(cin, nn->cnic);

		cout << "\nEnter phone number: ";
		getline(cin, nn->phoneNumber);

		cout << "\nEnter address: ";
		getline(cin, nn->address);

		cout << "\nEnter age: ";
		cin >> nn->age;

		nn->available = 1;

		cout << "\nEnter The Salary: ";
		cin >> nn->salary;

		nn->id = dsize;

		cout << "\nDriver  Added.\n\nID is: " << dsize;

		headd = nn;
		taild = nn;
		nn->next = NULL;
		nn->prev = NULL;
	}

	else
	{
		dsize++;
		cin.ignore();
		string s;
	pg7:


		cout << "\nEnter the CNIC number: ";
		getline(cin, s);

		tempd = headd;
		for (int i = 1; i < dsize; i++)
		{
			if (tempd->getCNIC() == s)
			{
				cout << "\nDriver Already added. Enter another Driver details.";
				goto pg7;
			}
			tempd = tempd->next;
		}

		nn->cnic = s;

		cout << "\nEnter the Name: ";
		getline(cin, nn->name);

		cout << "\nEnter phone number: ";
		getline(cin, nn->phoneNumber);

		cout << "\nEnter address: ";
		getline(cin, nn->address);

		cout << "\nEnter age: ";
		cin >> nn->age;

		nn->available = 1;

		cout << "\nEnter The Salary: ";
		cin >> nn->salary;

		nn->id = dsize;

		cout << "\nDriver  Added.\n\nID is: " << dsize;


		taild->next = nn;
		nn->prev = taild;
		taild = nn;
		nn->next = NULL;
	}
}

void System::DeleteDriver(int pos)
{
	Driver* tempd = headd;
	if (pos == 1)
	{
		if (dsize > 1)
		{
			tempd = headd->next;
			delete headd;
			headd = tempd;
			headd->prev = NULL;
			dsize--;
			tempd = headd;
			for (int i = 1; i <= dsize; i++)
			{
				tempd->setID(pos);
				pos++;
				tempd = tempd->next;
			}
		}
		else
		{
			delete tempd;

			dsize--;
		}
	}

	else if (pos == dsize)
	{
		tempd = taild;
		taild = taild->prev;
		taild->next = NULL;
		delete tempd;
		dsize--;
		taild->setID(dsize);
	}

	else if (pos > 1 && pos < dsize)
	{
		for (int i = 1; i < pos; i++)
		{
			tempd = tempd->next;

		}
		tempd->prev->next = tempd->next;
		tempd->next->prev = tempd->prev;
		dsize--;
		tempd = tempd->next;
		for (int i = pos; i <= dsize; i++)
		{
			tempd->setID(pos);
			pos++;
			tempd = tempd->next;
		}
		delete tempd;


	}

	else
	{
		cout << "\nThe entered ID is not valid.";
	}

}

void System::DriverTable()
{
	cout << "\n\n\t\t\t\t\t Drivers Info";
	cout << "\n**************************************************************************************************************************************";
	cout << "\n ID.         NAME                 CNIC               AGE         PHONE NO.                      Address           Salary    Available";
	cout << "\n**************************************************************************************************************************************\n";
}

void System::ShowAllDrivers()
{
	Driver* tempd = headd;

	DriverTable();
	while (tempd != NULL)
	{
		cout << setw(3) << tempd->getID() << setw(16);
		cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
		cout << tempd->getAge() << setw(20);
		cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
		cout << setw(10);
		if (tempd->isAvailable())
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		cout << endl;
		tempd = tempd->next;
	}

}

void System::DSearchByID(int pos)
{

	Driver* tempd = headd;
	for (int i = 1; i < pos; i++)
	{
		tempd = tempd->next;
	}

	cout << endl;
	cout << "ID: " << tempd->getID() << ", Name: " << tempd->getName();
	cout << ", CNIC: " << tempd->getCNIC() << ", Age: ";
	cout << tempd->getAge() << ", Phone Number: " << tempd->getPhoneNumber();
	cout << ", Address: " << tempd->getAddress() << ", Available: ";

	if (tempd->isAvailable())
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << ", Salary: " << tempd->salary << " Rs";
	cout << endl;

}

void System::DSearchByName(string s)
{
	Driver* tempd = headd;
	int n = 0;

	for (int i = 1; i <= dsize; i++)
	{
		if (s == tempd->getName())
		{
			DriverTable();

			cout << setw(3) << tempd->getID() << setw(16);
			cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
			cout << tempd->getAge() << setw(20);
			cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
			cout << setw(10);
			if (tempd->isAvailable())
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
			cout << endl;

			n++;
		}
		tempd = tempd->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Driver with This Name.";
	}

}

void System::DSearchByAddress(string s)
{
	Driver* tempd = headd;
	int n = 0;

	for (int i = 1; i <= dsize; i++)
	{
		if (s == tempd->getAddress())
		{
			DriverTable();

			cout << setw(3) << tempd->getID() << setw(16);
			cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
			cout << tempd->getAge() << setw(20);
			cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
			cout << setw(10);
			if (tempd->isAvailable())
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
			cout << endl;

			n++;
		}
		tempd = tempd->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Driver with This Address.";
	}

}

void System::DSearchByPhone(string s)
{
	Driver* tempd = headd;
	int n = 0;

	for (int i = 1; i <= dsize; i++)
	{
		if (s == tempd->getPhoneNumber())
		{
			cout << endl;
			cout << "ID: " << tempd->getID() << ", Name: " << tempd->getName();
			cout << ", CNIC: " << tempd->getCNIC() << ", Age: ";
			cout << tempd->getAge() << ", Phone Number: " << tempd->getPhoneNumber();
			cout << ", Address: " << tempd->getAddress() << ", Available: ";

			if (tempd->isAvailable())
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
			cout << ", Salary: " << tempd->salary << " Rs";
			cout << endl;

			n++;
		}
		tempd = tempd->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Driver with This Phone number.";
	}

}

void System::DSearchByCnic(string s)
{
	Driver* tempd = headd;
	int n = 0;

	for (int i = 1; i <= dsize; i++)
	{
		if (s == tempd->getCNIC())
		{
			cout << endl;
			cout << "ID: " << tempd->getID() << ", Name: " << tempd->getName();
			cout << ", CNIC: " << tempd->getCNIC() << ", Age: ";
			cout << tempd->getAge() << ", Phone Number: " << tempd->getPhoneNumber();
			cout << ", Address: " << tempd->getAddress() << ", Available: ";

			if (tempd->isAvailable())
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
			cout << ", Salary: " << tempd->salary << " Rs";
			cout << endl;

			n++;
		}
		tempd = tempd->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Driver with This Cnic.";
	}

}

void System::ShowAvailableDrivers()
{
	Driver* tempd = headd;
	int n = 0;
	DriverTable();
	for (int i = 1; i <= dsize; i++)
	{

		if (TRUE == tempd->isAvailable())
		{


			cout << setw(3) << tempd->getID() << setw(16);
			cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
			cout << tempd->getAge() << setw(20);
			cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
			cout << setw(10);
			if (tempd->isAvailable())
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
			cout << endl;

			n++;
		}
		tempd = tempd->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Driver Available.";
	}

}

void System::ShowNotAvailableDrivers()
{
	Driver* tempd = headd;
	int n = 0;
	DriverTable();
	for (int i = 1; i <= dsize; i++)
	{
		if (FALSE == tempd->isAvailable())
		{


			cout << setw(3) << tempd->getID() << setw(16);
			cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
			cout << tempd->getAge() << setw(20);
			cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
			cout << setw(10);
			if (tempd->isAvailable())
			{
				cout << "Yes";
			}
			else
			{
				cout << "No";
			}
			cout << endl;

			n++;
		}
		tempd = tempd->next;
	}

	if (n == 0)
	{
		cout << "\nAll Drivers Are Available.";
	}

}

void System::filterBySalary()
{
	cout << "\n1. Less than or Equal to X";
	cout << "\n2. Larger than or Equal to X";
	cout << "\n3. Equal to X";
	int n;
pg9:
	cout << "\nSelect an option: ";
	cin >> n;
	cout << "\n\nEnter the value of X: ";
	int cost;
	cin >> cost;
	int r = 0;
	if (n == 1)
	{
		DriverTable();
		Driver* tempd = headd;
		for (int i = 1; i <= dsize; i++)
		{
			if (cost >= tempd->salary)
			{
				cout << setw(3) << tempd->getID() << setw(16);
				cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
				cout << tempd->getAge() << setw(20);
				cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
				cout << setw(10);
				if (tempd->isAvailable())
				{
					cout << "Yes";
				}
				else
				{
					cout << "No";
				}
				cout << endl;
				r++;

			}
			tempd = tempd->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Driver Salary in this Range.";
		}
	}

	else if (n == 2)
	{
		DriverTable();
		Driver* tempd = headd;
		for (int i = 1; i <= dsize; i++)
		{
			if (cost <= tempd->salary)
			{
				cout << setw(3) << tempd->getID() << setw(16);
				cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
				cout << tempd->getAge() << setw(20);
				cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
				cout << setw(10);
				if (tempd->isAvailable())
				{
					cout << "Yes";
				}
				else
				{
					cout << "No";
				}
				cout << endl;
				r++;

			}
			tempd = tempd->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Driver Salary in this Range.";
		}

	}

	else if (n == 3)
	{
		DriverTable();
		Driver* tempd = headd;
		for (int i = 1; i <= dsize; i++)
		{
			if (cost == tempd->salary)
			{
				cout << setw(3) << tempd->getID() << setw(16);
				cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
				cout << tempd->getAge() << setw(20);
				cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
				cout << setw(10);
				if (tempd->isAvailable())
				{
					cout << "Yes";
				}
				else
				{
					cout << "No";
				}
				cout << endl;
				r++;

			}
			tempd = tempd->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Driver Salary of this amount.";
		}
	}

	else
	{
		cout << "\nEnter a valid option. ";
		goto pg9;
	}

}

void System::filterByAge()
{
	cout << "\n1. Less than or Equal to X";
	cout << "\n2. Larger than or Equal to X";
	cout << "\n3. Equal to X";
	int n;
pg10:
	cout << "\nSelect an option: ";
	cin >> n;
	cout << "\n\nEnter the value of X: ";
	int cost;
	cin >> cost;
	int r = 0;
	if (n == 1)
	{
		DriverTable();
		Driver* tempd = headd;
		for (int i = 1; i <= dsize; i++)
		{
			if (cost >= tempd->age)
			{
				cout << setw(3) << tempd->getID() << setw(16);
				cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
				cout << tempd->getAge() << setw(20);
				cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
				cout << setw(10);
				if (tempd->isAvailable())
				{
					cout << "Yes";
				}
				else
				{
					cout << "No";
				}
				cout << endl;
				r++;

			}
			tempd = tempd->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Driver within this age range.";
		}
	}

	else if (n == 2)
	{
		DriverTable();
		Driver* tempd = headd;
		for (int i = 1; i <= dsize; i++)
		{
			if (cost <= tempd->age)
			{
				cout << setw(3) << tempd->getID() << setw(16);
				cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
				cout << tempd->getAge() << setw(20);
				cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
				cout << setw(10);
				if (tempd->isAvailable())
				{
					cout << "Yes";
				}
				else
				{
					cout << "No";
				}
				cout << endl;
				r++;

			}
			tempd = tempd->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Driver within this age range.";
		}

	}

	else if (n == 3)
	{
		DriverTable();
		Driver* tempd = headd;
		for (int i = 1; i <= dsize; i++)
		{
			if (cost == tempd->age)
			{
				cout << setw(3) << tempd->getID() << setw(16);
				cout << tempd->getName() << setw(24) << tempd->getCNIC() << setw(12);
				cout << tempd->getAge() << setw(20);
				cout << tempd->getPhoneNumber() << setw(30) << tempd->getAddress() << setw(15) << tempd->getSalary() << "Rs";
				cout << setw(10);
				if (tempd->isAvailable())
				{
					cout << "Yes";
				}
				else
				{
					cout << "No";
				}
				cout << endl;
				r++;

			}
			tempd = tempd->next;

		}
		if (r == 0)
		{
			cout << "\nThere is no Driver of this age.";
		}
	}

	else
	{
		cout << "\nEnter a valid option. ";
		goto pg10;
	}

}

void System::DisplayDriversBySalaryAscending()
{
	// Create a temporary vector to store car nodes
	std::vector<Driver*> tempDriver;

	// Traverse the linked list and store car nodes in the vector
	Driver* tempd = headd;
	while (tempd != NULL)
	{
		tempDriver.push_back(tempd);
		tempd = tempd->next;
	}

	// Sort the vector based on car prices in ascending order
	std::sort(tempDriver.begin(), tempDriver.end(), [](const Driver* a, const Driver* b) {
		return a->salary < b->salary;
		});

	// Display the cars from the sorted vector
	DriverTable();
	for (const Driver* care : tempDriver)
	{
		cout << setw(3) << care->getID() << setw(16);
		cout << care->getName() << setw(24) << care->getCNIC() << setw(12);
		cout << care->getAge() << setw(20);
		cout << care->getPhoneNumber() << setw(30) << care->getAddress() << setw(15) << care->getSalary() << "Rs";
		cout << setw(10);
		if (care->isAvailable())
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		cout << endl;
	}
}

void System::DisplayDriversBySalaryDescending()
{
	// Create a temporary vector to store car nodes
	std::vector<Driver*> tempDriver;

	// Traverse the linked list and store car nodes in the vector
	Driver* tempd = headd;
	while (tempd != NULL)
	{
		tempDriver.push_back(tempd);
		tempd = tempd->next;
	}

	// Sort the vector based on car prices in ascending order
	std::sort(tempDriver.begin(), tempDriver.end(), [](const Driver* a, const Driver* b) {
		return a->salary > b->salary;
		});

	// Display the cars from the sorted vector
	DriverTable();
	for (const Driver* care : tempDriver)
	{
		cout << setw(3) << care->getID() << setw(16);
		cout << care->getName() << setw(24) << care->getCNIC() << setw(12);
		cout << care->getAge() << setw(20);
		cout << care->getPhoneNumber() << setw(30) << care->getAddress() << setw(15) << care->getSalary() << "Rs";
		cout << setw(10);
		if (care->isAvailable())
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		cout << endl;
	}


}

void System::readDriverFromFile()
{
	ifstream inputFile("driver.txt");
	if (inputFile.is_open())
	{
		string line;
		while (getline(inputFile, line))
		{
			istringstream iss(line);
			string data;

			Driver* nn = new Driver;

			// Read each data field from the line
			getline(iss, data, ',');
			nn->id = stoi(data);

			getline(iss, data, ',');
			nn->name = data;

			getline(iss, data, ',');
			nn->cnic = data;

			getline(iss, data, ',');
			nn->phoneNumber = data;

			getline(iss, data, ',');
			nn->address = data;

			getline(iss, data, ',');
			nn->age = stoi(data);

			getline(iss, data, ',');
			nn->available = stoi(data);

			getline(iss, data);
			nn->salary = stoi(data);

			// Insert the driver node into the linked list
			if (headd == NULL)
			{
				headd = nn;
				taild = nn;
				nn->next = NULL;
				nn->prev = NULL;
			}
			else
			{
				taild->next = nn;
				nn->prev = taild;
				taild = nn;
				nn->next = NULL;
			}

			dsize++;
		}
		inputFile.close();
	}
	else
	{
		cout << "Unable to open the file." << endl;
	}
}

void System::writeDriverToFile()
{
	ofstream outputFile("driver.txt");
	if (outputFile.is_open())
	{
		Driver* temp = headd;
		while (temp != NULL)
		{
			outputFile << temp->id << ",";
			outputFile << temp->name << ",";
			outputFile << temp->cnic << ",";
			outputFile << temp->phoneNumber << ",";
			outputFile << temp->address << ",";
			outputFile << temp->age << ",";
			outputFile << temp->available << ",";
			outputFile << temp->salary << "\n";

			temp = temp->next;
		}
		outputFile.close();

	}
	else
	{
		cout << "Unable to open the file." << endl;
	}
}

void System::RealDateStore()
{
	std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	// Convert the current time to a struct tm
	struct tm timeinfo;
	localtime_s(&timeinfo, &currentTime);

	// Extract the date, month, and year
	date = timeinfo.tm_mday;
	month = timeinfo.tm_mon + 1; // Adding 1 because tm_mon ranges from 0 to 11
	year = timeinfo.tm_year + 1900; // Adding 1900 because tm_year is the number of years since 1900





}

void System::RealDatePrint()
{
	std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	// Convert the current time to a struct tm
	struct tm timeinfo;
	localtime_s(&timeinfo, &currentTime);

	// Extract the date, month, and year
	date = timeinfo.tm_mday;
	month = timeinfo.tm_mon + 1; // Adding 1 because tm_mon ranges from 0 to 11
	year = timeinfo.tm_year + 1900; // Adding 1900 because tm_year is the number of years since 1900

	// Print the current date, month, and year

	std::cout << date;
	std::cout << "/" << month;
	std::cout << "/" << year;



}

void System::RealTime()
{
	auto currentTime = std::chrono::system_clock::now();

	// Extract the time part
	auto time = std::chrono::system_clock::to_time_t(currentTime);
	std::tm timeinfo;
	localtime_s(&timeinfo, &time);

	// Print the time
	std::cout << "Current time & Date: " << timeinfo.tm_hour << ":" << timeinfo.tm_min;
	if (timeinfo.tm_hour < 12)
	{
		cout << " am";
	}
	else
		cout << "pm";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t";



}

void System::RentNow()
{
	cin.ignore();
	cout << "\nVerification: ";
pl1:
	string s, s1;
	string f;
	int d, m, y;
	int n1 = 0, n2 = 0, n3;

	customer* temp = head;
	Driver* tempd = headd;
	int n = 0;

	if (rsize == 0)
	{

		cout << "\nEnter your Username: ";

		getline(cin, s);

		for (int i = 1; i <= size; i++)
		{
			if (s == temp->GetUsername())
			{
				n++;
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
		pl2:
			char ch;
			string pas = "";

			cout << "\nEnter your password: ";
			ch = _getch();

			while (ch != 13) {
				if (ch == 8) {  // Backspace key
					if (!pas.empty()) {
						pas.pop_back();
						cout << "\b \b";  // Move the cursor back, overwrite the character with a space, and move the cursor back again
					}
				}
				else {
					pas.push_back(ch);
					cout << '*';
				}

				ch = _getch();
			}
			if (pas == temp->GetPassword())
			{
				system("cls");
				ShowAllCars();
			pl3:
				cout << "\n\n\nEnter the ID of the car you want to rent: ";
				cin >> n1;
				if (n1 > 0 && n1 <= csize)
				{
					cout << "\nCar Selected: \n";
					CSearchByID(n1);
					Car* tempe = heade;
					for (int i = 1; i < n1; i++)
					{
						tempe = tempe->next;
					}
					if (tempe->isAvailable == 0)
					{
						cout << "\nThe selected Car is not available right now. Select another car.";
						goto pl3;
					}
					else
					{
						cout << "\nYour Car has been selected.";

						cout << "\nDo you wish to add a Driver? (y or n): ";
						cin >> f;
						if (f == "y")
						{
							system("cls");
							ShowAllDrivers();
						pl5:
							n2 = 0;
							tempd = headd;
							cout << "\n\nEnter the ID of the Driver: ";
							cin >> n2;

							if (n2 > 0 && n2 <= dsize)
							{

								for (int i = 1; i < n2; i++)
								{
									tempd = tempd->next;
								}

								if (tempd->isAvailable() == TRUE)
								{
									cout << "\nSelected Driver Details: \n";
									DSearchByID(n2);
									cout << "\nYour Driver is confirmed.";


								}

								else
								{
									cout << "\nThe Selected driver is not available. Select another Driver.";
									goto pl5;
								}
							}
							else
							{
								cout << "\nEnter a valid ID of Driver.";
								goto pl5;
							}
						}
						else
						{
							cout << "\nNo Driver Selected";
						}

					}
				pl4:
					cout << "\nEnter the number of days you want the car for: ";
					cin >> n3;
					RealDateStore();

					if (n3 <= 7)
					{

						Rent* nn = new Rent;
						rsize++;
						nn->startDay = date;
						nn->startMonth = month;
						nn->startYear = year;

						nn->endDay = date + n3;
						nn->endMonth = month;
						nn->endYear = year;
						nn->ID = rsize;

						if (f == "y")
						{
							nn->totalCost = (tempe->price * n3) + (tempd->salary * n3);
							tempd->available = false;
							nn->driverPicked = 1;
						}
						else
						{
							nn->totalCost = (tempe->price * n3);
							nn->driverPicked = 0;
						}

						tempe->isAvailable = false;
						nn->CustomerUname = temp->GetUsername();
						nn->carlicense = tempe->getLicensePlate();
						nn->carname = tempe->getCarName();

						headr = nn;
						tailr = nn;
						nn->next = NULL;
						nn->prev = NULL;
					}
					else
					{
						cout << "\nWe only rent for 7 days maximum.";
						goto pl4;
					}
				}
				else
				{
					cout << "\nEnter a valid ID of the car.";
					goto pl3;
				}
			}
			else
			{
				cout << "\nThe entered Password is wrong.";
				goto pl2;
			}
		}
	}
	else
	{
	pl10:
		string s, s1;
		string f;
		int d, m, y;
		int n1 = 0, n2 = 0, n3;

		customer* temp = head;
		Driver* tempd = headd;
		int n = 0;

		cout << "\nEnter your Username: ";

		getline(cin, s);

		for (int i = 1; i <= size; i++)
		{
			if (s == temp->GetUsername())
			{
				n++;
				break;
			}
			temp = temp->next;
		}
		if (n == 0)
		{
			cout << "\nEnter a valid username. ";
			goto pl10;
		}
		else
		{
		pl20:
			char ch;
			string pas = "";

			cout << "\nEnter your password: ";
			ch = _getch();

			while (ch != 13) {
				if (ch == 8) {  // Backspace key
					if (!pas.empty()) {
						pas.pop_back();
						cout << "\b \b";  // Move the cursor back, overwrite the character with a space, and move the cursor back again
					}
				}
				else {
					pas.push_back(ch);
					cout << '*';
				}

				ch = _getch();
			}
			if (pas == temp->GetPassword())
			{
				system("cls");
				ShowAllCars();
			pl30:
				cout << "\n\n\nEnter the ID of the car you want to rent: ";
				cin >> n1;
				if (n1 > 0 && n1 <= csize)
				{
					cout << "\nCar Selected: \n";
					CSearchByID(n1);
					Car* tempe = heade;
					for (int i = 1; i < n1; i++)
					{
						tempe = tempe->next;
					}
					if (tempe->isAvailable == 0)
					{
						cout << "\nThe selected Car is not available right now. Select another car.";
						goto pl30;
					}
					else
					{
						cout << "\nYour Car has been selected.";

						cout << "\nDo you wish to add a Driver? (y or n): ";
						cin >> f;
						if (f == "y")
						{
							system("cls");
							ShowAllDrivers();
						pl50:
							n2 = 0;
							tempd = headd;
							cout << "\n\nEnter the ID of the Driver: ";
							cin >> n2;

							if (n2 > 0 && n2 <= dsize)
							{

								for (int i = 1; i < n2; i++)
								{
									tempd = tempd->next;
								}

								if (tempd->isAvailable() == TRUE)
								{
									cout << "\nSelected Driver Details: \n";
									DSearchByID(n2);
									cout << "\nYour Driver is confirmed.";


								}

								else
								{
									cout << "\nThe Selected driver is not available. Select another Driver.";
									goto pl50;
								}
							}
							else
							{
								cout << "\nEnter a valid ID of Driver.";
								goto pl50;
							}
						}
						else
						{
							cout << "\nNo Driver Selected";
						}

					}
				pl40:
					cout << "\nEnter the number of days you want the car for: ";
					cin >> n3;
					RealDateStore();

					if (n3 <= 7)
					{

						Rent* nn = new Rent;
						rsize++;
						nn->startDay = date;
						nn->startMonth = month;
						nn->startYear = year;

						nn->endDay = date + n3;
						nn->endMonth = month;
						nn->endYear = year;
						nn->ID = rsize;

						if (f == "y")
						{
							nn->totalCost = (tempe->price * n3) + (tempd->salary * n3);
							tempd->available = false;
							nn->driverPicked = 1;
						}
						else
						{
							nn->totalCost = (tempe->price * n3);
							nn->driverPicked = 0;
						}

						tempe->isAvailable = false;
						nn->CustomerUname = temp->GetUsername();
						nn->carlicense = tempe->getLicensePlate();
						nn->carname = tempe->getCarName();

						tailr->next = nn;
						nn->prev = tailr;
						tailr = nn;
						nn->next = NULL;
					}
					else
					{
						cout << "\nWe only rent for 7 days maximum.";
						goto pl40;
					}
				}
				else
				{
					cout << "\nEnter a valid ID of the car.";
					goto pl30;
				}
			}
			else
			{
				cout << "\nThe entered Password is wrong.";
				goto pl20;
			}
		}
	}

}

void System::removeDuplicateLines()
{
	const std::string& filename = "All Rents.txt";
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Failed to open file: " << filename << std::endl;
		return;
	}

	unordered_set<std::string> uniqueLines;
	std::vector<std::string> lines;
	std::string line;

	while (std::getline(file, line)) {
		if (uniqueLines.insert(line).second) {
			lines.push_back(line);
		}
	}

	file.close();

	std::ofstream outputFile(filename);
	if (!outputFile.is_open()) {
		std::cerr << "Failed to open file for writing: " << filename << std::endl;
		return;
	}

	for (const auto& line : lines) {
		outputFile << line << std::endl;
	}

	outputFile.close();
}

void System::storeRentDataToFile()
{
	const std::string& filename = "rent.txt";
	std::ofstream file(filename);
	ofstream sfile("All Rents.txt", ios::app);
	if (!file.is_open()) {
		std::cout << "Failed to open the file.\n";
		return;
	}

	Rent* currentRent = headr;
	while (currentRent != nullptr) {
		file << currentRent->startDay << ","
			<< currentRent->startMonth << ","
			<< currentRent->startYear << ","
			<< currentRent->endDay << ","
			<< currentRent->endMonth << ","
			<< currentRent->endYear << ","
			<< currentRent->totalCost << ","
			<< currentRent->CustomerUname << ","
			<< currentRent->carname << ","
			<< currentRent->carlicense << ","
			<< currentRent->ID << "," << currentRent->driverPicked << "\n";

		currentRent = currentRent->next;
	}

	file.close();

	currentRent = headr;
	while (currentRent != nullptr) {
		sfile << currentRent->startDay << ","
			<< currentRent->startMonth << ","
			<< currentRent->startYear << ","
			<< currentRent->endDay << ","
			<< currentRent->endMonth << ","
			<< currentRent->endYear << ","
			<< currentRent->totalCost << ","
			<< currentRent->CustomerUname << ","
			<< currentRent->carname << ","
			<< currentRent->carlicense << ","
			<< currentRent->ID << "," << currentRent->driverPicked << "\n";

		currentRent = currentRent->next;
	}

	sfile.close();

	removeDuplicateLines();
}

void System::readRentDataFromFile()
{
	const std::string& filename = "rent.txt";
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cout << "Failed to open the file.\n";
		return;
	}

	std::string line;
	while (std::getline(file, line)) {
		Rent* rent = new Rent();
		std::istringstream iss(line);
		std::string token;

		// Extracting values from the comma-separated line
		std::getline(iss, token, ',');
		rent->startDay = std::stoi(token);

		std::getline(iss, token, ',');
		rent->startMonth = std::stoi(token);

		std::getline(iss, token, ',');
		rent->startYear = std::stoi(token);

		std::getline(iss, token, ',');
		rent->endDay = std::stoi(token);

		std::getline(iss, token, ',');
		rent->endMonth = std::stoi(token);

		std::getline(iss, token, ',');
		rent->endYear = std::stoi(token);

		std::getline(iss, token, ',');
		rent->totalCost = std::stod(token);

		std::getline(iss, token, ',');
		rent->CustomerUname = token;

		std::getline(iss, token, ',');
		rent->carname = token;

		std::getline(iss, token, ',');
		rent->carlicense = token;

		std::getline(iss, token, ',');
		rent->ID = std::stoi(token);

		std::getline(iss, token, ',');
		bool driverPicked = (token == "1");  // Assuming "1" represents true and "0" represents false in the file

		// Set the driverPicked value for the Rent object
		rent->setDriverPicked(driverPicked);

		// Add the rent object to the linked list
		if (headr == nullptr) {
			headr = rent;
			tailr = rent;

		}
		else {
			tailr->next = rent;
			rent->prev = tailr;
			tailr = rent;
		}
		rsize++;
	}

	file.close();

}

void System::RentTable()
{
	cout << "\n*****************************************************************************************************************************************\n";
	cout << "ID       Start Date          End Date        Total Cost      Customer Username         Car Name           Car License       Driver Picked" << endl;
	cout << "******************************************************************************************************************************************\n";
}

void System::ShowAllRents()
{
	Rent* tempr = headr;

	RentTable();
	while (tempr != NULL)
	{
		cout << tempr->getID() << setw(10);
		cout << tempr->startDay << "/" << tempr->startMonth << "/" << tempr->startYear << setw(12);
		cout << tempr->endDay << "/" << tempr->endMonth << "/" << tempr->endYear << setw(14);
		cout << tempr->getTotalCost() << setw(20);
		cout << tempr->CustomerUname << setw(23);
		cout << tempr->carname << setw(22);
		cout << tempr->carlicense << setw(15) << tempr->isDriverPicked() << endl;
		tempr = tempr->next;
	}
}

void System::DeleteRent(int pos)
{
	Rent* tempr = headr;
	if (pos == 1)
	{
		if (rsize > 1)
		{
			tempr = headr->next;
			delete headr;
			headr = tempr;
			headr->prev = NULL;
			rsize--;
			tempr = headr;
			for (int i = 1; i <= rsize; i++)
			{
				tempr->setID(pos);
				pos++;
				tempr = tempr->next;
			}
		}
		else
		{
			delete tempr;

			rsize--;
		}
	}

	else if (pos == rsize)
	{
		tempr = tailr;
		tailr = tailr->prev;
		tailr->next = NULL;
		delete tempr;
		rsize--;
		tailr->setID(rsize);
	}

	else if (pos > 1 && pos < rsize)
	{
		for (int i = 1; i < pos; i++)
		{
			tempr = tempr->next;

		}
		tempr->prev->next = tempr->next;
		tempr->next->prev = tempr->prev;
		rsize--;
		tempr = tempr->next;
		for (int i = pos; i <= rsize; i++)
		{
			tempr->setID(pos);
			pos++;
			tempr = tempr->next;
		}
		delete tempr;


	}

	else
	{
		cout << "\nThe entered ID is not valid.";
	}
}

void System::RSearchByID(int pos)
{
	Rent* tempr = headr;
	for (int i = 1; i < pos; i++)
	{
		tempr = tempr->next;
	}

	cout << endl;
	cout << "ID: " << tempr->getID() << ", UserName: " << tempr->getCustomerUname();
	cout << ", Car Name: " << tempr->getCarName() << ", License Plate: ";
	cout << tempr->getCarLicense() << ", Total Cost: " << tempr->getTotalCost();
	cout << ", Starting Date: " << tempr->getStartDay() << " / " << tempr->getStartMonth() << " / " << tempr->getStartYear() << ", Ending Date: ";
	cout << tempr->getEndDay() << " / " << tempr->getEndMonth() << " / " << tempr->getEndYear();
	cout << ", Driver Picked: ";
	if (tempr->isDriverPicked() == TRUE)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	cout << endl;

}

void System::RSearchByUser(string s)
{

	Rent* tempr = headr;
	int n = 0;
	RentTable();
	for (int i = 1; i <= rsize; i++)
	{
		if (s == tempr->getCustomerUname())
		{


			cout << tempr->getID() << setw(10);
			cout << tempr->startDay << "/" << tempr->startMonth << "/" << tempr->startYear << setw(12);
			cout << tempr->endDay << "/" << tempr->endMonth << "/" << tempr->endYear << setw(14);
			cout << tempr->getTotalCost() << setw(20);
			cout << tempr->CustomerUname << setw(23);
			cout << tempr->carname << setw(22);
			cout << tempr->carlicense << setw(15) << tempr->isDriverPicked() << endl;

			n++;
		}
		tempr = tempr->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Rent of this Customer.";
	}


}

void System::SetAvailableDriver()
{

	ShowNotAvailableDrivers();
pk1:
	cout << "\nEnter the ID of the Driver to mark as Available: ";
	int n;
	cin >> n;
	Driver* tempd = headd;
	if (n > 0 && n <= dsize)
	{
		for (int i = 1; i < n; i++)
		{
			tempd = tempd->next;
		}

		if (tempd->isAvailable())
		{
			cout << "\nThe Driver is Already Available.";

		}
		else
		{
			tempd->available = TRUE;
			cout << "\nThe Driver is now Marked As Available";
		}

	}
	else
	{
		cout << "\nEnter a Valid id.";
		goto pk1;
	}

}

void System::ShowAvailableCars()
{
	Car* tempe = heade;
	int n = 0;
	CarTable();
	for (int i = 1; i <= csize; i++)
	{

		if (TRUE == tempe->isCarAvailable())
		{


			cout << setw(3) << tempe->getID() << setw(16);
			cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
			cout << tempe->getLicensePlate() << setw(17);
			cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable() << setw(19) << tempe->price << " Rs" << endl;

			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nThere is no Car Available.";
	}

}

void System::SShowNotAvailableCars()
{
	Car* tempe = heade;
	int n = 0;
	CarTable();
	for (int i = 1; i <= csize; i++)
	{

		if (FALSE == tempe->isCarAvailable())
		{


			cout << setw(3) << tempe->getID() << setw(16);
			cout << tempe->getCarCompany() << setw(19) << tempe->getCarName() << setw(23);
			cout << tempe->getLicensePlate() << setw(17);
			cout << tempe->getCarModel() << setw(19) << tempe->getKmsDriven() << setw(13) << tempe->isCarAvailable() << setw(19) << tempe->price << " Rs" << endl;

			n++;
		}
		tempe = tempe->next;
	}

	if (n == 0)
	{
		cout << "\nAll Cars are Available.";
	}

}

void System::SetAvailableCar()
{

	SShowNotAvailableCars();

pk114:
	cout << "\nEnter the ID of the Car to mark as Available: ";
	int n;
	cin >> n;
	Car* tempe = heade;
	if (n > 0 && n <= csize)
	{
		for (int i = 1; i < n; i++)
		{
			tempe = tempe->next;
		}

		if (tempe->isCarAvailable())
		{
			cout << "\nThe Car is Already Available.";

		}
		else
		{
			tempe->isAvailable = TRUE;
			cout << "\nThe Car is now Marked As Available";
		}

	}
	else
	{
		cout << "\nEnter a Valid id.";
		goto pk114;
	}

}

void System::SetNotAvailableCar()
{

	ShowAvailableCars();

pk112:
	cout << "\nEnter the ID of the Car to mark as Not Available: ";
	int n;
	cin >> n;
	Car* tempe = heade;
	if (n > 0 && n <= csize)
	{
		for (int i = 1; i < n; i++)
		{
			tempe = tempe->next;
		}

		if (tempe->isCarAvailable())
		{

			tempe->isAvailable = FALSE;
			cout << "\nThe Car is now Marked As Not Available";

		}
		else
		{
			cout << "\nThe Car is Already Not Available.";
		}

	}
	else
	{
		cout << "\nEnter a Valid id.";
		goto pk112;
	}

}

void System::SetNotAvailableDriver()
{

	ShowNotAvailableDrivers();
pk123:
	cout << "\nEnter the ID of the Driver to mark as Not Available: ";
	int n;
	cin >> n;
	Driver* tempd = headd;
	if (n > 0 && n <= dsize)
	{
		for (int i = 1; i < n; i++)
		{
			tempd = tempd->next;
		}

		if (!tempd->isAvailable())
		{
			cout << "\nThe Driver is Already Not Available.";

		}
		else
		{
			tempd->available = FALSE;
			cout << "\nThe Driver is now Marked As Not Available";
		}

	}
	else
	{
		cout << "\nEnter a Valid id.";
		goto pk123;
	}

}
