///////////////////////////////////////////////////////////////////////////////
//                       Copyright (c) 2011 - 2012 by                        //
//                                Simon Pratt                                //
//                           (All rights reserved)                           //
///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// FILE:    CppLog.cpp                                                       //
//                                                                           //
// MODULE:  CppLog                                                           //
//                                                                           //
// NOTES:   None.                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
#include "CppLog.hpp"

namespace cpplog {

  CppLog::CppLog(std::ios& buffer, std::string filename)
    : _enabled(true), _buffer(buffer), _log(filename.c_str()),
      _null("/dev/null") // this is dirty and unportable
  {
    enable();
  }

  // make the assumption that the log isn't stored anywhere else
  CppLog::~CppLog(void) {}

  void CppLog::enable(void) {
    _buffer.rdbuf(_log.rdbuf());
  }

  void CppLog::disable(void) {
    _buffer.rdbuf(_null.rdbuf());
  }
}
