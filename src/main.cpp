#include <iostream>
#include "template.h"
#include "template_config.h"

int main(int argc, char** argv) {
  std::cout << "Hello, world!" << std::endl;
  std::cout << "Version: " << TEMPLATE_VERSION_MAJOR << "."
            << TEMPLATE_VERSION_MINOR << "." << TEMPLATE_VERSION_PATCH
            << std::endl;

  Template foo;
  foo.a = 1;
  foo.b = 2;
  std::cout << "foo: a == " << foo.a << ", b == " << foo.b << ", a+b == "
            << foo.sum() << std::endl;
  return 0;
}
