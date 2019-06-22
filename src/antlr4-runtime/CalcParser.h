
// Generated from /Users/kane/Projects/free-code-friday/antlr-calc-cpp/Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CalcParser : public antlr4::Parser {
public:
  enum {
    COMMA = 1, COLON = 2, SEMI = 3, OPEN_PAREN = 4, CLOSE_PAREN = 5, OPEN_BRACKET = 6, 
    CLOSE_BRACKET = 7, OPEN_BRACE = 8, CLOSE_BRACE = 9, PERIOD = 10, PLUS = 11, 
    DASH = 12, STAR = 13, SLASH = 14, CARET = 15, EQUAL = 16, EXCLAMATION = 17, 
    NOT_EQUAL = 18, LESS_THAN = 19, GREATER_THAN = 20, LESSER_THAN_EQUAL = 21, 
    GREATER_THAN_EQUAL = 22, AMPERSAND = 23, OR = 24, NUMBER = 25, INTEGER = 26, 
    FLOAT = 27, LOGICAL_OPERATOR = 28, COMPARITIVE_OPERATOR = 29, ADDITIVE_OPERATOR = 30, 
    MULTIPLICATIVE_OPERATOR = 31, EXPONENTIAL_OPERATOR = 32, EOL = 33
  };

  enum {
    RuleExpressions = 0, RuleTerminating_expression_tail = 1, RuleExpression = 2, 
    RuleCalculation = 3, RuleCalculation_tail = 4, RuleComparison = 5, RuleComparison_tail = 6, 
    RuleAdditive_expression = 7, RuleAdditive_tail = 8, RuleMultiplicative_expression = 9, 
    RuleMultiplicative_tail = 10, RuleExponential_term = 11
  };

  CalcParser(antlr4::TokenStream *input);
  ~CalcParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ExpressionsContext;
  class Terminating_expression_tailContext;
  class ExpressionContext;
  class CalculationContext;
  class Calculation_tailContext;
  class ComparisonContext;
  class Comparison_tailContext;
  class Additive_expressionContext;
  class Additive_tailContext;
  class Multiplicative_expressionContext;
  class Multiplicative_tailContext;
  class Exponential_termContext; 

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Terminating_expression_tailContext *terminating_expression_tail();
    antlr4::tree::TerminalNode *EOF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsContext* expressions();

  class  Terminating_expression_tailContext : public antlr4::ParserRuleContext {
  public:
    Terminating_expression_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminating_expression_tailContext* terminating_expression_tail();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CalculationContext *calculation();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  CalculationContext : public antlr4::ParserRuleContext {
  public:
    CalculationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparisonContext *comparison();
    Calculation_tailContext *calculation_tail();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CalculationContext* calculation();

  class  Calculation_tailContext : public antlr4::ParserRuleContext {
  public:
    Calculation_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICAL_OPERATOR();
    ComparisonContext *comparison();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Calculation_tailContext* calculation_tail();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Additive_expressionContext *additive_expression();
    Comparison_tailContext *comparison_tail();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonContext* comparison();

  class  Comparison_tailContext : public antlr4::ParserRuleContext {
  public:
    Comparison_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDITIVE_OPERATOR();
    Additive_expressionContext *additive_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_tailContext* comparison_tail();

  class  Additive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Additive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multiplicative_expressionContext *multiplicative_expression();
    Additive_tailContext *additive_tail();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_expressionContext* additive_expression();

  class  Additive_tailContext : public antlr4::ParserRuleContext {
  public:
    Additive_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLICATIVE_OPERATOR();
    Multiplicative_expressionContext *multiplicative_expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_tailContext* additive_tail();

  class  Multiplicative_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exponential_termContext *exponential_term();
    Multiplicative_tailContext *multiplicative_tail();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_expressionContext* multiplicative_expression();

  class  Multiplicative_tailContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_tailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPONENTIAL_OPERATOR();
    Exponential_termContext *exponential_term();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_tailContext* multiplicative_tail();

  class  Exponential_termContext : public antlr4::ParserRuleContext {
  public:
    Exponential_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exponential_termContext* exponential_term();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

