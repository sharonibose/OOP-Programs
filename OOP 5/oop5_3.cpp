/*3. Create a class which stores name, author and price of a book. 
Store information for n number of books. Display information of all the books in a given price range using friend function. */

#include<iostream>
using namespace std;

class Book
{
    private:
        string bookName, authorName;
        float bookPrice;
    public:
        void inputDetails();
        void displayDetails();
        friend void displayBooksInRange(Book,float,float);
};

void Book::inputDetails()
{
    cout<<"\nEnter the Name of the Book: ";
    getchar();
    getline(cin, bookName);
    cout<<"\nEnter the Author of the Book: ";
    getline(cin, authorName);
    cout<<"\nEnter the Price of the Book: ";
    cin>>bookPrice;
}

void Book::displayDetails()
{
    cout<<"\nName of the Book: "<<bookName<<endl;
    cout<<"Author of the Book: "<<authorName<<endl;
    cout<<"Price of the Book: "<<bookPrice<<endl;
}

void displayBooksInRange(Book obj, float lowerPriceLimit, float upperPriceLimit)
{
    if( (obj.bookPrice>=lowerPriceLimit) && (obj.bookPrice<=upperPriceLimit))
    {
        cout<<"\nBook: "<<obj.bookName;
        cout<<"\nAuthor: "<<obj.authorName;
        cout<<"\nPrice: "<<obj.bookPrice;
        cout<<"\n";
    }
}

int main()
{
    int i, n;
    float lowerPriceLimit, upperPriceLimit;
    cout<<"Enter the number of books: ";
    cin>>n;
    
    Book obj[n];
    cout<<"\n";
    
    for(i=0;i<n;i++)
    {
        obj[i].inputDetails(); 
    }
    
    cout<<"\n\nDetails of the book: \n";
    for(i=0;i<n;i++)
    {
        obj[i].displayDetails(); 
    }
    
    cout<<"Enter the Lower Price Limit: ";
    cin>>lowerPriceLimit;
    
    cout<<"Enter the Upper Price Limit: ";
    cin>>upperPriceLimit;
    
    cout<<"\nBooks in the given range: \n";
    for(i=0;i<n;i++)
    {
        displayBooksInRange(obj[i], lowerPriceLimit, upperPriceLimit);
    }
    
    return 0;
}