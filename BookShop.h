#include "AudioBook.h"

class BookShop
{
    protected:
        string bookCollection;
        int noOfBooksAdded;

    public:
        BookShop(string Title, string authorName, string voiceActor, int noOfBooksAdded);
        Book addBook(string Title, string authorName);
        AudioBook addBook(string Title, string authorName, string voiceActor);
        ~BookShop();


};