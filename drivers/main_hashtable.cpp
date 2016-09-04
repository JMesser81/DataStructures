#include "HashTable.h"

int main()
{
   HashTable<string, int> h = new HashTable<string, int>();

   std::string mykey;
   if (h.hasKey(mykey))
   {
      h.addValue(mykey, myvalue);
   }
   else
   {
     h.insert(mykey, myvalue);
   }

   return 0;

}
