#pragma once
#include <iostream>
#include <string>

using std::string;

class Book
{
private:
	string _name{ "" }, _author{ "" };
	int _year{ 0 }, _pages{ 0 };

public:
	Book() {}
	Book(string name, string author, int year, int pages)
		:_name(name), _author(author), _year(year), _pages(pages)
	{}

	const string& get_name()const { return _name; }
	const string& get_author()const { return _author; }
	int get_year()const { return _year; }
	int get_pages()const { return _pages; }

	void set_name(const string& name) { _name = name; }
	void set_author(const string& author) { _author = author; }
	void set_year(int year) { _year = year; }
	void set_pages(int pages) { _pages = pages; }

	string to_string()const
	{
		string info = "";
		info += "Book " + _name + "\n";
		info += "Author: " + _author + "\n";
		info += "Year: " + std::to_string(_year) + "\n";
		info += "Count of pages: " + std::to_string(_pages);
		return info;
	}
};