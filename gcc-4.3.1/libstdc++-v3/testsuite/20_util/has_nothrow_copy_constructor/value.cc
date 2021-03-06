// { dg-options "-std=gnu++0x" }
// 2004-12-30  Paolo Carlini  <pcarlini@suse.de>
//
// Copyright (C) 2004, 2005, 2007 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

#include <type_traits>
#include <testsuite_hooks.h>
#include <testsuite_tr1.h>

void test01()
{
  bool test __attribute__((unused)) = true;
  using std::has_nothrow_copy_constructor;
  using namespace __gnu_test;

  // Positive tests.
  VERIFY( (test_category<has_nothrow_copy_constructor, int>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, float>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, EnumType>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int*>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int(*)(int)>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int (ClassType::*)>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int (ClassType::*) (int)>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int[2]>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, float[][3]>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, EnumType[2][3][4]>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int*[3]>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int(*[][2])(int)>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor, int (ClassType::*[2][3])>(true)) );
  VERIFY( (test_category<has_nothrow_copy_constructor,
	   int (ClassType::*[][2][3]) (int)>(true)) );

  // Negative tests.
  VERIFY( (test_category<has_nothrow_copy_constructor, void>(false)) );
}

int main()
{
  test01();
  return 0;
}
