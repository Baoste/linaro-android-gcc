
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_activation_DataHandler$DataContentHandlerWriter__
#define __javax_activation_DataHandler$DataContentHandlerWriter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace activation
    {
        class DataContentHandler;
        class DataHandler$DataContentHandlerWriter;
    }
  }
}

class javax::activation::DataHandler$DataContentHandlerWriter : public ::java::lang::Object
{

public: // actually package-private
  DataHandler$DataContentHandlerWriter(::javax::activation::DataContentHandler *, ::java::lang::Object *, ::java::lang::String *, ::java::io::OutputStream *);
public:
  virtual void run();
public: // actually package-private
  ::javax::activation::DataContentHandler * __attribute__((aligned(__alignof__( ::java::lang::Object)))) dch;
  ::java::lang::Object * object;
  ::java::lang::String * mimeType;
  ::java::io::OutputStream * out;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_activation_DataHandler$DataContentHandlerWriter__
