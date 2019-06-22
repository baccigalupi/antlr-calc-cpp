
// Generated from /Users/kane/Projects/free-code-friday/antlr-calc-cpp/Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcVisitor.h"


/**
 * This class provides an empty implementation of CalcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalcBaseVisitor : public CalcVisitor {
public:

  virtual antlrcpp::Any visitExpressions(CalcParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerminating_expression_tail(CalcParser::Terminating_expression_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CalcParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCalculation(CalcParser::CalculationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCalculation_tail(CalcParser::Calculation_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison(CalcParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison_tail(CalcParser::Comparison_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditive_expression(CalcParser::Additive_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditive_tail(CalcParser::Additive_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicative_expression(CalcParser::Multiplicative_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicative_tail(CalcParser::Multiplicative_tailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExponential_term(CalcParser::Exponential_termContext *ctx) override {
    return visitChildren(ctx);
  }


};

