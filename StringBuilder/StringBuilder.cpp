#include "StringBuilder.h"

void StringBuilder::append(std::string in)
{
  thestring += in;
}

std::string StringBuilder::toString()
{
  return thestring;
}
