#pragma once

#include "qopt/circuit.hpp"

#include <string>
#include <vector>

namespace qopt{
    struct Transformation{
        std::string rule;
        std::string explanation;
        std::vector<std::size_t> affected_operations_ids;
        Circuit after;
        Circuit before;
    };
}