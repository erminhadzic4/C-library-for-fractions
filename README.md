# C-library-for-fractions
C/C++ library for fractions.

## /Short description/ ##

  This repository contains a C++ header file that works with fractions. Variables, functions and other changeable names are written in Bosnian language.
  Besides the main header file, I made a small main function, containing only 4 lines of code
  which are surprisingly only "calls" of other functions for the user to actually see and experience what the library can do. Please do not focus on the console
  that opens after compiling because it is just not the focus of the whole project - it is there to only visualize the main capabilites of the library - hence use the 
  header file (include it) if you need to work with fractions (remember to not include it as a standard library). 

  For everyone compiling the project and wanting to see the console - try to set the console to 120x30 (width and height) so the text can fit the screen nicely.
  Someone would argue that I should have used **iomanip** library for nice text formatting, but as I said - I did "enough" formatting so that it's readable, everyone
  who needs the library will use the header only.
  
## /Functions/
  
  | Function | Description |
  | --- | --- |
  | **object.pretvori_u_realni()** | Prints the object fraction in real number format. |
  | **object.pretvori_u_mjesoviti()** | Prints the object fraction in mixed fraction format. |
  | **object.pravilan()** | Returns the true or false whether the fraction is perfect or not. |
  | **object.decimalni()** | Returns the decimal value of the object. | 
  | **int Razlomci::najveciZS(int a, int b)** | Returns LCM - least common multiple.  |
  | **int Razlomci::dodjela_vrijednosti(int brojnik, int nazivnik)** | Adds the values for the fraction. Used in constructor. |
  | **Razlomci()** | Main constructor that uses above function. | 
  | **Razlomci &operator=(const Razlomci &desno)** |  Returns dereferenced "this" object of initialization. |
  
## /Operations/

  | Operator | Description |
  | --- | --- |
  | + | Sums two fractions. |
  | - | Substracts second fraction from the first. |
  | * | Multiplies the fractions. |
  | / | Divides the two fractions. | 
  | -- | Decrement the fraction by 1 (both numerator and denominator).  |
  | ++ | Increment the fraction by 1 (both numerator and denominator). |
  | += | Adds the second fraction to the first fraction. | 
  |\*= | Multiplies the fractions and adds to the first one. |
  | -= | Subtracts the second fraction from the first. |
  | == | Compares for equality. |   
  | != | Compares for inequality. |
  | > | Compares for greater than. |
  | < | Compares for less than. |
  | >= | Compares for greater than or equal. |   
  | <= | Compares for less than or equal. |     
  | >> | Overloaded istream operator for inputting. |    
  | >> | Overloaded ostream operator for printing. |   
  
