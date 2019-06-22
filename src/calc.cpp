#include <iostream>

#include "antlr4-runtime.h"

#include "antlr4-runtime/CalcLexer.h"
#include "antlr4-runtime/CalcParser.h"
#include "antlr4-runtime/CalcVisitor.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char *argv[])
{
  cout << "Everything found";

  // ANTLRInputStream input(stream);
  // SceneLexer lexer(&input);
  // CommonTokenStream tokens(&lexer);
  // SceneParser parser(&tokens);

  // SceneParser::FileContext* tree = parser.file();

  // calcVisitor visitor;
  // Calc calc = visitor.visitFile(tree);
  // calc.call();

  return 0;
}