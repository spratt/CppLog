///////////////////////////////////////////////////////////////////////////////
//                       Copyright (c) 2011 - 2012 by                        //
//                                Simon Pratt                                //
//                           (All rights reserved)                           //
///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// FILE:    CppLog.hpp                                                       //
//                                                                           //
// MODULE:  CppLog                                                           //
//                                                                           //
// PURPOSE: Defines a nice interface for logging in C++.                     //
//                                                                           //
// NOTES:   None.                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
// Public Variable:                     Description:                         //
// ----------------                     ------------                         //
///////////////////////////////////////////////////////////////////////////////
//                             Public Methods:                               //
///////////////////////////////////////////////////////////////////////////////
#ifndef CPPLOG_HPP
#define CPPLOG_HPP

#include <fstream>

namespace cpplog {
  class CppLog {
  public:
    CppLog(std::ios& buffer, std::string filename);
    ~CppLog(void);
    void enable(void);
    void disable(void);
  private:
    bool _enabled;
    std::ios& _buffer;
    std::ofstream _log;
    std::ofstream _null;
  };
}

#endif
