#include<iostream>
#include <string>
#include<filesystem>

namespace fs = std::filesystem;

void createDirectory(){
    std::string name;
    std::cout << "Enter name of the directory you want to create : ";
    std::cin >> name;
    try{
        fs::create_directory("C:\\Users\\Khali\\Desktop\\" + name);
    }
    catch(fs::filesystem_error& e){
        std::cout << e.code() << '\n';
    }
}

void rename(){
    std::string org;
    std::string name;

    std::cout << "\nEnter orgin name : ";
    std::cin >> org;

    std::cout << "Enter the name : ";
    std::cin >> name;

    try{
        fs::rename("C:\\Users\\Khali\\Desktop\\" + org, "C:\\Users\\Khali\\Desktop\\" + name);
    }
    catch(fs::filesystem_error& e){
        std::cout << e.code() << '\n'
    }
}

void copyFile(){
    std::string org;
    std::string copyTo;

    std::cout << "\nEnter orgin name : ";
    std::cin >> org;

    std::cout << "Enter the name you want to copy to : ";
    std::cin >> copyTo;

    try{
        fs::copy_file("C:\\Users\\Khali\\Desktop\\" + org, "C:\\Users\\Khali\\Desktop\\" + copyTo, fs::copy_options::skip_existing);
    }
    catch(fs::filesystem_error& e){
        std::cout << e.code() << '\n'
    }
}

void removeFile(){
    std::string name;
    std::cout << "Enter name of file/directory you want to remove : ";
    std::cin >> name;

    try{
        fs::remove("C:\\Users\\Khali\\Desktop\\" + name);
    }
    catch(fs::filesystem_error& e){
        std::cout << e.code() << '\n'
    }
}



int main(){
    
    int input = 0;

    while(input != 5){
        std::cout << "1 : removeFile\n2 : renameFile\n3 : copyFile\n4 : createDirectory\n5 : Exit\n\n";
        std::cin >> input;
        switch(input){
            case 1:
                removeFile();
                break;
            case 2:rename();
                break;
            case 3:
                copyFile();
                break;
            case 4:
                createDirectory();
                break;
            case 5:
                input = 5;
                break;
            
            default:
                break;
        }
    }
    
    return 0;
}
