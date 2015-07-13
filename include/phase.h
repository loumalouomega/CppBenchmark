//
// Created by Ivan Shynkarenka on 02.07.2015.
//

#ifndef CPPBENCHMARK_PHASE_H
#define CPPBENCHMARK_PHASE_H

#include <memory>
#include <string>

#include "phase_metrics.h"

namespace CppBenchmark {

class PhaseScope;

class Phase
{
public:
    virtual const std::string& name() const = 0;
    virtual const PhaseMetrics& metrics() const = 0;

    virtual std::shared_ptr<Phase> Start(const std::string& phase) = 0;
    virtual void Stop() = 0;

    virtual std::shared_ptr<PhaseScope> Scope(const std::string& phase) = 0;
};

} // namespace CppBenchmark

#endif // CPPBENCHMARK_PHASE_H