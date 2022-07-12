#ifndef DY_H
#define DY_H
#include<string>
#include "BookStore.h"

using namespace std;

class Dymocks : public BookStore
{
    public:
        Dymocks() ;           // Uses the default constructor of parent
        Dymocks(bool o) ;      // sets isOnline attribute with o
                                // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                                // and address equal to the empty string
        int storeID;          // unique store ID
        bool isOnline;       // class attribute


        static int nextNumStores;




    void set_nextNumStores(int ne);
        void set_isOnline(bool is);
        void set_storeID(int st);

        int get_nextNumStores();
        bool get_isOnline();
        int get_storeID();


        ~Dymocks();



};

#endif