#include "Book.h"

string Book::getTitle()
{
    return this->Title;
}

string Book::getauthorName()
{
    return this->authorName;
}

Book::Book(string Title, string authorName)
{
    this->Title=Title;
    this->authorName=authorName;
}

void Book::printDescription()
{
    cout <<this->Title <<" was written by "<< this->authorName <<  endl;
}

Book::~Book()
{

}