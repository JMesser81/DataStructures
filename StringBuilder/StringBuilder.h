#ifndef _STRING_BUILDER_H

#include <string>

class StringBuilder
{
 public:
  void append(std::string in);
  std::string toString();

 private:
  std::string thestring;

};

#endif // _STRING_BUILDER_H
