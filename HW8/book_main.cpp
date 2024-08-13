#include <iostream>
#include "book.h"
 int main(){
   Book book;
   Book book_1;
   book.printInfo();
   book.setTitle("LoTR");
   book.setYear(1955);
   book.setAuthor("J.R.R.Tolkien");
   book.printInfo();
   book_1.printInfo();
   return 0;
 }
