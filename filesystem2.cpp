#include<filesystem>
#include<vector>
#include<fstream>
#include<iostream>
#include<string>

void file_output(std::fstream& file, std::string path, std::string message, int mode){
    file.open("file.txt", mode == 0 ? std::ios::out : std::ios::app);

    if(file.is_open()){
        file << message;
        file.close();
    }
}


std::vector<std::string> file_input(std::fstream& file, std::string path){
    file.open(path, std::ios::in);
    std::vector<std::string> text;

    if(file.is_open()){
        std::string line;

        while(std::getline(file, line)){
            text.push_back(line);
        }
    }

    return text;
}

int main(){

    std::fstream file;

    for(auto& str : file_input(file, "file.txt")){
        std::cout << str << "\n";
    }

    return 0;
}
