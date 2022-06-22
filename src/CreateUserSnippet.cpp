#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    // Check command line arguments
    if(argc < 2){
        std::cerr << "Usage is " << argv[0] << "[input template file]" << std::endl;
        return -1;
    }

    // input file open
    std::ifstream ifs(argv[1]);
    if(!ifs){
        std::cerr << "Not found " << argv[1] << std::endl;
        return -1;     
    }

    // output file open
    std::ofstream ofs("snippet.txt");

    std::string line;
    while(std::getline(ifs, line)){
        ofs << "\"";
        for(char c: line){
            if(c == '\t') ofs << "\\t";
            else if(c == '\"') ofs << "\\\"";
            else if(c == '\'') ofs << "\\\'";
            else ofs << c;
        }
        ofs << "\"," << std::endl;
    }

    // file close
    ifs.close();
    ofs.close();

    // process end
    return 0;
}