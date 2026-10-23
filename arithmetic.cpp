#include<iostream>
// opperators  *,/,-,+,--,++ etc.
//implicit is automatic explicit is manual using (datatype)
int main(){
    int student=7;
    double y = 1.234;
    student+=1;
    student++;
    std::cout<<student<<'\n';
    y=(int)y;
    std::cout<<y;
    return 0;
}