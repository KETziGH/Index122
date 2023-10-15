#include "Book.h"

class AudioBook : public Book
{
    protected:
        string voiceActor;

    public:
        void setvoiceActor(string voiceActor);
        string getvoiceActor();
        AudioBook(string Title, string authorName, string voiceActor);
        void printADiscription();
        ~AudioBook();
};