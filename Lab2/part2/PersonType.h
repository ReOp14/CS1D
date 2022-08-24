//inherit2.h header file for the PersonType class
#ifndef H_PersonType
#define H_PersonType
#include <string>
using namespace std;

/** \class Person Type Class
 * @brief The base personType class
 * Descriptive Comment.
 */
class personType
{
    public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName
    /**\fn Person type function
    * this is me commenting on void setName
    /*/
    void setName(string first, string last);
    //Function to set firstName and lastName according to
    //the parameters
    //Post: firstName = first; lastName = last;
    void getName(string& first, string& last);
    //Function to return firstName and lastName via the parameters
    //Post: first = firstName; last = lastName;
    personType(string first, string last);
    //Constructor with parameters
    //Set firstName and lastName according to the parameters
    //Post: firstName = first; lastName = last;
    personType();
    //Default constructor;
    //Intialize firstName and lastName to empty string
    //Post: firstName = ""; lastName = "";
    private:
    string firstName; //store the first name
    /**\var
    * this variable is pretty cool
    /*/
    string lastName; //store the last name
    /**\var
    * this variable is not as cool
    /*/
};
#endif