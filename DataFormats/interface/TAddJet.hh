#ifndef BACONANA_DATAFORMATS_TADDJET_HH
#define BACONANA_DATAFORMATS_TADDJET_HH

#include <TObject.h>

namespace baconhep
{
  class TAddJet : public TObject
  {
    public:
      TAddJet():
      index(-1),
      E(0),pT(0),eta(0),phi(0),SDmass(0),
      tau1(-1), tau2(-1), tau3(-1), tau4(-1)
      {}
      ~TAddJet(){}
      
      unsigned int index;                                                   // index in original jet collection
      double E, pT, eta, phi, SDmass;
      float tau1, tau2, tau3, tau4;                                         // N-subjettiness
    ClassDef(TAddJet,13)
  };
  
  enum ETopTagType
  {
    kCMSTT = 1,
    kHEPTT = 2
  };
}
#endif
