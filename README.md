# DC3-Algorithm
DC3 algorithm is liner time suffix array construction algorithm. Suffix array is simpler and more space efficient then suffix tree. Suffix array theoretically can replace suffix tree in all problems.

## Tutorial Document
A tutorial document DC3AlgorithmTutorial.pdf, explains algorithm step by steps.

## How to use
My implementation uses number 0 as sentinel for string, which is null character in ascii table, and you don’t have to include sentinel character. It means,

If string is **str = “ABCABCACAB”** then don’t add sentinel character in it, my dc3 implementation itself add sentinel when converts chart to number. You only have to call function,

 **dc3::suffixArray(str.cbegin(), str.cend());**
 
And that’s all you have to do.

My implementation doesn’t include suffix entry of sentinel suffix; usually tutorial/book show suffix array starts with sentinel suffix entry for explaining purpose but it is not required in implementation.

