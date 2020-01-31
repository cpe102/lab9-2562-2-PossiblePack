//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream cheerbook("cheerbook.txt");
    ofstream cheerbook_coppy("cheerbook_coppy.txt");

    cheerbook_coppy << "-------------------- SOTUS ---------------------\n";
    string textline;
    while(getline(cheerbook,textline)){
        cheerbook_coppy << textline << endl;
    }
    cheerbook_coppy <<"-------------------- SOTUS ---------------------";

    return 0;
}