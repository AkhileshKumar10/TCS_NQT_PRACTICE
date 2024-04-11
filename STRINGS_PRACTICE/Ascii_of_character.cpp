#include<iostream>
using namespace std;

class Ascii{
    public:
    void value( char character){ 
        //char character;
        cout<<"the ascii value of"<<character<<"is"<<int(character)<<endl;

    }
};
int main (){
    Ascii p1;
    char character;
    cout<<"enter the  character"<<endl;
    cin>>character;
    p1.value(character);
    return 0;
}
// Let me explain how the code works:

// 1. **Class Definition (Ascii):**
//    - The `Ascii` class is defined with a single public member function `value()`.
//    - This function takes a `char` parameter (`c`) representing the character whose ASCII value needs to be determined.

// 2. **value() Function:**
//    - The `value()` function within the `Ascii` class is defined to print the ASCII value of the character passed to it.
//    - Inside the function, it outputs a message indicating what it's doing, and then it prints the ASCII value of the character.

// 3. **Main Function:**
//    - In the `main()` function, an instance of the `Ascii` class (`p1`) is created.
//    - It prompts the user to input a character using `cin >> character;`.
//    - Then, it calls the `value()` function of the `p1` object and passes the entered character to it.
//    - The `value()` function then prints the ASCII value of the entered character.

// 4. **Passing Parameters:**
//    - In C++, you can pass parameters to member functions just like you pass parameters to regular functions.
//    - In this case, when you call `p1.value(character);`, you're passing the character entered by the user to the `value()` function of the `p1` object.
//    - This allows the `value()` function to operate on the character provided by the user.

// So, the `void value(char c)` function accepts a character as its parameter (`c`) and then prints the ASCII value of that character. The `main()` function prompts the user to input a character, and then it calls the `value()` function of the `Ascii` object (`p1`) passing the entered character to it. Finally, the ASCII value of the entered character is printed.