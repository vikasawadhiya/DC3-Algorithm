/*********************************************************************************
** MIT License
**
** Copyright (c) 2021 VIKAS AWADHIYA
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:

** The above copyright notice and this permission notice shall be included in all
** copies or substantial portions of the Software.

** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
*********************************************************************************/

#include <iostream>

#include <vector>
#include <string>
#include <iterator>

#include "dc3.hpp"

using std::cout;

void printSuffixArrayWithSuffix(const std::string& str, const std::vector<std::string::size_type>& indexes){

    for(std::string::size_type i : indexes){

        cout<< i << '\t';
        std::copy(str.cbegin() + i, str.cend(), std::ostream_iterator<char>(cout));
        cout<< '\n';
    }
}

int main(){
    std::string str("ABCABCACAB");

    std::vector<std::string::size_type> suffArr = dc3::suffixArray(str.cbegin(), str.cend());
    printSuffixArrayWithSuffix(str, suffArr);
}
