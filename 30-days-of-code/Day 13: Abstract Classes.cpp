/* 
Problem statement :
https://www.hackerrank.com/challenges/30-abstract-classes/problem
*/


// Write your MyBook class here
class MyBook: public Book {
    public:
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    int price;
    MyBook(string title, string author, int prices) : Book(title, author) {
            price = prices;
        }

    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display() override {
        cout << "Title: " << title << endl << "Author: " << author << endl << "Price: " << price;
    }
};
// End class
