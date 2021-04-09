#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
#include<time.h>

using namespace std;




int main(int argc, char** argv) {
	string name;
	int age;
	int num;
	int ran;
	int easy=1;
	
	
	
	cout<<"enter your name: "<<endl;
	cin>>name;
	
	cout<<"enter your age: "<<endl;
	cin>>age;
	
	//easy
	if(age>=10 && age<=20){
		cout<<"Hey there! "<<name<<" ,you're in the easiest level."<<endl;
		cout<<"Guess the number, you have 7 guesses. Choose a number smaller than 10"<<endl;
		ran=rand()%10;
		
		
		while(easy<=7){
			if(num==ran){
				cin>>num;
				cout<<"CONGRATULATIONS!! YOU WON!!"<<endl;
				easy=7;
				break;
			
			}
			else if(num>ran){
				cin>>num;
				cout<<"much greater, try again. "<<7-easy<<" Tries left!!"<<endl;
				easy++;
				}
				
				else if(num<ran){
					cin>>num;
				cout<<"much smaller, try again. "<<7-easy<<" Tries left!!"<<endl;
				easy++;
				}
				
		}
		if(easy>=7){
			cout<<"GAME OVER!!";
		}
		
		
		
	}
	
	
	//Medium
	else if(age>=20 && age<=25){
		cout<<"Hey there! "<<name<<" ,you're in the Medium level."<<endl;
		cout<<endl;
		cout<<"Guess the number, you have 5 guesses. Choose a number smaller than 25"<<endl;
		ran=rand()%25;
		
		
		while(easy<=5){
			if(num==ran){
				cin>>num;
				cout<<"CONGRATULATIONS!! YOU WON!!"<<endl;
				easy=5;
				break;
			
			}
			else if(num>ran){
				cin>>num;
				cout<<"much greater, try again. "<<5-easy<<" Tries left!!"<<endl;
				easy++;
				}
				
				else if(num<ran){
					cin>>num;
				cout<<"much smaller, try again. "<<5-easy<<" Tries left!!"<<endl;
				easy++;
				}
				
		}
		if(easy>=5){
			cout<<"GAME OVER!!";
		}
	}
	
	
	//Hard
	
	else if(age>25){
		
			cout<<"Hey there! "<<name<<" ,you're in the Hardest level."<<endl;
		cout<<endl;
		cout<<"Guess the number, you have 3 guesses. Choose a number smaller than 50"<<endl;
		ran=rand()%50;
		
		
		while(easy<=3){
			if(num==ran){
				cin>>num;
				cout<<"CONGRATULATIONS!! YOU WON!!"<<endl;
				easy=3;
				break;
			
			}
			else if(num>ran){
				cin>>num;
				cout<<"much greater, try again. "<<3-easy<<" Tries left!!"<<endl;
				easy++;
				}
				
				else if(num<ran){
					cin>>num;
				cout<<"much smaller, try again. "<<3-easy<<" Tries left!!"<<endl;
				easy++;
				}
				
		}
		if(easy>=3){
			cout<<"GAME OVER!!";
		}
	}
	return 0;
}