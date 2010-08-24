// -------------------------------------------------------------------------
// -----                  R3BCaloCrystalHit header file                -----
// -----               Created 08/07/10  by H. Alvarez Pol             -----
// -------------------------------------------------------------------------


/**  R3BCaloCrystalHit.h
 **  A calorimeter crystal hit is the representation of the 
 **  information obtained from each crystal in the calorimeter.
 **
 **/


#ifndef R3BCALOCRYSTALHIT_H
#define R3BCALOCRYSTALHIT_H


#include "TObject.h"

#include "FairMultiLinkedData.h"


class R3BCaloCrystalHit : public FairMultiLinkedData 
{

 public:

  /** Default constructor **/
  R3BCaloCrystalHit();


  /** Constructor with arguments
   *@param fCrystalId		Crystal unique identifier
   *@param fCrystalType		Crystal type
   *@param fCrystalCopy     Crystal copy
   *@param fEnergy		total energy deposited on the crystal [GeV]
   *@param fTime      Time since event start [ns]
   **/
	R3BCaloCrystalHit(Int_t type, Int_t copy, Int_t ident,
					  Double_t energy, Double_t time);


  /** Copy constructor **/
  R3BCaloCrystalHit(const R3BCaloCrystalHit& hit) { *this = hit; };


  /** Destructor **/
  virtual ~R3BCaloCrystalHit();


  /** Accessors **/
  Double_t GetCrystalType()   const { return fCrystalType; }
  Double_t GetCrystalCopy()   const { return fCrystalCopy; }
  Double_t GetCrystalId()   const { return fCrystalId; }
  Double_t GetEnergy()   const { return fEnergy; }
  Double_t GetTime()  const { return fTime; }
	

  /** Modifiers **/
  void SetCrystalType(Int_t type){fCrystalType = type;}
  void SetCrystalCopy(Int_t copy){fCrystalCopy = copy;}
  void SetCrystalId(Int_t ident){fCrystalId = ident;}
  void SetEnergy(Double32_t energy){fEnergy = energy;}
  void AddMoreEnergy(Double32_t moreEnergy){fEnergy += moreEnergy;}
  void SetTime(Double32_t time){fTime = time;}


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fEnergy;
  Double32_t fTime;
  Int_t fCrystalType;
  Int_t fCrystalCopy;
  Int_t fCrystalId;


  ClassDef(R3BCaloCrystalHit,1)

};

#endif