#pragma once
#ifndef UI_library_H
#define UI_library_H
#include <vector>
#include <iostream>
#include <ctime>

namespace UI_library {

	struct Reader
	{
		char name[255];
		char secondName[255];
		char surname[255];
		int passNumber;
		int libraryCartNumber;
		long telefonNumber;
		char registrationAddress;
	};
	struct ReaderRegistrationDate
	{
		int tm_mday;  // day of month from 1 to 31
		int tm_mon;   // month of year from 0 to 11
		int tm_year;  // year since 1900
	};
	struct Book
	{
		char nameBook[255];
		char nameWriter[255];
		int inventoryNumber;
		char publishingHouse[255];
		int publishingYear;
		int rackNumber;
		int shelfNumber;
	};

	struct BookRegistrationDate
	{
		int book_day;  // day of month from 1 to 31
		int book_mon;   // month of year from 0 to 11
		int book_year;  // year since 1900
	};

	
}

#endif // !HEADER_H#pragma once