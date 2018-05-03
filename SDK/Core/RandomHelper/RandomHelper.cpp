#include "RandomHelper.h"
#include <QDateTime>
#include <iostream>

#define MAX_INT         0xFFFFFFFF

using namespace std;

RandomHelper &RandomHelper::Instance()
{
    static RandomHelper inst;
    return inst;
}

int RandomHelper::nextInt()
{
    return std::rand();
}

int RandomHelper::nextInt(int max)
{
    return std::rand() % max;
}

int RandomHelper::nextInt(int min, int max)
{
    return min + std::rand() % (max - min);
}

double RandomHelper::nextDouble()
{
    return std::rand() % MAX_INT / MAX_INT;
}

bool RandomHelper::nextBool()
{
    return (std::rand() % 1000) >= 497;
}

RandomHelper::RandomHelper()
{
    std::srand(QDateTime::currentDateTime().toMSecsSinceEpoch());
}

RandomHelper::~RandomHelper()
{

}
