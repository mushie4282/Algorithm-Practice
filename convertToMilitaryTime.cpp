/**
* @brief Given a string in 12-hour format, create a function that will return a new string in military time format
* @data 2022-09-10
**/
#include <iostream> 
#include <cstring>

using namespace std;

string twentyFourHourTime(string s);

int main()
{
    string s = "12:15:00AM";

    string newTimeString;
    newTimeString = twentyFourHourTime(s);

    cout << "After: "; 
    cout << newTimeString;
    return 0; 
}


/** 
 * This function description was written by Mintlify Doc Writer for Python, JavaScript, TypeScript, C++, PHP, Java, C#, Ruby & more
 * (VSCode extension)
 *
 * If the time is AM, then we check if it is 12 AM. If it is, then we change it to 00 and return the
 * new time. If it is not 12 AM, then we return the time without changing it. If the time is PM, then
 * we check if it is 12 PM. If it is, then we return the time without changing it. If it is not 12 PM,
 * then we add 12 to the hour and return the new time
 * 
 * @param s a string representing time in 12-hour format.
 * 
 * @return a string represetning time in military time format.
 */
string twentyFourHourTime(string s)
{
    int size = s.length();

    // copy substring starting at index 0 and copying the next 2 characters
    string hh = s.substr(0,2);
    // string to int function used to convert the substring into an int
    int h = stoi(hh);

    // AM cases
    if(s[size-2]=='A')
    {
        // checking if it is 12 AM
        if(h == 12)
        {
            string newh = "00";
            // adding to the string using substring function starting at index 2 and copying the next 6 char
            string newTime = newh.append(s.substr(2,6));
            return newTime;
        }
        else
        {
            // return the string without changing and removing the letters at the end
            return s.substr(0,size-2);
        } 
    } 
    else // PM Cases
    {
        // this case ensures that the time will not return 24 if it is 12 PM
        if(h == 12)
        {   
            // return the string without changing and removing the letters at the end
            return s.substr(0,size-2);
        }
        // cases that are not 12 PM
        int inPM = h + 12;
        // converting integer into string
        string newh = to_string(inPM);
        // adding to the string using substring function starting at index 2 and copying the next 6 char
        string newTime = newh.append(s.substr(2,6));
        return newTime;
    }
}
