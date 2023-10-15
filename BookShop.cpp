#include "BookShop.h"

Book *tempBook;
AudioBook *tempAbook;

BookShop::BookShop(string Title, string authorName, string voiceActor, int noOfBooksAdded)
{
    this->noOfBooksAdded=noOfBooksAdded;
}

Book BookShop::addBook(string Title, string authorName)
{
    tempBook = new Book();

    return *tempBook;
}

AudioBook BookShop::addBook(string Title, string authorName , String voiceActor)
{
    tempAbook = new Book();

    return *tempAbook;
}

int arraySize;
BookShop *bookCollection=static_cast<BookShop*>(malloc(arraySize*sizeof(BookShop)));



BookShop::~BookShop()
{

}