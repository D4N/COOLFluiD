#ifndef COOLFluiD_Physics_MHD_MHD2DProjectionConsToPrim_hh
#define COOLFluiD_Physics_MHD_MHD2DProjectionConsToPrim_hh

//////////////////////////////////////////////////////////////////////////////

#include "Framework/VarSetTransformer.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Physics {

    namespace MHD {
      class MHDProjectionTerm;

//////////////////////////////////////////////////////////////////////////////

/**
 * This class represents a transformer of variables from conservative
 * to Roe to primitive variables
 *
 * @author Andrea Lani
 * @author Radka Keslerova
 */
class MHD2DProjectionConsToPrim : public Framework::VarSetTransformer {
public:

  /**
   * Default constructor without arguments
   */
  MHD2DProjectionConsToPrim(Common::SafePtr<Framework::PhysicalModelImpl> model);

  /**
   * Default destructor
   */
  ~MHD2DProjectionConsToPrim();
  
  /**
   * Transform a state into another one
   */
  void transform(const Framework::State& state, Framework::State& result);
  
  /**
   * Transform a state into another one from reference precomputed
   * values (physical data)associated to the given state
   */
  void transformFromRef(const RealVector& data, Framework::State& result);
  
private: //data

  /// acquaintance of the PhysicalModel
  Common::SafePtr<MHDProjectionTerm> _model;

}; // end of class MHD2DProjectionConsToPrim

//////////////////////////////////////////////////////////////////////////////

    } // namespace MHD

  } // namespace Physics

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFluiD_Physics_MHD_MHD2DProjectionConsToPrim_hh
