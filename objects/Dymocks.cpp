#include<iostream>
#include "BookStore.h"
#include "Dymocks.h"

using namespace std;

//Dymocks:: nextNumStores = 0;

Dymocks::Dymocks()
{
    storeID=0;
    nextNumStores=0;
    isOnline = 0;

}

Dymocks::Dymocks(bool o):BookStore("Dymocks","?", 1000)
{


}

void Dymocks::set_nextNumStores(int ne)
{

    nextNumStores =ne;

}

void Dymocks::set_isOnline(bool is)
{

    isOnline = is;
}

void Dymocks::set_storeID(int st)
{
    storeID = st;

}


int Dymocks::get_nextNumStores()
{
    return nextNumStores;
}

bool Dymocks::get_isOnline()
{
    return isOnline;

}

int Dymocks:: get_storeID()

{

    return storeID;
}

Dymocks::~Dymocks()
{


}