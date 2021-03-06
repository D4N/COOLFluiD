#include "UFEM/ElemProps.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {
  namespace UFEM {

//////////////////////////////////////////////////////////////////////////////

void ElemProps::defineConfigOptions ( Config::OptionList& options )
{
  CFAUTOTRACE;
}

//////////////////////////////////////////////////////////////////////////////

ElemProps::ElemProps ( const std::string& name ) : UFEMSolverStrategy ( name )
{
  CFAUTOTRACE;
  addConfigOptionsTo(this);
}

//////////////////////////////////////////////////////////////////////////////

ElemProps::~ElemProps() {}

//////////////////////////////////////////////////////////////////////////////

void ElemProps::configure ( Config::ConfigArgs& args )
{
  CFAUTOTRACE;
  UFEMSolverStrategy::configure ( args );
}

//////////////////////////////////////////////////////////////////////////////

void ElemProps::setup ()
{
  CFAUTOTRACE;
  UFEMSolverStrategy::setup ();
}

//////////////////////////////////////////////////////////////////////////////

void ElemProps::unsetup ()
{
  CFAUTOTRACE;
  UFEMSolverStrategy::unsetup ();
}

//////////////////////////////////////////////////////////////////////////////

	} // namespace UFEM
} // namespace COOLFluiD

