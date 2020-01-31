#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]:";
		cin >> grade;
		if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='F'||grade=='0'){
			if(grade=='A'){
				count[0] = count[0]+1;
			}if(grade=='B') {
				count[1] = count[1]+1;
			}if(grade=='C'){
				count[2] = count[2]+1;
			}if(grade=='D'){
				count[3] = count[3]+1;
			}if(grade=='F'){
				count[4] = count[4]+1;
			}
			i++;
	}else{
		cout << "Please input again.\n";
	}
	}while(grade!='0');
	
	i = i-1;
	cout << "In total " << i-1 << " students.\n ";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";	
	}
