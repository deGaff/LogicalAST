//
// Created by d3Gaff on 03.04.2022.
//

#ifndef LOGICALAST_BASIC_NODES_H
#define LOGICALAST_BASIC_NODES_H
#include <string>
#include <functional>
#include <memory>
#include <tuple>

namespace LogicalTree {
    class Node {
    public:
        virtual bool Evaluate() const = 0;

        virtual std::string toString() const = 0;
    };

    class Constant : public Node {
    public:
        Constant(bool val) : val(val) {}

        bool Evaluate() const final { return val; }

        std::string toString() const final { return std::to_string(val); }

    private:
        const bool val;
    };

    using l_ptr = std::shared_ptr<Node>;

    class Unary : public Node {
    protected:
        l_ptr rhs;
    public:
        Unary(l_ptr rhs) : rhs(rhs) {}
    };

    class Binary : public Node {
    protected:
        l_ptr lhs, rhs;
    public:
        Binary(l_ptr lhs, l_ptr rhs) : lhs(lhs), rhs(rhs) {}
    };

    template<typename LHS, typename RHS>
    class Compare : public Node {
    protected:
        const LHS &lhs;
        const RHS &rhs;
    public:
        Compare(const LHS &lhs, const RHS &rhs) : lhs(lhs), rhs(rhs) {}
    };

    template <typename Predicate, typename ... Args> //
    class Pred : public Node {
    public:
        Pred(Predicate pred, Args... args) : pred(pred), args(args...) {} //IS MOVE NEEDED
        bool Evaluate() const override {
            return std::apply(pred, args);
        }
//        std::string toString() const override { ?????????
//            return
//        }
    private:
        Predicate pred;
        const std::tuple<Args...> args;
    };
}


#endif //LOGICALAST_BASIC_NODES_H
