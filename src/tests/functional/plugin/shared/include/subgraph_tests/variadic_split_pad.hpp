// Copyright (C) 2018-2024 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "shared_test_classes/subgraph/variadic_split_pad.hpp"

namespace ov {
namespace test {

TEST_P(VariadicSplitPad, CompareWithRefs) {
    run();
};

}  // namespace test
}  // namespace ov
