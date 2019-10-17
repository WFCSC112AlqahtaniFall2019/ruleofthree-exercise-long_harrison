//
// Created by Tao on 10/17/19.
//
#include <iostream>
using namespace std;
#include "IntList.h"

void swap (int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

/*
//1) write a definition for the destructor
IntList :: ~IntList(){
    cout << "Destructor Calls" << endl;
    delete list_;
}

IntList::IntList ( int size  , int initvalue) {
    if( size > 0){
        list_ = new int[ size ];
        size_ = size ;
        for( int i = 0; i < size_ ; i ++)
            list_ [i] = initvalue ;
    }
    else {
        list_ = 0;
        size_ = 0;
    }
}

//2) fix the copy constructor
IntList :: IntList ( const IntList & L ){
    cout << "Copy Constructor Calls" << endl;
    //list_ = L . list_ ;
    size_ = L . size_ ;
    list_ = new int;
    *list_ = *(L.list_);
    //size_ = new int;
    //*size_ = *(L.size_);
}

//3) rewrite the copy assignment operator using an optimized method
IntList& IntList:: operator =( const IntList& rhs ) {
    for ( int i = 0; i < rhs . size_ ; i ++){
        swap (this -> list_, &rhs . list_[i] );
    }
    return *this;
}*/
