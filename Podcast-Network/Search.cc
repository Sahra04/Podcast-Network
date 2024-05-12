#include "Search.h"





H_Search::H_Search(const string& h): host(h){}

C_Search:: C_Search(const string& c): category(c) {}

HorC_Search:: HorC_Search(const string& host, const string& category): H_Search(host), C_Search(category){

}


bool C_Search:: matches(const Episode* eps) const{
     bool x = false; 
    if(eps->getCategory() == category){
        x= true; 
    }
    return x; 

}

bool H_Search:: matches(const Episode* eps) const{
    bool x = false; 
    if(eps->getHost() == host){
        x= true; 
    }
    return x; 

}

void H_Search ::print(ostream& ost) const{
    ost << "Host Search: this episode matches with the given host " <<host<<endl; 
}


void C_Search:: print(ostream& ost) const{
    ost << "Category Search: this episode matches with the given category " <<category<< endl;
}


bool HorC_Search:: matches(const Episode* eps) const{
    return (H_Search::matches(eps) || C_Search:: matches(eps));

}
void  HorC_Search :: print(ostream& ost) const{
    H_Search::print(ost); 
    C_Search::print(ost);

}

ostream& operator<<(ostream& ost, const Search& s){
    s.print(ost);
    return ost;
}






