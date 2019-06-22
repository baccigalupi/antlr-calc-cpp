
// Generated from /Users/kane/Projects/free-code-friday/antlr-calc-cpp/Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalcParser.
 */
class  CalcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalcParser.
   */
    virtual antlrcpp::Any visitExpressions(CalcParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitTerminating_expression_tail(CalcParser::Terminating_expression_tailContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CalcParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCalculation(CalcParser::CalculationContext *context) = 0;

    virtual antlrcpp::Any visitCalculation_tail(CalcParser::Calculation_tailContext *context) = 0;

    virtual antlrcpp::Any visitComparison(CalcParser::ComparisonContext *context) = 0;

    virtual antlrcpp::Any visitComparison_tail(CalcParser::Comparison_tailContext *context) = 0;

    virtual antlrcpp::Any visitAdditive_expression(CalcParser::Additive_expressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditive_tail(CalcParser::Additive_tailContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicative_expression(CalcParser::Multiplicative_expressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicative_tail(CalcParser::Multiplicative_tailContext *context) = 0;

    virtual antlrcpp::Any visitExponential_term(CalcParser::Exponential_termContext *context) = 0;


};

