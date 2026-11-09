#pragma once

#include "qopt/transformation.hpp"
#include "qopt/circuit.hpp"

#include <vector>

namespace qopt{
    struct OptimizationResult{
        Circuit optimized;
        std::vector<Transformation> history;
    };

    OptimizationResult optimize(const Circuit& circuit);
}