#include <iostream>
#include<string>
using namespace std;

int main(){
    string nameuser,id,namemovie,date,brabra;
    double sum;


    cout << "Fahsai: Sawadee ka...Can you tell me your name?" <<endl ;
    cout <<"?????: ";
    getline(cin,nameuser);
    cout << "Fahsai: Wow!!! " <<nameuser <<" is a really cool name." <<endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" <<endl;
    cout <<nameuser <<": " ;
    cin >> id;
    cin.ignore();
    sum = (int((id[0]-48)*10)+int(id[1]-48))-12 ;
    cout <<"Fahsai: I think you may be GEAR "<<sum <<"." <<" I have a free movie ticket for you." <<endl;
    cout <<"Fahsai: Let's go to the cinema together!!!" <<endl;
    cout<<"Fahsai: What movie do you want to watch?" <<endl;
    cout <<nameuser <<": " ;
    getline(cin,namemovie);

    cout <<"Fahsai: So....which day are you free to go with me?" <<endl;
    cout <<nameuser <<": " ;
    getline(cin,date);

    cout <<"Fahsai: "<<date <<"....that is OK!!! I'm looking forward to watching " <<namemovie <<" with you." <<endl;
    cout <<nameuser <<": " ; 
    getline(cin,brabra) ;

    cout <<"Fahsai: 555+ see you " <<date <<"."<<" Bye Bye \\(^ ^)/";





}