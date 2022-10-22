# DC3 Algorithm
![Top Language](https://img.shields.io/github/languages/top/vikasawadhiya/DC3-Algorithm?style=plastic)
![License](https://img.shields.io/github/license/vikasawadhiya/DC3-Algorithm?color=%23f78113&style=plastic)

DC3 is suffix array construction algorithm. It requires linear time complexity O(n) to construct suffix array and it is easy to implement as compare to suffix tree construction algorithm.

Algorithm is recursive in nature. Internally it uses radix sort which is efficient sorting technique for strings. Input string is converted into number array by converting each characters of string to number which make it easier to apply radix sort. Number array is then divided into two groups of sequences r<sub>0</sub> and r<sub>12</sub>. These two groups of sequences are sorted separately and merged to create suffix array.

## Documentation
Detailed documentation is created to explain dc3 algorithm. [DC3AlgorithmTutorial.pdf](https://github.com/vikasawadhiya/DC3-Algorithm/blob/main/DC3AlgorithmTutorial.pdf) contains 20 pages and explains algorithm in detail. Documentation has following highlights,

* Document explains algorithm in plain English and even a person who doesn’t have knowledge of any programming language can understand.  
* Explains logic behind each step rather than only explaining how to perform steps.
* Tables and diagrams are used to explain concepts more illustratively.

##  Usage
Repository also contains `main.cpp` file to demo how to use the implementation with an example and print the result of suffix array and respective suffix in very illustrative way.

The api exposed to user is very simple to use. To create suffix array, only requires to call a function `dc3::suffixArray` by passing `begin` and `end` iterators of input string and function returns suffix array as `std::vector`. Details are as follows,

```cpp
std::string str("abcabcacab");
std::vector<std::string::size_type> suffArr = dc3::suffixArray(str.cbegin(), str.cend());
```

## Example

If input string is `abcabcacab` then dc3 algorithm will create following suffix array,

Suffix array = `[8, 0, 3, 6, 9, 1, 4, 7, 2, 5]`

It would be more illustrative if suffix starting at respective index is also written as follows,

| Suffix Array| Suffix      |
| :---:       |    :----    |
| 8           | ab          |
| 0           | abcabcacab  |
| 3           | abcacab     |
| 6           | acab        |
| 9           | b           |
| 1           | bcabcacab   |
| 4           | bcacab      |
| 7           | cab         |
| 2           | cabcacab    |
| 5           | cacab       |
