//
// Created by Ivan Shynkarenka on 09.07.2015.
//

#ifndef CPPBENCHMARK_ENVIRONMENT_H
#define CPPBENCHMARK_ENVIRONMENT_H

#include <ctime>

namespace CppBenchmark {

class Environment
{
public:
    Environment() = delete;
    Environment(const Environment&) = delete;
    Environment(Environment&&) = delete;
    ~Environment() = delete;

    Environment& operator=(const Environment&) = delete;
    Environment& operator=(Environment&&) = delete;

    static bool Is32BitOS();
    static bool Is64BitOS();
    static bool Is32BitProcess();
    static bool Is64BitProcess();
    static bool IsDebug();
    static bool IsRelease();

    static time_t Timestamp();
};

} // namespace CppBenchmark

#endif // CPPBENCHMARK_ENVIRONMENT_H