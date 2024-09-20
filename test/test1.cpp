#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

#include <cstdlib>
#include <ctime>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
  std::srand(std::time(0));
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size);
  int num1 = fuzzed_data.ConsumeIntegral<int>();
  int num2 = fuzzed_data.ConsumeIntegral<int>();
  int i = std::rand() % 4;
  char ops[] = {'+', '-', '*', '/'};
  char op = ops[i];
  std::string c = fuzzed_data.ConsumeRandomLengthString();

  calculator(num1, op, num2);
}
