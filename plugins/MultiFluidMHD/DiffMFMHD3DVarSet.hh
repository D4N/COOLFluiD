#ifndef COOLFluiD_Physics_MultiFluidMHD_DiffMFMHD3DVarSet_hh
#define COOLFluiD_Physics_MultiFluidMHD_DiffMFMHD3DVarSet_hh

//////////////////////////////////////////////////////////////////////////////

#include "DiffMFMHDVarSet.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Physics {

    namespace MultiFluidMHD {

//////////////////////////////////////////////////////////////////////////////

  /**
   * This class represents a MultiFluidMHD physical model 3D for primitive
   * variables
   *
   * @author ALejandro Alvarez
   * 
   */
class DiffMFMHD3DVarSet : public DiffMFMHDVarSet {
public: // classes

  /**
   * Constructor
   * @see DiffMFMHDTerm
   */
  DiffMFMHD3DVarSet(const std::string& name, 
		    Common::SafePtr<Framework::PhysicalModelImpl> model) :
    DiffMFMHDVarSet(name, model),
    _qFluxVect(),
    _qFlux()
  {
  }
  
  /**
   * Default destructor
   */
  virtual ~DiffMFMHD3DVarSet()
  {
  }

  /**
   * Set up private data
   */
  virtual void setup();

  /**
   * Get the diffusive flux vector
   */
  virtual RealMatrix& getFlux(const RealVector& values,
                              const std::vector<RealVector*>& gradients,
                              const CFreal& radius);
  
  /**
   * Get the axisymmetric source term
   */
  virtual void getAxiSourceTerm(const RealVector& physicalData,
				const RealVector& state,
				const std::vector<RealVector*>& gradients,
				const CFreal& radius,
				RealVector& source);
  
  /**
   * Get the diffusive flux
   */
  virtual RealVector& getFlux(const RealVector& values,
                              const std::vector<RealVector*>& gradients,
                              const RealVector& normal,
                              const CFreal& radius);
protected:
  
  ///heat flux vector
  std::vector<RealVector> _qFluxVect;
  
  /// heatFlux projected into the normal
  RealVector _qFlux;
  
  
  
}; // end of class DiffMFMHD3DVarSet

//////////////////////////////////////////////////////////////////////////////

    } // namespace MultiFluidMHD

  } // namespace Physics

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFluiD_Physics_MultiFluidMHD_DiffMFMHD3DVarSet_hh
