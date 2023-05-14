#pragma once
#include "Book.h"
#include <list>
#include <iostream>
#include <functional>
#include <vector>

using std::list;
using std::vector;
using std::cout;
using std::endl;

class Library
{
private:
	list<Book> _books;

public:
	void add_book(const Book& b)
	{
		_books.push_back(b);
	}

	void remove_book(const string& name)
	{
		_books.remove_if([&name](const Book& b) {return b.get_name() == name; });
	}

	void display_books()const
	{
		cout << "Books:" << endl;
		for (const auto& book : _books)
			cout << book.to_string() << endl << "**********" << endl;
	}

	vector<Book> search_books_by_author(const string& author)const
	{
		vector<Book> books_by_author;
		for (const auto& b : _books)
			if (b.get_author() == author)
				books_by_author.push_back(b);
		return books_by_author;
	}

	void sort_books_by_names()
	{
		_books.sort([](const Book& b1, const Book& b2) {return b1.get_name() < b2.get_name(); });
	}

	void sort_books_by_year()
	{
		_books.sort([](const Book& b1, const Book& b2) {return b1.get_year() < b2.get_year(); });
	}
};