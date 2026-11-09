#pragma once

#include <vector>

namespace qopt{

    enum class GateType{
        H,
        X,
        CX
    };

    struct Operation{
        std::size_t id;
        GateType type;
        std::vector<std::size_t> qubits;
    };

}