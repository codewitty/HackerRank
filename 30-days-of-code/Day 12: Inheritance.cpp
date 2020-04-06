#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int identification, vector<int> score) : Person(firstName, lastName, identification) {
            testScores = score;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate() {
            char res;
            int final = 0;
            for (int i = 0; i < testScores.size(); ++i) {
                final += testScores[i];
            }
            final = final / testScores.size();

            if (final >= 90 )
                res = 'O';
            else if (final >= 80 && final < 90)
                res = 'E';
            else if (final >= 70 && final < 80)
                res = 'A';
            else if (final >= 55 && final < 70)
                res = 'P';
            else if (final >= 40 && final < 55)
                res = 'D';
            else 
                res = 'T';
            return res;
            }
};

int main() {
