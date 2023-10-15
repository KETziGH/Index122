#include "libraries.h"

class Book {
    protected:
        string Title;
        string authorName;

    public:
        void setTitle(string Title);
        string getTitle();
        void setauthorName(string authorName);
        string getauthorName();
        Book(string Title, string authorName);
        void printDescription();
        ~Book();
 
};