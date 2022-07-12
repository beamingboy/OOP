#include<iostream>
#include "BookStore.h"

using namespace std;

BookStore::BookStore()

{
    name = "?";
    address = "?";
    numBook = 0;
}

BookStore::BookStore(string n, string a, int b)

{
  name= n;
  address = a;
  numBook=b;
}

void BookStore::set_name(string na)
{
    name= na;
}

void BookStore::set_address(string ad)
{
    address=ad;
}

void BookStore::set_numBook(int nb)
{
    numBook=nb;
}

// get functions

string BookStore::get_name()
{
    return name;
}

string BookStore::get_address()
{
    return address;

}

int BookStore::get_numBook()
{
    return numBook;
}

// may have to add virtual
float BookStore::get_onlineTax()
{
    return onlineTax;
}

BookStore:: ~BookStore()
{

}


