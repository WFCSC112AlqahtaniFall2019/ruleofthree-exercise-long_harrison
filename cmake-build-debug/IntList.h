//
// Created by Tao on 10/17/19.
//

#ifndef RULEOFTHREE_INTLIST_H
#define RULEOFTHREE_INTLIST_H

#endif //RULEOFTHREE_INTLIST_H
class IntList {

public:

    // constructor
    IntList ( int size = 0 , int initvalue = 0);

    // copy
    IntList ( const IntList & lis );

    // destructor
    ~ IntList ();

    // swap function
    void swap (int* a, int* b);

    // get size
    int getSize () const { return size_ ; }

    // copy assignment operator
    IntList&  operator =( const IntList& rhs );

private :

    int * list_ ; // list of values ( int )

    int size_ ;
};
