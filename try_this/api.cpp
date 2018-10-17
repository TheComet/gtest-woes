#include "api.hpp"
#include "gmock/gmock.h"

int run_tests(int* argc, char** argv) {
    testing::InitGoogleMock(argc, argv);
    return RUN_ALL_TESTS();
}

