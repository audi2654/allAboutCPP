//reference, copy constr continued

#include <iostream>

class podcast{
    std::string channelname;
    std::string host;
    int duration;

    public:

    podcast(std::string cname, std::string host, int dur);
    podcast(const podcast& obj);
    podcast dispDetails(podcast &objRef);
};

podcast::podcast(std::string cname, std::string host, int dur){
    this->channelname = cname;
    this->host = host;
    this->duration = dur;

    std::cout << "Para constr\n";
}

podcast::podcast(const podcast& obj){
    std::cout << "Copy Constr\n";
}

podcast podcast::dispDetails(podcast &objRef){
    return objRef;
}

int main(){
    podcast obj1("BB Vines", "BB", 2);

    podcast obj2(obj1);
    podcast obj3 = obj1;

    podcast obj4 = obj3.dispDetails(obj2);   //gives error here if const is not written in Copy Constr

    return 0;
}