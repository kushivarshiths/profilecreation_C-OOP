#include<iostream>
#include "profile.hpp"
#include <vector>

Profile::Profile(std::string new_name,int new_age,std::string new_city,std::string new_country,std::string new_pronouns) : name(new_name),age(new_age),city(new_city),country(new_country),pronouns(new_pronouns){};
std::string Profile::view_profile(){
 std::string total;
for(int i = 0;i < hobbies.size();i++){
  total += hobbies[i];
  total += ",";

}
return "Name: " + name  + "\n" +"Age: " + std::to_string(age)+"\n"+ "City: " + city + "\n"+"Country: " + country + "\n" + "Pronouns: " + pronouns + "\n" + "Hobbies: " + total + "\n";


}

void Profile::add_hobby(std::string new_hobby){
     hobbies.push_back(new_hobby);
}
