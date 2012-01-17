//
//  real.h
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

#ifndef E__real_h
#define E__real_h

#include "object.h"

namespace esharp {
	class real: public object {
	private:
		double value;
		real();
    public:
		real(double real_param);
        virtual ~real();
		double getValue();

		virtual unsigned int getHash();

		static object* new_instance(list* param);
		static object* operator_cast(list* param);
		static object* operator_eq(list* param);
		static object* operator_bigger(list* param);
		static object* operator_bigger_eq(list* param);
		static object* operator_lower(list* param);
		static object* operator_lower_eq(list* param);
		static object* operator_minus(list* param);
		static object* operator_plus(list* param);
		static object* operator_add(list* param);
		static object* operator_sub(list* param);
		static object* operator_mul(list* param);
		static object* operator_div(list* param);
		static object* read(list* param);
		static object* write(list* param);
	public:
		static real real_class;
    };
}

#endif
