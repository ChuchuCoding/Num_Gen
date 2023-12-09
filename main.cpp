//##########################################################################
// Developer: ChuchuCoding - BScIT (C,C#,C++,py,PHP,java,Rudy,Ada)....... ##
// Social -: Github:( @ChuchuCoding ) telegram:( t.me/@ChuchuCoding ).....##
//##########################################################################

#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include <regex>

std::string generatePhoneNumber(int country_code, int area_code) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 9);

    std::string phone_number = "+" + std::to_string(country_code) + std::to_string(area_code);

    for (int i = 0; i < 7; ++i) {
        phone_number += std::to_string(dis(gen));
    }

    return phone_number;
}

bool validatePhoneNumber(const std::string& phone_number) {
    std::regex pattern("^\\+\\d{1,3}\\d{1,3}\\d{7}$");
    return std::regex_match(phone_number, pattern);
}

using namespace std;

//######################################################################################
// Copy And Pasting Does Not Make You A CODER. Creating Your Own Code Makes You Great. #
//######################################################################################

int main() {
    int country_code, area_code, amount;


    std::cout<< ">>> Num Gen v1.0 Number Generator <<< "<<'\n';
	    std::cout<< "DEVELOPER : Chuchu Davies";
    std::cout<< "______________________________________"<<'\n';
    std::cout<<endl;
    std::cout<< " Please Enter the country code. ( Ex: +1 or 001 ) : ";
    std::cin>> country_code;

    std::cout << UserName <<" Please Enter the area code. ( Ex: 347 or 701 ) : ";
    std::cin >> area_code;

    std::cout << UserName <<" Enter the amount of numbers to generate: ";
    std::cin >> amount;

    for (int i = 0; i < amount; ++i) {
        std::string phone_number = generatePhoneNumber(country_code, area_code);
        std::cout << phone_number << " - " << (validatePhoneNumber(phone_number) ? "Generated" : "Invalid") << std::endl;
    }



     std::cout<< " Gen completed Successfully "<< UserName <<'\n';
     //std::cout<< "Press any Key to Close Program"<<'\n';

    return 0;
}
