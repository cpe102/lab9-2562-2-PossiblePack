//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    double count=0;
    double sum=0, powx=0, deviation, mean;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        powx += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count;
    deviation = sqrt((powx/count)-pow(mean,2));
    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << deviation;
    source.close();
    return 0;
}