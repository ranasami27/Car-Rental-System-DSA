#include "function.h"


int main() {
	//system("COLOR 5f");
	system("COLOR 0F");
	int choice;
	int c1, c2 = 0;
	int c3 = 0, c4;
	int c5 = 0;
	int c6;
	int c7, c8, c9, c10, c11, c12 = 0;
	int s2;
	int a1, a2, a3, a4, a5, a6, a7;
	string s1, s3, s4, s5, s8, s9;
	System s;

	cout << "   _______  _______  ______      ______    _______  __    _  _______  _______  ___        _______  __   __  _______  _______  _______  __   __ \n";
	cout << "  |       ||   _   ||    _ |    |    _ |  |       ||  |  | ||       ||   _   ||   |      |       ||  | |  ||       ||       ||       ||  |_|  |\n";
	cout << "  |       ||  |_|  ||   | ||    |   | ||  |    ___||   |_| ||_     _||  |_|  ||   |      |  _____||  |_|  ||  _____||_     _||    ___||       |\n";
	cout << "  |       ||       ||   |_||_   |   |_||_ |   |___ |       |  |   |  |       ||   |      | |_____ |       || |_____   |   |  |   |___ |       |\n";
	cout << "  |      _||       ||    __  |  |    __  ||    ___||  _    |  |   |  |       ||   |___   |_____  ||_     _||_____  |  |   |  |    ___||       |\n";
	cout << "  |     |_ |   _   ||   |  | |  |   |  | ||   |___ | | |   |  |   |  |   _   ||       |   _____| |  |   |   _____| |  |   |  |   |___ | ||_|| |\n";
	cout << "  |_______||__| |__||___|  |_|  |___|  |_||_______||_|  |__|  |___|  |__| |__||_______|  |_______|  |___|  |_______|  |___|  |_______||_|   |_|\n";





	cout << "\n\n\n\n\n\n\n\n\n";
	cout << "                                                                                                          ,-----------------. \n";
	cout << "      +++++++++++++++++++++++++++                                                                        |,--------.--------.| \n";
	cout << "     |+++++++++++++++++++++++++++|                                                                      |:       '---' ,--.  :| \n";
	cout << "     | Group Members:            |                                                                      (.'------------'----`-',)  \n";
	cout << "     |                           |                                                                    ,' \`.         $       ,'/ `.   \n";
	cout << "     | Muhammad Subhan 001       |                                                                  ,'-.--. `.------^------.' .--,-`.  \n";
	cout << "     | Muhammad Tayyab 002       |                                                                 ((__)) |,'    ___|___    `.| ((__))  \n";
	cout << "     | Muhammad Sami   004       |                                                                 |`--' _|_________|_________|_ `--'|    \n";
	cout << "     | Muhammad Talha  005       |                                                                 | __,',--.__|____|____|__,--.`.__ |    \n";
	cout << "     | Abdullah Amin   181       |                                                                 ||__`_`--'._|____|____|__`--','__||   \n";
	cout << "     |                           |                                                                (___          |SSt-101|          ___)\n";
	cout << "     |+++++++++++++++++++++++++++|                                                                   |````|``---'-------'---``|````|\n";
	cout << "      +++++++++++++++++++++++++++                                                                    '----'                   '----'\n";
	Sleep(6000);
	system("cls");
	{
		s.readDriverFromFile();
		s.CarreadFromFile();
		s.readFromFile();
		s.readRentDataFromFile();
		s.RealTime(); s.RealDatePrint();
	}
	admin ad("admin", "sad123");
	do {
	m2:
		if (c5 != 0)
			system("cls");
		c5++;
		cout << "\n\n\n1. Admin Menu";
		cout << "\n2. Customer Menu";
		cout << "\n3. Exit\n";
	m1:
		cout << "\nSelect an option: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cin.ignore();
			system("cls");
		b1:
			cout << "\nEnter the admin username: ";
			getline(cin, s4);

			if (s4 == ad.GetUsername())
			{
			b3:
				char ch;
				s5 = "";

				cout << "\nEnter your password: ";
				ch = _getch();

				while (ch != 13) {
					if (ch == 8) {  // Backspace key
						if (!s5.empty()) {
							s5.pop_back();
							cout << "\b \b";  // Move the cursor back, overwrite the character with a space, and move the cursor back again
						}
					}
					else {
						s5.push_back(ch);
						cout << '*';
					}

					ch = _getch();
				}

				if (s5 == ad.GetPassword())
				{
				b4:
					system("cls");
					s.LoginTime();
					cout << "\n\n1. Cars";
					cout << "\n2. Drivers";
					cout << "\n3. Customers";
					cout << "\n4. Rents";
					cout << "\n5. Previous Menu";

				b2:
					cout << "\n\nSelect an option: ";
					cin >> a1;

					switch (a1)
					{
					case 1: //cars brrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr
					{
						system("cls");
						//Why do Americans choose from just two people to run for president and 50 for Miss America?
						do {
						b6:
							cout << "\n\n1. Add a Car";
							cout << "\n2. Delete a Car";
							cout << "\n3. Show List";
							cout << "\n4. Search Cars";
							cout << "\n5. Sort List By kms";
							cout << "\n6. Sort List By Price";
							cout << "\n7. Mark Available";
							cout << "\n8. Mark not Available";
							cout << "\n9. Update Car KMs Driven";
							cout << "\n10. Update Car Price";
							cout << "\n11. Previous Menu";
						b5:
							cout << "\n\nSelect an option: ";
							cin >> a2;
							system("cls");
							switch (a2)
							{
							case 1:
							{
								s.AddCar();
								break;
							}
							case 2:
							{
								cout << "\nEnter the ID of the car: ";
								cin >> a3;
								s.DeleteCar(a3);
								break;
							}
							case 3:
							{
								s.ShowAllCars();

								do {
									cout << "\n\n1. Show Available Cars";
									cout << "\n2. Show Not Available Cars";
									cout << "\n3. Display in Price Ascending";
									cout << "\n4. Display in Price Descending";
									cout << "\n5. Display in Kms Ascending";
									cout << "\n6. Display in Kms Descending";
									cout << "\n7. Filter By price";
									cout << "\n8. Previous Menu";

								s7:
									cout << "\n\nSelect an option: ";
									cin >> a3;
									system("cls");
									switch (a3)
									{
									case 1:
									{
										s.ShowAvailableCars();
										break;
									}
									case 2:
									{
										s.SShowNotAvailableCars();
										break;
									}
									case 3:
									{
										s.DisplayCarsByPriceAscending();
										break;
									}
									case 4:
									{
										s.DisplayCarsByPriceDescending();
										break;
									}
									case 5:
									{
										s.DisplayCarsByKmsAscending();
										break;
									}
									case 6:
									{
										s.DisplayCarsByKmsDescending();
										break;
									}
									case 7:
									{
										s.filterByPrice();
										break;
									}
									case 8:
									{
										goto b6;
									}
									default:
									{
										cout << "\nEnter a valid option.";
										goto s7;
									}
									}
								} while (a3 != 8);
								break;
							}
							case 4:
							{
								do {
									cout << "\n\n1. Search By ID";
									cout << "\n2. Search By Company name";
									cout << "\n3. Search By Car Model";
									cout << "\n4. Search By Car Name";
									cout << "\n5. Search By license Plate number";
									cout << "\n6. Previous Menu";

								s70:
									cout << "\n\nSelect an option: ";
									cin >> c7;
									system("cls");
									switch (c7)
									{
									case 1:
									{
										cout << "\nEnter the ID of the Car: ";
										cin >> s2;
										s.CSearchByID(s2);
										break;
									}
									case 2:
									{
										cin.ignore();
										cout << "\nEnter the Company name of the Car: ";
										getline(cin, s3);
										s.CSearchByCompany(s3);
										break;
									}
									case 3:
									{
										cin.ignore();
										cout << "\nEnter the model of the Car: ";
										getline(cin, s3);
										s.CSearchByModel(s3);
										break;
									}
									case 4:
									{
										cin.ignore();
										cout << "\nEnter the name of the Car: ";
										getline(cin, s3);
										s.CSearchByName(s3);
										break;
									}
									case 5:
									{
										cin.ignore();
										cout << "\nEnter the License Plate number of the Car: ";
										getline(cin, s3);
										s.CSearchByLicense(s3);
										break;
									}

									case 6:
									{
										goto b6;
									}
									default:
									{
										cout << "\nEnter a valid option.";
										goto s70;
									}
									}
								} while (c7 != 6);
								break;
							}
							case 5:
							{
								s.sortKMs();
								break;
							}
							case 6:
							{
								s.sortPrice();
								break;
							}
							case 7:
							{
								s.SetAvailableCar();
								break;
							}
							case 8:
							{
								s.SetNotAvailableCar();
								break;
							}
							case 9:
							{
								cout << "\nEnter the ID of the Car: ";
								cin >> s2;
								s.UpdateDetails(s2);
								break;
							}
							case 10:
							{
								cout << "\nEnter the ID of the Car: ";
								cin >> s2;
								s.UpdatePrice(s2);
								break;
							}
							case 11:
							{
								goto b4;
							}
							default:
							{
								cout << "\nEnter a valid option.";
								goto b5;
							}
							}
						} while (a2 != 1);
						break;
					}
					case 2:  //drivers
					{
						system("cls");
						do {
						b40:
							cout << "\n1. Add Driver";
							cout << "\n2. Delete Driver";
							cout << "\n3. Search ";
							cout << "\n4. Show List";
							cout << "\n5. Mark as Available";
							cout << "\n6. Mark as not Available";
							cout << "\n7. Previous Menu";
						b7:
							cout << "\n\nSelect an option: ";
							cin >> a4;
							system("cls");
							switch (a4)
							{
							case 1:
							{
								s.AddDriver();
								break;
							}
							case 2:
							{
								cout << "\nEnter the ID of the Driver: ";
								cin >> a5;
								s.DeleteDriver(a5);
								break;
							}
							case 3:
							{
								do {

									cout << "\n\n1. Search By ID";
									cout << "\n2. Search By CNIC";
									cout << "\n3. Search By Name";
									cout << "\n4. Search By Phone Number";
									cout << "\n5. Search By Address";
									cout << "\n6. Previous Menu";

								m110:
									cout << "\n\nSelect an option: ";
									cin >> c11;
									system("cls");
									switch (c11)
									{
									case 1:
									{
										cout << "\nEnter the ID: ";
										cin >> s2;
										s.DSearchByID(s2);
										break;
									}
									case 2:
									{
										cin.ignore();
										cout << "\nEnter the CNIC number: ";
										getline(cin, s3);
										s.DSearchByCnic(s3);
										break;
									}
									case 3:
									{
										cin.ignore();
										cout << "\nEnter the Name: ";
										getline(cin, s3);
										s.DSearchByName(s3);
										break;
									}
									case 4:
									{
										cin.ignore();
										cout << "\nEnter the Phone number: ";
										getline(cin, s3);
										s.DSearchByPhone(s3);
										break;
									}
									case 5:
									{
										cin.ignore();
										cout << "\nEnter the Address: ";
										getline(cin, s3);
										s.DSearchByAddress(s3);
										break;
									}

									case 6:
									{
										goto b40;
									}
									default:
									{
										cout << "\nEnter a valid option.";
										goto m110;
									}
									}
								} while (c11 != 6);
								break;
							}
							case 4:
							{
								do {
									cout << "\n\n1. Show Available Drivers";
									cout << "\n2. Show Not Available Drivers";
									cout << "\n3. Display in Price Ascending";
									cout << "\n4. Display in Price Descending";
									cout << "\n5. Filter By Age";
									cout << "\n6. Filter By Price";
									cout << "\n7. Previous Menu";

								m100:
									cout << "\n\nSelect an option: ";
									cin >> c10;
									system("cls");
									switch (c10)
									{
									case 1:
									{
										s.ShowAvailableDrivers();
										break;
									}
									case 2:
									{
										s.ShowNotAvailableDrivers();
										break;
									}
									case 3:
									{
										s.DisplayDriversBySalaryAscending();
										break;
									}
									case 4:
									{
										s.DisplayDriversBySalaryDescending();
										break;
									}
									case 5:
									{
										s.filterByAge();
										break;

									}
									case 6:
									{
										s.filterBySalary();
										break;
									}
									case 7:
									{
										goto b40;
									}

									default:
									{
										cout << "\nEnter a valid option.";
										goto m100;
									}
									}
								} while (c10 != 7);

								break;
							}
							case 5:
							{
								s.SetAvailableDriver();
								break;
							}
							case 6:
							{
								s.SetNotAvailableDriver();
								break;
							}
							case 7:
							{
								goto b4;
							}
							default:
							{
								cout << "\nEnter a valid option.";
								goto b7;
							}
							}
						} while (a4 != 7);

						break;
					}
					case 3:  //customers
					{
						system("cls");
						do {
						b9:
							cout << "\n\n1. Add Customer";
							cout << "\n2. Delete Customer";
							cout << "\n3. Search Customer";
							cout << "\n4. Show Customers";
							cout << "\n5. Previous Menu";
						b8:
							cout << "\n\nSelect an option: ";
							cin >> a6;
							system("cls");

							switch (a6)
							{
							case 1:
							{
								s.AddCustomer();
								break;
							}
							case 2:
							{
								cout << "\nEnter the ID: ";
								int r;
								cin >> r;
								s.DeleteCustomer(r);
								break;
							}
							case 3:
							{

								cout << "\n\n1. Search By ID";
								cout << "\n2. Search By UserName";
								cout << "\n3. Search by Address";
								cout << "\n4. Search by Phone Number";
								cout << "\n5. Search By Name";
								cout << "\n6. Previous Menu";
							b10:
								cout << "\n\nSelect an option: ";
								cin >> a7;
								system("cls");
								switch (a7)
								{
								case 1:
								{
									int fs;
									cout << "\nEnter the ID: ";
									cin >> fs;
									s.SearchByID(fs);
									break;
								}
								case 2:
								{
									cin.ignore();
									cout << "\nEnter the Username: ";
									getline(cin, s9);
									s.SearchByUserName(s9);
									break;
								}
								case 3:
								{
									cin.ignore();
									cout << "\nEnter the Address: ";
									getline(cin, s9);
									s.SearchByAddress(s9);
									break;
								}
								case 4:
								{
									cin.ignore();
									cout << "\nEnter the Phone number: ";
									getline(cin, s9);
									s.SearchByPhone(s9);
									break;
								}
								case 5:
								{
									cin.ignore();
									cout << "\nEnter the Name: ";
									getline(cin, s9);
									s.SearchByName(s9);
									break;
								}
								case 6:
								{
									goto b9;
								}
								default:
								{
									cout << "\nEnter a valid option.";
									goto b10;
								}
								}
								break;
							}
							case 4:
							{
								s.ShowAllCustomers();
								break;
							}
							case 5:
							{
								goto b4;
							}
							default:
							{
								cout << "\nEnter a Valid option.";
								goto b8;
							}
							}
						} while (a6 != 5);
						break;
					}

					case 4:  //rents
					{
						int af;
						system("cls");
						do {
							cout << "\n1. Show All Rents";
							cout << "\n2. Search By User";
							cout << "\n3. Search By ID";
							cout << "\n4. Delete A Rent";
							cout << "\n5. Previous Menu";


						d1:
							cout << "\n\nSelect an option: ";
							cin >> af;
							system("cls");
							switch (af)
							{
							case 1:
							{
								s.ShowAllRents();
								break;
							}
							case 2:
							{
								string ds;
								cin.ignore();
								cout << "\nEnter the username: ";
								getline(cin, ds);
								s.RSearchByUser(ds);
								break;
							}
							case 3:
							{
								int ds1;
								cout << "\nEnter the ID: ";
								cin >> ds1;
								s.RSearchByID(ds1);
								break;
							}
							case 4:
							{
								int ds1;
								cout << "\nEnter the ID: ";
								cin >> ds1;
								s.DeleteRent(ds1);
								break;
							}
							case 5:
							{
								goto b4;
							}
							default:
							{
								cout << "\nEnter a valid option";
								goto d1;
							}
							}
						} while (af != 5);
						break;
					}
					case 5:
					{
						goto m2;
					}
					default:
					{
						cout << "\nEnter a valid option.";
						goto b2;
					}
					}
				}
				else
				{
					if (c12 == 0)
					{
						cout << "\nThe entered password is wrong. | | | ";

					}


					if (c12 == 1)
					{
						cout << "\nThe entered password is wrong. | |  ";
					}

					if (c12 == 2)
					{
						cout << "\nThe entered password is wrong. |   ";
					}

					if (c12 == 3)
					{
						cout << "\nYou entered the wrong password too many times.";
						exit(0);
					}
					c12++;

					goto b3;
				}
			}
			else
			{
				cout << "\nThe entered username is wrong. Try again.";
				goto b1;
			}

			break;
		}
		case 2:
		{
			do
			{
			m5:
				system("cls");

				cout << "\n1. Customer login";
				cout << "\n2. Customer Sign-up";
				cout << "\n3. Forgot Password";
				cout << "\n4. Forgot Username";
				cout << "\n5. Goto Main Menu\n";
			m3:
				cout << "\nSelect an option: ";
				cin >> c1;
				switch (c1)
				{
				case 1:
				{

					c8 = s.CustomerLogin();
					system("cls");
					do {
					m6:
						if (c2 != 4 && c3 != 0)
							system("cls");
						c3++;

						s.SpecificUser(c8);
						s.LoginTime();
						cout << "\n\n\n1. Drivers List";
						cout << "\n2. Cars List";
						cout << "\n3. Rent a Car";
						cout << "\n4. View all Rents";
						cout << "\n5. Previous Menu";
					m4:

						cout << "\n\nSelect an option: ";
						cin >> c2;

						switch (c2)
						{
						case 2:
						{
							system("cls");
							s.ShowAllCars();
						m9:

							cout << "\n1. Show";
							cout << "\n2. Search";
							cout << "\n3. Previous Menu";
						m8:
							cout << "\n\nSelect an option: ";
							cin >> c6;

							switch (c6)
							{
							case 1:
							{
								do {
									cout << "\n\n1. Show Available Cars";
									cout << "\n2. Show Not Available Cars";
									cout << "\n3. Display in Price Ascending";
									cout << "\n4. Display in Price Descending";
									cout << "\n5. Display in Kms Ascending";
									cout << "\n6. Display in Kms Descending";
									cout << "\n7. Filter By Price";
									cout << "\n8. Previous Menu";

								m7:
									cout << "\n\nSelect an option: ";
									cin >> c4;
									system("cls");
									switch (c4)
									{
									case 1:
									{
										s.ShowAvailableCars();
										break;
									}
									case 2:
									{
										s.SShowNotAvailableCars();
										break;
									}
									case 3:
									{
										s.DisplayCarsByPriceAscending();
										break;
									}
									case 4:
									{
										s.DisplayCarsByPriceDescending();
										break;
									}
									case 5:
									{
										s.DisplayCarsByKmsAscending();
										break;
									}
									case 6:
									{
										s.DisplayCarsByKmsDescending();
										break;
									}
									case 7:
									{
										s.filterByPrice();
										break;
									}
									case 8:
									{
										goto m9;
									}
									default:
									{
										cout << "\nEnter a valid option.";
										goto m7;
									}
									}
								} while (c4 != 8);
								break;
							}
							case 2:
							{
								do {
									cout << "\n\n1. Search By ID";
									cout << "\n2. Search By Company name";
									cout << "\n3. Search By Car Model";
									cout << "\n4. Search By Car Name";
									cout << "\n5. Search By license Plate number";
									cout << "\n6. Previous Menu";

								m70:
									cout << "\n\nSelect an option: ";
									cin >> c7;
									system("cls");
									switch (c7)
									{
									case 1:
									{
										cout << "\nEnter the ID of the Car: ";
										cin >> s2;
										s.CSearchByID(s2);
										break;
									}
									case 2:
									{
										cin.ignore();
										cout << "\nEnter the Company name of the Car: ";
										getline(cin, s3);
										s.CSearchByCompany(s3);
										break;
									}
									case 3:
									{
										cin.ignore();
										cout << "\nEnter the model of the Car: ";
										getline(cin, s3);
										s.CSearchByModel(s3);
										break;
									}
									case 4:
									{
										cin.ignore();
										cout << "\nEnter the name of the Car: ";
										getline(cin, s3);
										s.CSearchByName(s3);
										break;
									}
									case 5:
									{
										cin.ignore();
										cout << "\nEnter the License Plate number of the Car: ";
										getline(cin, s3);
										s.CSearchByLicense(s3);
										break;
									}

									case 6:
									{
										goto m9;
									}
									default:
									{
										cout << "\nEnter a valid option.";
										goto m70;
									}
									}
								} while (c7 != 6);
								break;
							}
							case 3:
							{
								goto m6;
							}
							default:
							{
								cout << "\nEnter a valid option.";
								goto m8;
							}
							}
							break;
						}
						case 1:
						{

							system("cls");
							s.ShowAllDrivers();
						m90:
							cout << "\n1. Show";
							cout << "\n2. Search";
							cout << "\n3. Previous Menu";
							cout << "\n\nSelect an option: ";
							cin >> c9;

							switch (c9)
							{
							case 1:
							{
								do {
									cout << "\n\n1. Show Available Drivers";
									cout << "\n2. Show Not Available Drivers";
									cout << "\n3. Display in Price Ascending";
									cout << "\n4. Display in Price Descending";
									cout << "\n5. Filter By Age";
									cout << "\n6. Filter By Price";
									cout << "\n7. Previous Menu";

								m10:
									cout << "\n\nSelect an option: ";
									cin >> c10;
									system("cls");
									switch (c10)
									{
									case 1:
									{
										s.ShowAvailableDrivers();
										break;
									}
									case 2:
									{
										s.ShowNotAvailableDrivers();
										break;
									}
									case 3:
									{
										s.DisplayDriversBySalaryAscending();
										break;
									}
									case 4:
									{
										s.DisplayDriversBySalaryDescending();
										break;
									}
									case 5:
									{
										s.filterByAge();
										break;

									}
									case 6:
									{
										s.filterBySalary();
										break;
									}
									case 7:
									{
										goto m90;
									}

									default:
									{
										cout << "\nEnter a valid option.";
										goto m10;
									}
									}
								} while (c10 != 7);

								break;
							}
							case 2:
							{
								do {

									cout << "\n\n1. Search By ID";
									cout << "\n2. Search By CNIC";
									cout << "\n3. Search By Name";
									cout << "\n4. Search By Phone Number";
									cout << "\n5. Search By Address";
									cout << "\n6. Previous Menu";

								m11:
									cout << "\n\nSelect an option: ";
									cin >> c11;
									system("cls");
									switch (c11)
									{
									case 1:
									{
										cout << "\nEnter the ID: ";
										cin >> s2;
										s.DSearchByID(s2);
										break;
									}
									case 2:
									{
										cin.ignore();
										cout << "\nEnter the CNIC number: ";
										getline(cin, s3);
										s.DSearchByCnic(s3);
										break;
									}
									case 3:
									{
										cin.ignore();
										cout << "\nEnter the Name: ";
										getline(cin, s3);
										s.DSearchByName(s3);
										break;
									}
									case 4:
									{
										cin.ignore();
										cout << "\nEnter the Phone number: ";
										getline(cin, s3);
										s.DSearchByPhone(s3);
										break;
									}
									case 5:
									{
										cin.ignore();
										cout << "\nEnter the Address: ";
										getline(cin, s3);
										s.DSearchByAddress(s3);
										break;
									}

									case 6:
									{
										goto m90;
									}
									default:
									{
										cout << "\nEnter a valid option.";
										goto m11;
									}
									}
								} while (c11 != 6);
								break;
							}
							case 3:
							{
								goto m6;
							}
							}
							break;
						}
						case 3:
						{
							s.RentNow();
							break;
						}
						case 4:
						{
							cout << "\nEnter your Username: ";
							cin.ignore();
							getline(cin, s1);
							system("cls");
							s.RSearchByUser(s1);
							break;
						}
						case 5:
						{
							goto m5;
							break;
						}
						default:
						{

							cout << "\nEnter a valid option.";
							goto m4;

						}
						}
					} while (c2 != 5);
					break;
				}
				case 2:
				{
					s.AddCustomer();
					break;
				}
				case 3:
				{
					cout << "\nEnter your Username: ";
					cin.ignore();
					getline(cin, s8);
					cout << "\nEnter your id: ";
					int d;
					cin >> d;
					s.ForgetPass(s8, d);
					break;
				}
				case 4:
				{
					cout << "\nEnter your id: ";
					int d;
					cin >> d;
					s.ForgotUsername(d);
					break;
				}
				case 5:
				{
					goto m2;
				}
				default:
				{
					cout << "\nEnter a valid option. ";
					goto m3;
				}
				}
			} while (c1 != 5);
			break;
		}
		case 3:
		{
			cout << "\nThank you For using the system.";
			goto ret;


		}
		default:
		{
			cout << "\nEnter a valid option ";
			goto m1;
		}

		}



	} while (choice != 3);

ret:
	{
		s.writeDriverToFile();
		s.writeToFile();
		s.CarwriteToFile();
		s.storeRentDataToFile();
	}

	return 0;


}
