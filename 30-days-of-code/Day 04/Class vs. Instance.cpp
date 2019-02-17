#include <iostream>

using namespace std;


class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge > 0) {
            age = initialAge;
        } 
        else {
            age = 0;
            cout << "Age is not valid, setting age to 0.\n";
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (age < 13) {
            cout << "You are young.\n";
        }
        else if ( age >= 13 && age < 18) {
            cout << "You are a teenager.\n";
        }
        else {
            cout << "You are old.\n";
        }

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age += 1;

    }

int main(){
