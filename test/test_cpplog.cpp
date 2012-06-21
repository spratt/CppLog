///////////////////////////////////////////////////////////////////////////////
//                       Copyright (c) 2011 - 2012 by                        //
//                                Simon Pratt                                //
//                           (All rights reserved)                           //
///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// FILE:    test.cpp                                                         //
//                                                                           //
// MODULE:  CppLog                                                           //
//                                                                           //
// NOTES:   None.                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "../CppLog.hpp"

using namespace std;
using namespace cpplog;

int main(int argc, char** argv) {
  CppLog log(clog,"test/test_cpplog.txt");
  cout << "This line should output to console." << endl;
  clog << "This line should output to log file." << endl;
  log.disable();
  clog << "This line should disappear forever." << endl;
  log.enable();
  clog <<"This line should also output to log file." << endl;
  return 0;
}
