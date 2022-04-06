//
// Created by d3Gaff on 03.04.2022.
//

#ifndef LOGICALAST_COMPARISON_OPERATIONS_H
#define LOGICALAST_COMPARISON_OPERATIONS_H
#include "basic_nodes.h"
namespace LogicalTree {
    template< typename LHS, typename RHS>
    class LESS : public Compare<LHS, RHS> {
    public:
        LESS(const LHS& lhs, const RHS& rhs) : Compare<LHS,RHS>(lhs,rhs) {}
        bool Evaluate() const final { return Compare<LHS, RHS>::lhs < Compare<LHS, RHS>::rhs; }
        std::string toString() const final {
            std::string str =  std::to_string(Compare<LHS, RHS>::lhs) + "<";
            str += std::to_string(Compare<LHS, RHS>::rhs);
            return str;
        }
    };
}
#endif //LOGICALAST_COMPARISON_OPERATIONS_H
