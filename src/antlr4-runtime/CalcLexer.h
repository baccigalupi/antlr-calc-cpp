
// Generated from /Users/kane/Projects/free-code-friday/antlr-calc-cpp/Calc.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CalcLexer : public antlr4::Lexer {
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

  CalcLexer(antlr4::CharStream *input);
  ~CalcLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

