// ----------------------------------------------------------------------------
// Generated by InterfaceFactory [Thu May 15 21:07:09 2003]
// 
// File        : xmlparamsx.h
// Class       : ifc_xmlreaderparams
// class layer : Dispatchable Receiver
// ----------------------------------------------------------------------------

#ifndef __XMLREADERPARAMSX_H
#define __XMLREADERPARAMSX_H

#include "xmlparams.h"




// ----------------------------------------------------------------------------

class XmlReaderParamsX : public skin_xmlreaderparams {
  protected:
    XmlReaderParamsX() {}
  public:
    virtual const wchar_t *getItemName(int i)=0;
    virtual const wchar_t *getItemValue(int i)=0;
    virtual const wchar_t *getItemValue2(const wchar_t *name);
    virtual const wchar_t *enumItemValues(const wchar_t *name, int nb)=0;
    virtual int getItemValueInt(const wchar_t *name, int def = 0)=0;
    virtual int getNbItems()=0;
    virtual void addItem(const wchar_t *parm, const wchar_t *value)=0;
    virtual void removeItem(const wchar_t *parm)=0;
    virtual void replaceItem(const wchar_t *parm, const wchar_t *value)=0;
    virtual int findItem(const wchar_t *parm)=0;
  
  protected:
    RECVS_DISPATCH;
};

#endif // __XMLREADERPARAMSX_H