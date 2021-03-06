// Copyright (C) 2012 von Karman Institute for Fluid Dynamics, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#ifndef COOLFluiD_IO_TecplotWriter_StdSetup_hh
#define COOLFluiD_IO_TecplotWriter_StdSetup_hh

//////////////////////////////////////////////////////////////////////////////

#include "TecplotWriter/TecWriterData.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

    namespace TecplotWriter {

//////////////////////////////////////////////////////////////////////////////

  /// This class represents a NumericalCommand action to be
  /// sent to Domain to be executed in order to setup the MeshData.
class TecplotWriter_API StdSetup : public TecWriterCom {
public:

  /// Constructor.
  explicit StdSetup(std::string name);

  /// Destructor.
  ~StdSetup();

  /// Execute Processing actions
  void execute();

}; // class StdSetup

//////////////////////////////////////////////////////////////////////////////

    } // namespace TecplotWriter

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFluiD_IO_TecplotWriter_StdSetup_hh

