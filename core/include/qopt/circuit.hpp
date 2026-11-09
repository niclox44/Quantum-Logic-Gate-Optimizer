#pragma once

#include "qopt/operation.hpp"

#include <vector>

namespace qopt{
    struct Circuit{
        std::size_t num_qubits;
        std::vector<Operation> operations;
    };
}