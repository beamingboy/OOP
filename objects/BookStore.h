#ifndef BOOK_H
#define BOOK_H
#include<string>

using namespace std;

class BookStore
{
    public:
        BookStore();
        BookStore(string n, string a, int b) ;           // creates a BookStore name n, address a, and number of books in the store b



        void set_name(string na);
        void set_address(string ad);
        void set_numBook(int nb);

        string get_name();
        string get_address();
        int get_numBook();
        virtual float get_onlineTax();

                                        // returns true if more staff is necessary
        string name;                                    // the book store name
        string address;                                 // the book store address
        int numBook;                                     // the inventory in the store; takes only non-negative values
       private:
        float onlineTax;

     public:
        ~BookStore();



};

#endif