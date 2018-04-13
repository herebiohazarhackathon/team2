#ifndef TEAM1_H
#define TEAM1_H

#include "team1_global.h"
#include <string>

class TEAM1SHARED_EXPORT Team1
{

public:
    Team1();
};

extern "C"  std::string  process(std::string id,std::string arg)
{
    // here you can put your main logic
    // id - id of task
    // arg - is argument of task , in any format. look in task description

    return "1,2,3";
}

#endif // TEAM1_H
