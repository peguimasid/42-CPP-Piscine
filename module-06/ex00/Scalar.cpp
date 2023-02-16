#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &other) {
  (void)other;
}

Scalar &Scalar::operator=(const Scalar &other) {
  (void)other;
  return *this;
}

Scalar::~Scalar() {}

void Scalar::convert(const std::string &literal) {
  std::string charValue = "";
  int intValue = 0;
  float floatValue = 0.0f;
  double doubleValue = 0.0;

  if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) {
    charValue = literal[0];
    std::cout << "char: " << charValue << std::endl;
    std::cout << "int: " << static_cast<int>(charValue[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(charValue[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(charValue[0]) << ".0" << std::endl;
    return;
  }

  intValue = std::atoi(literal.c_str());

  if (literal[literal.size() - 1] == 'f') {
    floatValue = std::atof(literal.c_str());
    doubleValue = static_cast<double>(floatValue);
  } else {
    doubleValue = std::atof(literal.c_str());
    floatValue = static_cast<float>(doubleValue);
  }

  if (isPseudoLiteral(literal)) {
    charValue = "impossible";
  }

  if (charValue.empty() && !std::isprint(intValue)) {
    charValue = "Non displayable";
  }

  if (charValue.empty() && std::isprint(intValue)) {
    charValue = "'";
    charValue += static_cast<char>(intValue);
    charValue += "'";
  }

  std::cout << "char: " << charValue << std::endl;

  if (charValue == "impossible") {
    std::cout << "int: impossible" << std::endl;
  } else {
    std::cout << "int: " << intValue << std::endl;
  }

  if (charValue == "impossible" && floatValue == 0) {
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
    return;
  }

  if (charValue != "impossible" && floatValue - static_cast<int>(floatValue) == 0) {
    std::cout << "float: " << floatValue << ".0f" << std::endl;
    std::cout << "double: " << doubleValue << ".0" << std::endl;
    return;
  }

  std::cout << "float: " << floatValue << "f" << std::endl;
  std::cout << "double: " << doubleValue << std::endl;
}

bool isPseudoLiteral(const std::string &literal) {
  std::string pseudoLiterals[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

  for (int i = 0; i < 6; i++) {
    if (literal == pseudoLiterals[i]) {
      return true;
    }
  }

  return false;
}
