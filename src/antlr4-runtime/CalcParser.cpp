
// Generated from /Users/kane/Projects/free-code-friday/antlr-calc-cpp/Calc.g4 by ANTLR 4.7.1


#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalcParser::CalcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ExpressionsContext ------------------------------------------------------------------

CalcParser::ExpressionsContext::ExpressionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::ExpressionContext* CalcParser::ExpressionsContext::expression() {
  return getRuleContext<CalcParser::ExpressionContext>(0);
}

CalcParser::Terminating_expression_tailContext* CalcParser::ExpressionsContext::terminating_expression_tail() {
  return getRuleContext<CalcParser::Terminating_expression_tailContext>(0);
}

tree::TerminalNode* CalcParser::ExpressionsContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}


size_t CalcParser::ExpressionsContext::getRuleIndex() const {
  return CalcParser::RuleExpressions;
}

antlrcpp::Any CalcParser::ExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExpressions(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExpressionsContext* CalcParser::expressions() {
  ExpressionsContext *_localctx = _tracker.createInstance<ExpressionsContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleExpressions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(28);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::OPEN_PAREN:
      case CalcParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(24);
        expression();
        setState(25);
        terminating_expression_tail();
        break;
      }

      case CalcParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(27);
        match(CalcParser::EOF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Terminating_expression_tailContext ------------------------------------------------------------------

CalcParser::Terminating_expression_tailContext::Terminating_expression_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Terminating_expression_tailContext::EOL() {
  return getToken(CalcParser::EOL, 0);
}

tree::TerminalNode* CalcParser::Terminating_expression_tailContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}


size_t CalcParser::Terminating_expression_tailContext::getRuleIndex() const {
  return CalcParser::RuleTerminating_expression_tail;
}

antlrcpp::Any CalcParser::Terminating_expression_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTerminating_expression_tail(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Terminating_expression_tailContext* CalcParser::terminating_expression_tail() {
  Terminating_expression_tailContext *_localctx = _tracker.createInstance<Terminating_expression_tailContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleTerminating_expression_tail);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    _la = _input->LA(1);
    if (!(_la == CalcParser::EOF

    || _la == CalcParser::EOL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CalcParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::CalculationContext* CalcParser::ExpressionContext::calculation() {
  return getRuleContext<CalcParser::CalculationContext>(0);
}

tree::TerminalNode* CalcParser::ExpressionContext::OPEN_PAREN() {
  return getToken(CalcParser::OPEN_PAREN, 0);
}

CalcParser::ExpressionContext* CalcParser::ExpressionContext::expression() {
  return getRuleContext<CalcParser::ExpressionContext>(0);
}

tree::TerminalNode* CalcParser::ExpressionContext::CLOSE_PAREN() {
  return getToken(CalcParser::CLOSE_PAREN, 0);
}


size_t CalcParser::ExpressionContext::getRuleIndex() const {
  return CalcParser::RuleExpression;
}

antlrcpp::Any CalcParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExpressionContext* CalcParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, CalcParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(32);
        calculation();
        break;
      }

      case CalcParser::OPEN_PAREN: {
        enterOuterAlt(_localctx, 2);
        setState(33);
        match(CalcParser::OPEN_PAREN);
        setState(34);
        expression();
        setState(35);
        match(CalcParser::CLOSE_PAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalculationContext ------------------------------------------------------------------

CalcParser::CalculationContext::CalculationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::ComparisonContext* CalcParser::CalculationContext::comparison() {
  return getRuleContext<CalcParser::ComparisonContext>(0);
}

CalcParser::Calculation_tailContext* CalcParser::CalculationContext::calculation_tail() {
  return getRuleContext<CalcParser::Calculation_tailContext>(0);
}


size_t CalcParser::CalculationContext::getRuleIndex() const {
  return CalcParser::RuleCalculation;
}

antlrcpp::Any CalcParser::CalculationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitCalculation(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::CalculationContext* CalcParser::calculation() {
  CalculationContext *_localctx = _tracker.createInstance<CalculationContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcParser::RuleCalculation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    comparison();
    setState(40);
    calculation_tail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Calculation_tailContext ------------------------------------------------------------------

CalcParser::Calculation_tailContext::Calculation_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Calculation_tailContext::LOGICAL_OPERATOR() {
  return getToken(CalcParser::LOGICAL_OPERATOR, 0);
}

CalcParser::ComparisonContext* CalcParser::Calculation_tailContext::comparison() {
  return getRuleContext<CalcParser::ComparisonContext>(0);
}


size_t CalcParser::Calculation_tailContext::getRuleIndex() const {
  return CalcParser::RuleCalculation_tail;
}

antlrcpp::Any CalcParser::Calculation_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitCalculation_tail(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Calculation_tailContext* CalcParser::calculation_tail() {
  Calculation_tailContext *_localctx = _tracker.createInstance<Calculation_tailContext>(_ctx, getState());
  enterRule(_localctx, 8, CalcParser::RuleCalculation_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::LOGICAL_OPERATOR: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        match(CalcParser::LOGICAL_OPERATOR);
        setState(43);
        comparison();
        break;
      }

      case CalcParser::EOF:
      case CalcParser::CLOSE_PAREN:
      case CalcParser::EOL: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

CalcParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::Additive_expressionContext* CalcParser::ComparisonContext::additive_expression() {
  return getRuleContext<CalcParser::Additive_expressionContext>(0);
}

CalcParser::Comparison_tailContext* CalcParser::ComparisonContext::comparison_tail() {
  return getRuleContext<CalcParser::Comparison_tailContext>(0);
}


size_t CalcParser::ComparisonContext::getRuleIndex() const {
  return CalcParser::RuleComparison;
}

antlrcpp::Any CalcParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ComparisonContext* CalcParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 10, CalcParser::RuleComparison);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    additive_expression();
    setState(48);
    comparison_tail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_tailContext ------------------------------------------------------------------

CalcParser::Comparison_tailContext::Comparison_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Comparison_tailContext::ADDITIVE_OPERATOR() {
  return getToken(CalcParser::ADDITIVE_OPERATOR, 0);
}

CalcParser::Additive_expressionContext* CalcParser::Comparison_tailContext::additive_expression() {
  return getRuleContext<CalcParser::Additive_expressionContext>(0);
}


size_t CalcParser::Comparison_tailContext::getRuleIndex() const {
  return CalcParser::RuleComparison_tail;
}

antlrcpp::Any CalcParser::Comparison_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitComparison_tail(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Comparison_tailContext* CalcParser::comparison_tail() {
  Comparison_tailContext *_localctx = _tracker.createInstance<Comparison_tailContext>(_ctx, getState());
  enterRule(_localctx, 12, CalcParser::RuleComparison_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::ADDITIVE_OPERATOR: {
        enterOuterAlt(_localctx, 1);
        setState(50);
        match(CalcParser::ADDITIVE_OPERATOR);
        setState(51);
        additive_expression();
        break;
      }

      case CalcParser::EOF:
      case CalcParser::CLOSE_PAREN:
      case CalcParser::LOGICAL_OPERATOR:
      case CalcParser::EOL: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

CalcParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::Multiplicative_expressionContext* CalcParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContext<CalcParser::Multiplicative_expressionContext>(0);
}

CalcParser::Additive_tailContext* CalcParser::Additive_expressionContext::additive_tail() {
  return getRuleContext<CalcParser::Additive_tailContext>(0);
}


size_t CalcParser::Additive_expressionContext::getRuleIndex() const {
  return CalcParser::RuleAdditive_expression;
}

antlrcpp::Any CalcParser::Additive_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAdditive_expression(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Additive_expressionContext* CalcParser::additive_expression() {
  Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, getState());
  enterRule(_localctx, 14, CalcParser::RuleAdditive_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    multiplicative_expression();
    setState(56);
    additive_tail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_tailContext ------------------------------------------------------------------

CalcParser::Additive_tailContext::Additive_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Additive_tailContext::MULTIPLICATIVE_OPERATOR() {
  return getToken(CalcParser::MULTIPLICATIVE_OPERATOR, 0);
}

CalcParser::Multiplicative_expressionContext* CalcParser::Additive_tailContext::multiplicative_expression() {
  return getRuleContext<CalcParser::Multiplicative_expressionContext>(0);
}


size_t CalcParser::Additive_tailContext::getRuleIndex() const {
  return CalcParser::RuleAdditive_tail;
}

antlrcpp::Any CalcParser::Additive_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAdditive_tail(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Additive_tailContext* CalcParser::additive_tail() {
  Additive_tailContext *_localctx = _tracker.createInstance<Additive_tailContext>(_ctx, getState());
  enterRule(_localctx, 16, CalcParser::RuleAdditive_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::MULTIPLICATIVE_OPERATOR: {
        enterOuterAlt(_localctx, 1);
        setState(58);
        match(CalcParser::MULTIPLICATIVE_OPERATOR);
        setState(59);
        multiplicative_expression();
        break;
      }

      case CalcParser::EOF:
      case CalcParser::CLOSE_PAREN:
      case CalcParser::LOGICAL_OPERATOR:
      case CalcParser::ADDITIVE_OPERATOR:
      case CalcParser::EOL: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

CalcParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::Exponential_termContext* CalcParser::Multiplicative_expressionContext::exponential_term() {
  return getRuleContext<CalcParser::Exponential_termContext>(0);
}

CalcParser::Multiplicative_tailContext* CalcParser::Multiplicative_expressionContext::multiplicative_tail() {
  return getRuleContext<CalcParser::Multiplicative_tailContext>(0);
}


size_t CalcParser::Multiplicative_expressionContext::getRuleIndex() const {
  return CalcParser::RuleMultiplicative_expression;
}

antlrcpp::Any CalcParser::Multiplicative_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_expression(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Multiplicative_expressionContext* CalcParser::multiplicative_expression() {
  Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CalcParser::RuleMultiplicative_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    exponential_term();
    setState(64);
    multiplicative_tail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_tailContext ------------------------------------------------------------------

CalcParser::Multiplicative_tailContext::Multiplicative_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Multiplicative_tailContext::EXPONENTIAL_OPERATOR() {
  return getToken(CalcParser::EXPONENTIAL_OPERATOR, 0);
}

CalcParser::Exponential_termContext* CalcParser::Multiplicative_tailContext::exponential_term() {
  return getRuleContext<CalcParser::Exponential_termContext>(0);
}


size_t CalcParser::Multiplicative_tailContext::getRuleIndex() const {
  return CalcParser::RuleMultiplicative_tail;
}

antlrcpp::Any CalcParser::Multiplicative_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_tail(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Multiplicative_tailContext* CalcParser::multiplicative_tail() {
  Multiplicative_tailContext *_localctx = _tracker.createInstance<Multiplicative_tailContext>(_ctx, getState());
  enterRule(_localctx, 20, CalcParser::RuleMultiplicative_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::EXPONENTIAL_OPERATOR: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        match(CalcParser::EXPONENTIAL_OPERATOR);
        setState(67);
        exponential_term();
        break;
      }

      case CalcParser::EOF:
      case CalcParser::CLOSE_PAREN:
      case CalcParser::LOGICAL_OPERATOR:
      case CalcParser::ADDITIVE_OPERATOR:
      case CalcParser::MULTIPLICATIVE_OPERATOR:
      case CalcParser::EOL: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exponential_termContext ------------------------------------------------------------------

CalcParser::Exponential_termContext::Exponential_termContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Exponential_termContext::NUMBER() {
  return getToken(CalcParser::NUMBER, 0);
}


size_t CalcParser::Exponential_termContext::getRuleIndex() const {
  return CalcParser::RuleExponential_term;
}

antlrcpp::Any CalcParser::Exponential_termContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExponential_term(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Exponential_termContext* CalcParser::exponential_term() {
  Exponential_termContext *_localctx = _tracker.createInstance<Exponential_termContext>(_ctx, getState());
  enterRule(_localctx, 22, CalcParser::RuleExponential_term);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(CalcParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalcParser::_decisionToDFA;
atn::PredictionContextCache CalcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalcParser::_atn;
std::vector<uint16_t> CalcParser::_serializedATN;

std::vector<std::string> CalcParser::_ruleNames = {
  "expressions", "terminating_expression_tail", "expression", "calculation", 
  "calculation_tail", "comparison", "comparison_tail", "additive_expression", 
  "additive_tail", "multiplicative_expression", "multiplicative_tail", "exponential_term"
};

std::vector<std::string> CalcParser::_literalNames = {
  "", "','", "':'", "';'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'", 
  "'+'", "'-'", "'*'", "'/'", "'^'", "'='", "'!'", "'!='", "'<'", "'>'", 
  "'<='", "'>='", "'&'", "'|'"
};

std::vector<std::string> CalcParser::_symbolicNames = {
  "", "COMMA", "COLON", "SEMI", "OPEN_PAREN", "CLOSE_PAREN", "OPEN_BRACKET", 
  "CLOSE_BRACKET", "OPEN_BRACE", "CLOSE_BRACE", "PERIOD", "PLUS", "DASH", 
  "STAR", "SLASH", "CARET", "EQUAL", "EXCLAMATION", "NOT_EQUAL", "LESS_THAN", 
  "GREATER_THAN", "LESSER_THAN_EQUAL", "GREATER_THAN_EQUAL", "AMPERSAND", 
  "OR", "NUMBER", "INTEGER", "FLOAT", "LOGICAL_OPERATOR", "COMPARITIVE_OPERATOR", 
  "ADDITIVE_OPERATOR", "MULTIPLICATIVE_OPERATOR", "EXPONENTIAL_OPERATOR", 
  "EOL"
};

dfa::Vocabulary CalcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalcParser::_tokenNames;

CalcParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x23, 0x4c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x1f, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x28, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x30, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x38, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x40, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x48, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x2, 0x2, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x2, 0x3, 0x3, 0x3, 0x23, 0x23, 0x2, 0x45, 0x2, 
    0x1e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x20, 0x3, 0x2, 0x2, 0x2, 0x6, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x29, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x16, 0x47, 0x3, 0x2, 0x2, 0x2, 0x18, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x5, 0x6, 0x4, 0x2, 0x1b, 0x1c, 0x5, 
    0x4, 0x3, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1f, 0x7, 0x2, 
    0x2, 0x3, 0x1e, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x9, 0x2, 0x2, 0x2, 
    0x21, 0x5, 0x3, 0x2, 0x2, 0x2, 0x22, 0x28, 0x5, 0x8, 0x5, 0x2, 0x23, 
    0x24, 0x7, 0x6, 0x2, 0x2, 0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 0x26, 
    0x7, 0x7, 0x2, 0x2, 0x26, 0x28, 0x3, 0x2, 0x2, 0x2, 0x27, 0x22, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x23, 0x3, 0x2, 0x2, 0x2, 0x28, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x5, 0xc, 0x7, 0x2, 0x2a, 0x2b, 0x5, 0xa, 0x6, 
    0x2, 0x2b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x1e, 0x2, 0x2, 
    0x2d, 0x30, 0x5, 0xc, 0x7, 0x2, 0x2e, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x5, 0x10, 0x9, 0x2, 0x32, 0x33, 0x5, 
    0xe, 0x8, 0x2, 0x33, 0xd, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x20, 
    0x2, 0x2, 0x35, 0x38, 0x5, 0x10, 0x9, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0xf, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x14, 0xb, 0x2, 0x3a, 
    0x3b, 0x5, 0x12, 0xa, 0x2, 0x3b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 
    0x7, 0x21, 0x2, 0x2, 0x3d, 0x40, 0x5, 0x14, 0xb, 0x2, 0x3e, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x3f, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x13, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x5, 0x18, 0xd, 
    0x2, 0x42, 0x43, 0x5, 0x16, 0xc, 0x2, 0x43, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x7, 0x22, 0x2, 0x2, 0x45, 0x48, 0x5, 0x18, 0xd, 0x2, 0x46, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x47, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x17, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 
    0x1b, 0x2, 0x2, 0x4a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1e, 0x27, 0x2f, 
    0x37, 0x3f, 0x47, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalcParser::Initializer CalcParser::_init;
