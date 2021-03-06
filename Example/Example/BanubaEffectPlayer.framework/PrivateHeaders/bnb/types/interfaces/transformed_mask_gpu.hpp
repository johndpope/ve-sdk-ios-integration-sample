/// \file
/// \addtogroup Types
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from types.djinni

#pragma once

#include "bnb/types/interfaces/transformed_mask.hpp"
#include <cstdint>
#include <utility>

namespace bnb { namespace interfaces {

struct transformed_mask_gpu final {
    transformed_mask meta;
    int32_t mask;

    transformed_mask_gpu(transformed_mask meta_,
                         int32_t mask_)
    : meta(std::move(meta_))
    , mask(std::move(mask_))
    {}
};

} }  // namespace bnb::interfaces
/// @}

