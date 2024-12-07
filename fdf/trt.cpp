#include <fstream>

int main(){
std::fstream file("input.txt");
std::string data;
file >> data;
std::cout <<data<<"/n";
}
