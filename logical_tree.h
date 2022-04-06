//
// Created by d3Gaff on 01.04.2022.
//

#ifndef LOGICALAST_LOGICAL_TREE_H
#define LOGICALAST_LOGICAL_TREE_H
#include "basic_nodes.h"
#include "unary_operations.h"
#include "binary_operations.h"
#include "comparison_operations.h"


// AND OR XOR 1 0 !
// < > >= <= == !=

//Constant values
//Unary operations
//Binary operations
//Comparisons
//Predicate

//Comparisons:
//LHS COMPARATOR RHS

namespace LogicalTree {

    template<typename Type, typename ... Args>
    l_ptr MakeNode(Args... args) {
        return std::make_shared<Type>(args...);
    }
}


#endif //LOGICALAST_LOGICAL_TREE_H
