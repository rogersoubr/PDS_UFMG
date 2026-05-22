//programa que adiciona um novo usuário
#include <iostream>
#include <fstream>
#include <string>

class User
{
private:
    std::string getUsertype;
public:
    User(std::string getUsertype) ;//construtor
    ~User();//destrutor
};

User::User(){}//construtor

User::~User() {}//desctutor
