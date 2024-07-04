#pragma once

#include <string>

namespace ExampleNamespace {

class ExampleClass {

public:
  ExampleClass();
  const int test(int f, std::string t);
  const int other(int f, std::string t) const;
  static void oki(int f, int b);

private:
  int a;
  void test();

public:
  int test(int a, int b);
  int oki(int a);
};

void abcdef(int ok);
} // namespace ExampleNamespace
std::string int_fn(int i);
