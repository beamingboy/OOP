#include<iostream>
#include "BookStore.h"
#include "Dymocks.h"

using namespace std;


int main()
{
    Dymocks *book1, *book2;

    book1 = new Dymocks(1);
    book2 = new Dymocks(0);

    book1->set_storeID(25);
    book1->set_nextNumStores(3);

}