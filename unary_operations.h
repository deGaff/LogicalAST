//
// Created by d3Gaff on 06.04.2022.
//

#ifndef LOGICALAST_UNARY_OPERATIONS_H
#define LOGICALAST_UNARY_OPERATIONS_H
#include "basic_nodes.h"

namespace LogicalTree {
    class NOT : public Unary {
    public:
        NOT(l_ptr rhs) : Unary(rhs) {}
        bool Evaluate() const override {
            return !(rhs->Evaluate());
        }
        std::string toString() const override {
            std::string ans = "!";
            return ans + rhs->toString();
        }
    };
}

#endif //LOGICALAST_UNARY_OPERATIONS_H
