// load given json file to a BIN file
#include <math.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

#include <fstream>
#include <iostream>

#include "const.h"
#include "nlohmann/json.hpp"
#include "player.h"

using namespace std;
using json = nlohmann::json;
/*
"list" help file


usage: list

list loaded data from a BIN file ( /data/dancer.dat )


*/
int main(int argc, char *argv[]) {
    string fileName = string(BASE_PATH) + "data/dancer.dat";
    Player new_dancer;
    if (!restorePlayer(new_dancer, fileName.c_str())) {
        exit(1);
    };
    string dancerName = new_dancer.getDancerName();

    cout << dancerName << "'s data restore as below\n";
    cout << new_dancer << endl;
    cout << dancerName << "'s LEDPlayer data restore as below\n";
    cout << new_dancer.myLEDPlayer << endl;
    cout << dancerName << "'s OFPlayer data restore as below\n";
    cout << new_dancer.myOFPlayer << endl;

    return 0;
}
