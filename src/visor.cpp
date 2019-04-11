#include "../include/visor.h"

namespace v {

    void display_help() {

    }

    void display_error(int code) {

        std::cout << BOLDRED;

        switch(code) {
            case -1:
                std::cout << ">>>> Error... The algorithm doesn't exists.\n"
                          << RESET << YELLOW 
                          << "     Try again with another algorithm name" << std::endl;
                break;
            case 0:
                std::cout << ">>>> Hey, you're missing arguments\n"
                          << RESET << YELLOW
                          << "     Use: --algoption <algorithm_name>\n"
                          << "     The options are:\n"
                          << "          cb" << std::endl;
                break;
            case 1:
                std::cout << ">>>> Error... The algorithm cb [cannonball] needs a <height> parameter.\n"
                          << RESET << YELLOW 
                          << "     Try again with: --algoption cb <height_value>" << std::endl;
                break;
        }

        std::cout << RESET;
    }

    void display_result(int alg, int result) {
        std::cout << BOLDGREEN;

        switch (alg)
        {
            case 1:
                std::cout << ">>>> Running the cannonball algorithm..." << std::endl
                          << ">>>> Yaaaas! The result is: [" << RESET << result << " cannonballs" << BOLDGREEN "]" << std::endl;
                break;

            default:
                break;
        }

        std::cout << RESET << std::endl;
    }

} //v