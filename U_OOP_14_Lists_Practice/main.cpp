#include "Library.h"

using std::cout;
using std::cin;
using std::endl;

template <typename T>
list<T> common_values(const list<T>& l1, const list<T>& l2);

int main()
{
	list<int> values1, values2;

	for (size_t i = 0; i < 10; i++)
	{
		values1.push_back(1 + rand() % 10);
		values2.push_back(1 + rand() % 10);
	}

	cout << "List #1: ";
	for (const auto& v : values1)
		cout << v << " ";

	cout << "\n\nList #2: ";
	for (const auto& v : values2)
		cout << v << " ";

	auto result = common_values(values1, values2);

	cout << "\n\nResult: ";
	for (const auto& v : result)
		cout << v << " ";

	/*Library lib;

	lib.add_book(Book("Harry Potter #1", "J.K.Rowling", 2001, 500));
	lib.add_book(Book("Harry Potter #2", "J.K.Rowling", 2001, 500));
	lib.add_book(Book("Christmas Stories", "Charles Dikkens", 1869, 835));
	lib.add_book(Book("C++ basics", "B.Straustrup", 2003, 1350));
	lib.add_book(Book("Verilog for dummies", "Hanna", 2000, 835));

	lib.display_books();

	lib.remove_book("C++ basics");

	cout << endl << endl;

	lib.display_books();

	cout << endl << endl;

	auto result = lib.search_books_by_author("J.K.Rowling");

	cout << "J.K.Rowling books:\n";
	for (const auto& b : result)
		cout << b.to_string() << endl << endl;

	cout << endl << endl << "Books sorted by names:\n";

	lib.sort_books_by_names();
	lib.display_books();

	cout << endl << endl << "Books sorted by year:\n";

	lib.sort_books_by_year();
	lib.display_books();*/
}

template <typename T>
list<T> common_values(const list<T>& l1, const list<T>& l2)
{
	list<T> com;

	for (const auto& v1 : l1)
	{
		for (const auto& v2 : l2)
		{
			if (v1 == v2)
			{
				if (std::find(com.begin(), com.end(), v1) == com.end())
					com.push_back(v1);
			}
		}
	}

	return com;
}