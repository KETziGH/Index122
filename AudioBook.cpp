#include "AudioBook.h"



string AudioBook::getvoiceActor()
{
    return this->voiceActor;
}

AudioBook::AudioBook(string Title, string authorName, string voiceActor):Book(Title,authorName)
{
    this->voiceActor=voiceActor;
}

void AudioBook::printADiscription()
{
    cout << this->Title << " was written by " << this->authorName << " and Voiced by" << this->voiceActor <<endl;
}



AudioBook::~AudioBook()
{

}