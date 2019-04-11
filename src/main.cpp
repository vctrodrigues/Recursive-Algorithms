#include "../include/cannonball.h"
#include "../include/visor.h"

#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    std::cout << std::endl;

    if(argc <= 2) {
        v::display_error(0);
        return 1; //exit with error;
    } else if(argc == 2 && (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-help") == 0)) {    
        v::display_help();
    } else {
        if(!strcmp(argv[1], "--algoption") && !strcmp(argv[1], "-algoption")) {
            std::cout << ">>>> Missing argument --algoption" << std::endl
                      << "     Use: --algoption or --help\n";
            return 1; //exit with error
        }
        for(auto i=2; i < argc; i++) {
            if(strcmp(argv[i], "cb") == 0) {
                if(argc >= i+2) {
                    int cannonballs = cb::count_cannonballs(atoi(argv[i+1]), 0);
                    v::display_result(1, cannonballs);

                    if(argc >= i+4) i += 2;
                    else i++;
                } else {
                    v::display_error(1);
                }
            } else {
                v::display_error(-1);
            }
        }        
    }

    return 0;
}