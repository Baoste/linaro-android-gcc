
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_PrinterDialog$PageSetupPanel$MediaTypes__
#define __gnu_javax_print_PrinterDialog$PageSetupPanel$MediaTypes__

#pragma interface

#include <javax/swing/JPanel.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
          class PrinterDialog$PageSetupPanel;
          class PrinterDialog$PageSetupPanel$MediaTypes;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JComboBox;
        class JLabel;
    }
  }
}

class gnu::javax::print::PrinterDialog$PageSetupPanel$MediaTypes : public ::javax::swing::JPanel
{

public: // actually package-private
  PrinterDialog$PageSetupPanel$MediaTypes(::gnu::javax::print::PrinterDialog$PageSetupPanel *);
public:
  void actionPerformed(::java::awt::event::ActionEvent *);
public: // actually package-private
  void updateForSelectedService();
private:
  ::javax::swing::JLabel * __attribute__((aligned(__alignof__( ::javax::swing::JPanel)))) size_lb;
  ::javax::swing::JLabel * source_lb;
  ::javax::swing::JComboBox * size;
  ::javax::swing::JComboBox * source;
public: // actually package-private
  ::gnu::javax::print::PrinterDialog$PageSetupPanel * this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_PrinterDialog$PageSetupPanel$MediaTypes__
