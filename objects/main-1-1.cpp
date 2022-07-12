#include<iostream>
#include "BookStore.h"

using namespace std;


int main()
{
    BookStore *book1, *book2;

    book1 = new BookStore("Harry", "d23",3);
    book2 = new BookStore("adventure", "d25",10);

    book1->set_name("H Potter");
     book1->set_numBook(3);

}