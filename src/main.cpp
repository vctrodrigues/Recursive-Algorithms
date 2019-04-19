#include "../include/cannonball.h"
#include "../include/power.h"
#include "../include/digit_sum.h"
#include "../include/visor.h"

#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    std::cout << std::endl;

    if (argc <= 2)
    {
        v::display_error(0);
        return 1; //exit with error;
    }
    else if (argc == 2 && (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-help") == 0))
    {
        v::display_help();
    }
    else
    {
        if (!strcmp(argv[1], "--algoption") && !strcmp(argv[1], "-algoption"))
        {
            std::cout << ">>>> Missing argument --algoption" << std::endl
                      << "     Use: --algoption or --help\n";
            return 1; //exit with error
        }
        for (auto i = 2; i < argc; i++)
        {
            if (strcmp(argv[i], "cb") == 0)
            {
                if (argc >= i + 2)
                {
                    int cannonballs = cb::count_cannonballs(atoi(argv[i + 1]), 0);
                    v::display_result(1, cannonballs);

                    if (argc >= i + 4)
                        i += 2;
                    else
                        break;
                }
                else
                {
                    v::display_error(1);
                }
            }
            else if (strcmp(argv[i], "power") == 0)
            {
                if (argc >= i + 3)
                {
                    int n = atoi(argv[i + 1]); //it's the number to power
                    int k = atoi(argv[i + 2]); //it's the power
                    int result = power::raiseToPower(n, k);
                    v::display_result(2, result);

                    if (argc >= i + 4)
                        i += 3;
                    else
                        break;
                }
                else
                {
                    v::display_error(2);
                }
            }
            else if (strcmp(argv[i], "ds") == 0)
            {
                if (argc >= i + 2)
                {
                    int digitSum = ds::digitSum(atoi(argv[i + 1]));
                    v::display_result(3, digitSum);

                    if (argc >= i + 4)
                        i += 2;
                    else
                        break;
                }
                else
                {
                    v::display_error(3);
                }
            }
            else
            {
                v::display_error(-1);
            }
        }
    }

    return 0;
}
