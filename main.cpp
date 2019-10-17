#include <iostream>
using namespace std;

class IntList {
public:
    IntList ( int size = 0 , int initvalue = 0);
    IntList ( const IntList & lis );
    ~ IntList ();
    int getSize () const { return size_ ; }
    IntList&  operator =( const IntList& rhs );
    //IntList & operator =( const IntList & rhs );
private :
    int * list_ ; // list of values ( int )
    int size_ ;
};
void swap (int* a, int* b);

int main(){

    IntList L1 (5,0);
    //4- declare L2 and make that l2=l1 is properly working
    IntList L2 (L1);
    L2 = L1;

    return 0;
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

//1) write a definition for the destructor
IntList :: ~IntList(){
    cout << "Destructor Calls" << endl;
    delete list_;
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
//IntList& IntList:: operator =( const IntList & rhs ){
 IntList& IntList:: operator =( const IntList& rhs ) {

    for ( int i = 0; i < rhs . size_ ; i ++){
        swap (this -> list_, &rhs . list_[i] );
    }
    return *this;
}
    /*if( list_ )
        delete [] list_ ;
    size_ = rhs . size_ ;
    if( rhs . size_ > 0){
        list_ = new int [ rhs . size_ ];
        for ( int i = 0; i < rhs . size_ ; i ++)
            list_ [ i ] = rhs . list_ [ i ];
    }
    else
        list_ = 0;

return *this;
}*/


