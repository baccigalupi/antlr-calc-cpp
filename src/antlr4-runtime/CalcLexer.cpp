
// Generated from /Users/kane/Projects/free-code-friday/antlr-calc-cpp/Calc.g4 by ANTLR 4.7.1


#include "CalcLexer.h"


using namespace antlr4;


CalcLexer::CalcLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalcLexer::~CalcLexer() {
  delete _interpreter;
}

std::string CalcLexer::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& CalcLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& CalcLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& CalcLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& CalcLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> CalcLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& CalcLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> CalcLexer::_decisionToDFA;
atn::PredictionContextCache CalcLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalcLexer::_atn;
std::vector<uint16_t> CalcLexer::_serializedATN;

std::vector<std::string> CalcLexer::_ruleNames = {
  u8"COMMA", u8"COLON", u8"SEMI", u8"OPEN_PAREN", u8"CLOSE_PAREN", u8"OPEN_BRACKET", 
  u8"CLOSE_BRACKET", u8"OPEN_BRACE", u8"CLOSE_BRACE", u8"PERIOD", u8"PLUS", 
  u8"DASH", u8"STAR", u8"SLASH", u8"CARET", u8"EQUAL", u8"EXCLAMATION", 
  u8"NOT_EQUAL", u8"LESS_THAN", u8"GREATER_THAN", u8"LESSER_THAN_EQUAL", 
  u8"GREATER_THAN_EQUAL", u8"AMPERSAND", u8"OR", u8"NUMBER", u8"INTEGER", 
  u8"INTEGER_START", u8"ALL_NUMERIC", u8"FLOAT", u8"LOGICAL_OPERATOR", u8"COMPARITIVE_OPERATOR", 
  u8"ADDITIVE_OPERATOR", u8"MULTIPLICATIVE_OPERATOR", u8"EXPONENTIAL_OPERATOR", 
  u8"EOL"
};

std::vector<std::string> CalcLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> CalcLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> CalcLexer::_literalNames = {
  "", u8"','", u8"':'", u8"';'", u8"'('", u8"')'", u8"'['", u8"']'", u8"'{'", 
  u8"'}'", u8"'.'", u8"'+'", u8"'-'", u8"'*'", u8"'/'", u8"'^'", u8"'='", 
  u8"'!'", u8"'!='", u8"'<'", u8"'>'", u8"'<='", u8"'>='", u8"'&'", u8"'|'"
};

std::vector<std::string> CalcLexer::_symbolicNames = {
  "", u8"COMMA", u8"COLON", u8"SEMI", u8"OPEN_PAREN", u8"CLOSE_PAREN", u8"OPEN_BRACKET", 
  u8"CLOSE_BRACKET", u8"OPEN_BRACE", u8"CLOSE_BRACE", u8"PERIOD", u8"PLUS", 
  u8"DASH", u8"STAR", u8"SLASH", u8"CARET", u8"EQUAL", u8"EXCLAMATION", 
  u8"NOT_EQUAL", u8"LESS_THAN", u8"GREATER_THAN", u8"LESSER_THAN_EQUAL", 
  u8"GREATER_THAN_EQUAL", u8"AMPERSAND", u8"OR", u8"NUMBER", u8"INTEGER", 
  u8"FLOAT", u8"LOGICAL_OPERATOR", u8"COMPARITIVE_OPERATOR", u8"ADDITIVE_OPERATOR", 
  u8"MULTIPLICATIVE_OPERATOR", u8"EXPONENTIAL_OPERATOR", u8"EOL"
};

dfa::Vocabulary CalcLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalcLexer::_tokenNames;

CalcLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x23, 0xb4, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 
    0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 
    0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 
    0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 
    0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 
    0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 
    0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x7f, 0xa, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x84, 0xa, 0x1b, 0xc, 
    0x1b, 0xe, 0x1b, 0x87, 0xb, 0x1b, 0x5, 0x1b, 0x89, 0xa, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x91, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x94, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x7, 0x1e, 0x98, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x9b, 0xb, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x9f, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0xa7, 0xa, 0x20, 0x3, 
    0x21, 0x3, 0x21, 0x5, 0x21, 0xab, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 
    0x22, 0xaf, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x2, 
    0x2, 0x25, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
    0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 
    0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 0x23, 0x13, 0x25, 0x14, 0x27, 
    0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 0x18, 0x2f, 0x19, 0x31, 0x1a, 0x33, 
    0x1b, 0x35, 0x1c, 0x37, 0x2, 0x39, 0x2, 0x3b, 0x1d, 0x3d, 0x1e, 0x3f, 
    0x1f, 0x41, 0x20, 0x43, 0x21, 0x45, 0x22, 0x47, 0x23, 0x3, 0x2, 0x3, 
    0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0x2, 0xbe, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x3, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x5, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x7, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x9, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xb, 0x51, 0x3, 0x2, 0x2, 0x2, 0xd, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0xf, 0x55, 0x3, 0x2, 0x2, 0x2, 0x11, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x59, 0x3, 0x2, 0x2, 0x2, 0x15, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x17, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x19, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x1f, 0x65, 0x3, 0x2, 0x2, 0x2, 0x21, 0x67, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x25, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x27, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x29, 0x70, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x33, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x88, 0x3, 0x2, 0x2, 0x2, 0x37, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x3f, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x41, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0xae, 0x3, 0x2, 0x2, 0x2, 0x45, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x2e, 
    0x2, 0x2, 0x4a, 0x4, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x3c, 0x2, 
    0x2, 0x4c, 0x6, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x3d, 0x2, 0x2, 
    0x4e, 0x8, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x2a, 0x2, 0x2, 0x50, 
    0xa, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x2b, 0x2, 0x2, 0x52, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x5d, 0x2, 0x2, 0x54, 0xe, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x5f, 0x2, 0x2, 0x56, 0x10, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x58, 0x7, 0x7d, 0x2, 0x2, 0x58, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5a, 0x7, 0x7f, 0x2, 0x2, 0x5a, 0x14, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5c, 0x7, 0x30, 0x2, 0x2, 0x5c, 0x16, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5e, 0x7, 0x2d, 0x2, 0x2, 0x5e, 0x18, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x7, 0x2f, 0x2, 0x2, 0x60, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 
    0x2c, 0x2, 0x2, 0x62, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x31, 
    0x2, 0x2, 0x64, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x60, 0x2, 
    0x2, 0x66, 0x20, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x3f, 0x2, 0x2, 
    0x68, 0x22, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x23, 0x2, 0x2, 0x6a, 
    0x24, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x23, 0x2, 0x2, 0x6c, 0x6d, 
    0x7, 0x3f, 0x2, 0x2, 0x6d, 0x26, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 
    0x3e, 0x2, 0x2, 0x6f, 0x28, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x40, 
    0x2, 0x2, 0x71, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x3e, 0x2, 
    0x2, 0x73, 0x74, 0x7, 0x3f, 0x2, 0x2, 0x74, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x76, 0x7, 0x40, 0x2, 0x2, 0x76, 0x77, 0x7, 0x3f, 0x2, 0x2, 0x77, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x28, 0x2, 0x2, 0x79, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x7e, 0x2, 0x2, 0x7b, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x7f, 0x5, 0x35, 0x1b, 0x2, 0x7d, 0x7f, 0x5, 0x3b, 
    0x1e, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x34, 0x3, 0x2, 0x2, 0x2, 0x80, 0x89, 0x7, 0x32, 0x2, 0x2, 
    0x81, 0x85, 0x5, 0x37, 0x1c, 0x2, 0x82, 0x84, 0x5, 0x39, 0x1d, 0x2, 
    0x83, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x81, 0x3, 0x2, 0x2, 0x2, 0x89, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x4, 0x33, 0x3b, 0x2, 0x8b, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8d, 0x4, 0x32, 0x3b, 0x2, 0x8d, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x92, 0x5, 0x39, 0x1d, 0x2, 0x8f, 0x91, 0x5, 0x39, 0x1d, 0x2, 
    0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x99, 0x7, 
    0x30, 0x2, 0x2, 0x96, 0x98, 0x5, 0x39, 0x1d, 0x2, 0x97, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9f, 0x5, 0x2f, 0x18, 0x2, 0x9d, 
    0x9f, 0x5, 0x31, 0x19, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa7, 0x5, 
    0x21, 0x11, 0x2, 0xa1, 0xa7, 0x5, 0x25, 0x13, 0x2, 0xa2, 0xa7, 0x5, 
    0x27, 0x14, 0x2, 0xa3, 0xa7, 0x5, 0x29, 0x15, 0x2, 0xa4, 0xa7, 0x5, 
    0x2b, 0x16, 0x2, 0xa5, 0xa7, 0x5, 0x2d, 0x17, 0x2, 0xa6, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xab, 0x5, 0x17, 0xc, 0x2, 0xa9, 0xab, 0x5, 0x19, 0xd, 0x2, 0xaa, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 0x5, 0x1b, 0xe, 0x2, 0xad, 0xaf, 0x5, 
    0x1d, 0xf, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0x44, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x1f, 0x10, 
    0x2, 0xb1, 0x46, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x9, 0x2, 0x2, 0x2, 
    0xb3, 0x48, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2, 0x7e, 0x85, 0x88, 0x92, 0x99, 
    0x9e, 0xa6, 0xaa, 0xae, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalcLexer::Initializer CalcLexer::_init;
