#include <iostream>
#include "UI_library.h"



void AddNewReader(...)
{
	Reader st;
	std::cout << "Enter name\n";
	std::cin >> st.name; std::cout << endl;
	std::cout << "Enter second name\n";
	std::cin >> st.secondName; std::cout << endl;
	std::cout << "Enter surname\n";
	std::cin >> st.surname; std::cout << endl;
	std::cout << "Enter passport ID\n";
	std::cin >> st.passNumber; std::cout << endl;
	std::cout << "Enter library cart number\n";
	std::cin >> st.libraryCartNumber; std::cout << endl;
	std::cout << "Enter telefon number\n";
	std::cin >> st.telefonNumber; std::cout << endl;
	std::cout << "Enter registration address\n";
	std::cin >> st.registrationAddress; std::cout << endl;
}
void ReaderRegistrationDate(...)
{
	ReaderRegistrationDate st;
	std::cout << "Enter Day of registration of the reader\n";
	std::cin >> st.tm_mday; std::cout << endl;
	std::cout << "Enter Month of registration of the reader\n";
	std::cin >> st.tm_mon; std::cout << endl;
	std::cout << "Enter Year of registration of the reader\n";
	std::cin >> st.tm_year; std::cout << endl;
}
void AddNewBook(...)
{
	Book st;
	std::cout << "Enter name of book\n";
	std::cin >> st.nameBook; std::cout << endl;
	std::cout << "Enter name of writer\n";
	std::cin >> st.nameWriter; std::cout << endl;
	std::cout << "Enter inventory number of book\n";
	std::cin >> st.inventoryNumber; std::cout << endl;
	std::cout << "Enter name of publishing house\n";
	std::cin >> st.publishingHouse; std::cout << endl;
	std::cout << "Enter publishing year\n";
	std::cin >> st.publishingYear; std::cout << endl;
	std::cout << "Enter book location number of rack\n";
	std::cin >> st.rackNumber; std::cout << endl;
	std::cout << "Enter book location number of shelf\n";
	std::cin >> st.shelfNumber; std::cout << endl;
}
void BookRegistrationDate(...)
{
	BookRegistrationDate st;
	std::cout << "Enter Day of registration of the book\n";
	std::cin >> st.book_day; std::cout << endl;
	std::cout << "Enter Month of registration of the book\n";
	std::cin >> st.book_mon; std::cout << endl;
	std::cout << "Enter Year of registration of the book\n";
	std::cin >> st.book_year; std::cout << endl;
}