#include<iostream>
//cin >>(extraction opperator)
//for text with spaces use getline
//std::ws removes the default white spaces or you can use ignore function
int main(){
    std::string name;
    std::string fullname;
    std::cout<<"whats your name? :";
    std::cin>>name;
    std::cout<<"what is your fullname? :";
    //std::cin.ignore();
    std::getline(std::cin>>std::ws, fullname);
    std::cout<<"hi "<<name<<'\n';
    std::cout<<"greetings "<<fullname;
    return 0;

}