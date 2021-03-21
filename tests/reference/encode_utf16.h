#pragma once

#include <cstdint>

namespace simdutf::tests::reference::utf16 {

  // returns whether the value can be represented in the UTF-16
  bool valid_value(uint32_t value);

  // Encodes the value using either one or two words (returns 1 or 2 respectively)
  // Returns 0 if the value cannot be encoded
  int encode(uint32_t value, char16_t& W1, char16_t& W2);

} // namespace utf16