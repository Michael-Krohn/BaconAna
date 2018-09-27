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
      E(0),pT(0),eta(0),phi(0),SDmass(0),PrunedMass(0),
      lsfC_3_sj1_pt(0), lsfC_3_sj1_eta(0), lsfC_3_sj1_phi(0), lsfC_3_sj1_m(0),
      lsfC_3_sj2_pt(0), lsfC_3_sj2_eta(0), lsfC_3_sj2_phi(0), lsfC_3_sj2_m(0),
      lsfC_3_sj3_pt(0), lsfC_3_sj3_eta(0), lsfC_3_sj3_phi(0), lsfC_3_sj3_m(0),
      lmdCInc(0), lmdC_2(0), lmdC_3(0), lmdC_4(0),
      lsfCInc(0), lsfC_2(0), lsfC_3(0), lsfC_4(0),
      tau1(-1), tau2(-1), tau3(-1), tau4(-1)
      {}
      ~TAddJet(){}
      
      unsigned int index;                                                   // index in original jet collection
      double E, pT, eta, phi, SDmass, PrunedMass, lsfC_3_sj1_pt, lsfC_3_sj1_eta, lsfC_3_sj1_phi, lsfC_3_sj1_m, lsfC_3_sj2_pt, lsfC_3_sj2_eta, lsfC_3_sj2_phi, lsfC_3_sj2_m, lsfC_3_sj3_pt, lsfC_3_sj3_eta, lsfC_3_sj3_phi, lsfC_3_sj3_m, lmdCInc, lmdC_2, lmdC_3, lmdC_4, lsfCInc, lsfC_2, lsfC_3, lsfC_4, maxSubJetCSV;
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
