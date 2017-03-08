//James Floretta
//Date: 3/7/2017
//Using a book class to store and display information using mutators and accessors.

#include <string>
#include <iostream>
using namespace std;


class Book { // class name
    private:
        int CopyRightYear; // data field
        string BookAuthor;
        string BookTitle;
    
   public:
      
        void SetCopyRightYear(int year); // members
        
        int GetCopyRightYear(); 
       
       
        void SetBookAuthor(string name);
        
        string GetBookAuthor(); 
       

        void SetBookTitle(string title);
        
        string GetBookTitle(); 
        
        void print() { // print function
            cout<<"Copy right year: " << CopyRightYear << endl;
            cout<<"Author: " << BookAuthor << endl;
            cout <<"Title: " << BookTitle << endl;
        }

};


void Book::SetCopyRightYear(int year) {
    CopyRightYear = year;    
    return;
}

void Book::SetBookAuthor(string name) {
    BookAuthor = name;
    return;
    
}

void Book::SetBookTitle(string title) {
    BookTitle = title;
    return;
    
}
//accessing the private variables
int Book::GetCopyRightYear() { 
    return CopyRightYear;
}

string Book::GetBookAuthor(){
    return BookAuthor;
}

string Book::GetBookTitle(){
    return BookTitle;
}


int main () {
    Book BookInfo1; // 5 book objects
    Book BookInfo2;
    Book BookInfo3;
    Book BookInfo4;
    Book BookInfo5;
    
    //Object information
    BookInfo1.SetCopyRightYear(1991);
    BookInfo1.SetBookAuthor("John Doe");
    BookInfo1.SetBookTitle("Computer Programming");
    BookInfo1.print();
    
    BookInfo2.SetCopyRightYear(1992);
    BookInfo2.SetBookAuthor("John Smith");
    BookInfo2.SetBookTitle("Computer Programming2");
    BookInfo2.print();
    
    BookInfo3.SetCopyRightYear(1993);
    BookInfo3.SetBookAuthor("John Jane");
    BookInfo3.SetBookTitle("Computer Programming3");
    BookInfo3.print();
    
    BookInfo4.SetCopyRightYear(1994);
    BookInfo4.SetBookAuthor("John Jayce");
    BookInfo4.SetBookTitle("Computer Programming4");
    BookInfo4.print();
    
    BookInfo5.SetCopyRightYear(1995);
    BookInfo5.SetBookAuthor("John Jackson");
    BookInfo5.SetBookTitle("Computer Programming5");
    BookInfo5.print();
    
}
