/*
 
 
 
 Playing with strings
 
 
 
 Input Format
 
 You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').
 
 Output Format
 
 In the first line print two space-separated integers, representing the length of a and b respectively.
 
 In the second line print the string produced by concatenating a and b (a+b).
 
 In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped.
 
 ------------------
 
 I really liked the last exercise. I had to tweak my for loops a few times for it to work o__0
 
 // Updated to clean up a bit
 
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string a,b;
    
    cin >> a >> b;

    cout << a.length() << " " << b.length() << endl;
    
    cout << a + b << endl;
    
    cout << b[0];
    
    for (int i=1; i <= a.length(); i++) {
        cout << a[i];
    }
    
    cout << " ";
    
    cout << a[0];
    
    for (int j=1; j <= b.length(); j++) {
        cout << b[j];
    }
  
    return 0;
    
}
