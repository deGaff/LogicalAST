#include <iostream>
#include "logical_tree.h"
int main() {
    using namespace LogicalTree;
    int lhs = 1, rhs = 1;
    l_ptr test = MakeNode<AND>(MakeNode<OR>(MakeNode<LESS<int, int>>(std::ref(lhs), std::ref(rhs)), MakeNode<Constant>(0)), MakeNode<Constant>(1));
    lhs = 0;
    std::cout << test->Evaluate();
    return 0;
}
