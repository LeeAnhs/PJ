#include <stdbool.h>
struct Date{
	int month,day,year;
};

struct Book{
	int bookId[10];
	char title[30];
	char author[20];
	int price;
	int quantity;
	struct Date publication; 	
};

struct member{
	char memberId[10];
	char name[20];
	char phone[10];
	bool status;
	struct Book BorrowedBooks[];
};
