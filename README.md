# args.h
My library for creating command line tools in c++.

# initialising
Put the args.h file in your project folder and import it by using

#include "args.h"
...
int main(int argc, char *argv[])
{
  vector<string> cmd=getWords(argc,argv);
  ...
}
# Getting arguments from command line

You need to write the following line of code:

vector<string> cmd=getWords(argc,argv);

Now all arguments given from the command line are in the vector<string> cmd.

# Functions inside of the library

getWords()
print()
lower()
strToInt()
