#pragma once
#include <string>
#include <iostream>
class Book{
public:
  Book() {
        year = -700;
        title = "Illiad";
        author = "Homer";
    }


    Book(int initialYear, std::string initialTitle, std::string initialAuthor) {
        this->year = initialYear;
        this->title = initialTitle;
        this->author = initialAuthor;

    }


    int getYear() {
        return year;
    }

    void setYear(int newYear) {
        this->year = newYear;
    }
    std::string getAuthor() {
        return author;
    }

    void setAuthor(std::string newAuthor) {
        this->author = newAuthor;
    }
    std::string getTitle() {
        return title;
    }

    void setTitle(std::string newTitle) {
        this->title = newTitle;
    }
    void printInfo(){
      std::cout << "Year: " << getYear() << std::endl;
      std::cout << "Author: " << getAuthor() << std::endl;
      std::cout << "Title: " << getTitle() << std::endl;

    }
private:
  int year;
private:
  std::string title;
private:
  std::string author;
};
