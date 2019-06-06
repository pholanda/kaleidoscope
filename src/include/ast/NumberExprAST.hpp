#pragma once

// Expression Class for numeric literals like 1.0
class NumberExprAST : public ExprAST {
	double Val;

public:
	NumberExprAST(double val) : Val(val){}
};