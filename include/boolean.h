//
//  boolean.h
//  E#
//
//  Created by Adrian Punga on 01/03/2012.
/*
Copyright (c) 2012 Adrian Punga

Permission is hereby granted, free of charge, to any person obtaining a copy of this software
and associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute, 
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or 
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef E__boolean_h
#define E__boolean_h

#include "object.h"

namespace esharp {
	class list;
	class boolean: public object {
	private:
		boolean();
		boolean(void*);
    public:
        virtual ~boolean();

		virtual unsigned int getHash();

		static object* operator_cast(list* param);
		static object* operator_eq(list* param);
		static object* operator_logic_and(list* param);
		static object* operator_logic_or(list* param);
		static object* operator_logic_not(list* param);
		static object* read(list* param);
		static object* write(list* param);
	public:
		static boolean boolean_class;
		static boolean boolean_true;
		static boolean boolean_false;
    };
}

#endif
