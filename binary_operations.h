//
// Created by d3Gaff on 02.04.2022.
//

#ifndef LOGICALAST_BINARY_OPERATIONS_H
#define LOGICALAST_BINARY_OPERATIONS_H
#include "basic_nodes.h"
namespace LogicalTree {
    class OR : public Binary {
    public:
        OR(l_ptr lhs, l_ptr rhs) : Binary(lhs, rhs) {}
        bool Evaluate() const final{
            return lhs->Evaluate() || rhs->Evaluate();
        }
        std::string toString() const final{
            return lhs->toString() + "|" + rhs->toString();
        }
    };

    class AND : public Binary {
    public:
        AND(l_ptr lhs, l_ptr rhs) : Binary(lhs, rhs) {}
        bool Evaluate() const final{
            return lhs->Evaluate() && rhs->Evaluate();
        }
        std::string toString() const final{
            return lhs->toString() + "&" + rhs->toString();
        }
    };

    class XOR : public Binary {
    public:
        XOR(l_ptr lhs, l_ptr rhs) : Binary(lhs, rhs) {}
        bool Evaluate() const final{
            return lhs->Evaluate() ^ rhs->Evaluate();
        }
        std::string toString() const final{
            return lhs->toString() + "^" + rhs->toString();
        }
    };
}

#endif //LOGICALAST_BINARY_OPERATIONS_H
