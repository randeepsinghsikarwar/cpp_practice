#include<iostream>
// #include <cstring>
// #include<sstream>
#include<string>
using namespace std;
 
//liabraries 
 
// please run the program and describe the task of each function and the type of call 
int add(double x, double y);
double add(float x, float y);
string add(string x, string y);
 
void add(string& x, string y, string s);
void read(double& tuition1, double& tuition2,
float& final, float& midterm, string& firstName, string& lastName, string& x, string& y);
void display (double tuition1, double tuition2, double totalFee, float final, float midterm, float totalG, string firstName, string lastName, string fullName, string x, string y);
 
//Main function 
int main() {
    
double tuition1, tuition2, totalFee=0;
float final, midterm, totalG;
string firstName, lastName, fullName, address;
string x , y ;
 
read(tuition1, tuition2, final, midterm, firstName, lastName, x, y);
system("cls");      //this line is optional. its basically clearing the terminal. 
    fullName = add(firstName,lastName);
    totalFee = add(tuition1, tuition2);
    totalG = add(final, midterm);
    add(x,y,"");
    display(tuition1, tuition2, totalFee, final, midterm, totalG, firstName, lastName,fullName, x,y);
    
}
void read(double& tuition1, double& tuition2, float& final, float& midterm, string& firstName, 
string& lastName, string &x, string &y) {
 
cout << "First name :" ;
cin >> firstName;
cout << "\nLast name : ";
cin >> lastName;
cout << "\ntuition1 : ";
cin >> tuition1;
cout << "\ntuition2 : ";
cin >> tuition2;
cout << "\nMidterm exam : ";
cin >> midterm;
cout << "\n final exam : ";
cin >> final;
cout << "\n City name : ";
cin >> x;
cout << "\n country : ";
cin >> y;
 
}
void display (double tuition1, double tuition2, double totalFee, float final, float midterm, float totalG, string firstName, string lastName, string fullName, string x, string y){
 
 
cout << "\n _________________________________________________________________\n";

cout  << "\n First name= " << firstName << "  Last name = " << lastName << " full name: " << fullName;
cout  << "\n _________________________________________________________________\n";
 
cout << "\n Midterm exam= " << midterm << "  final exam = " << final << " Total grade= " << add(final, midterm);
cout << "\n Total fee = "<<totalFee;

cout << "\n Full location = "<<x;
cout  << "\n _________________________________________________________________";

}
int add(double x, double y) {
return x + y;
}
double add(float x, float y) {
double total = x + y;
return total;
}
string add(string x, string y) {

return x.append(" "+y);
}
void add(string &x, string y, string s) {
x=x+s+ y;
return  ;
}
