#pragma once
#ifndef Model_library_H
#define Model_library_H
#include <vector>
#include <iostream>
#include <ctime>

namespace Model_library {

	struct Reader
	{
		char name[255];
		char secondName[255];
		char surname[255];
		int ReaderID;
		long telefonNumber;
		char registrationAddress[255];

	};
	struct Writer
	{
		char name[255];
		char secondName[255];
		char surname[255];
		int birthYear;
		int WriterID;
	};
	struct Book
	{
		char nameBook[255];
		int WriterID;
		int BookID;
		char publishingHouse[255];
		int publishingYear;
		int rackNumber;
		int shelfNumber;
	};

	struct Abonement
	{
		int BookID;
		int ReaderID;
		int dat‡Issue;
		int termIssue;
	};


}

#endif // !HEADER_H#pragma once