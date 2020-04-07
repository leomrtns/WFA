/*
 *  Wavefront Alignments Algorithms
 *  Copyright (c) 2017 by Santiago Marco-Sola  <santiagomsola@gmail.com>
 *
 *  This file is part of Wavefront Alignments Algorithms.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * PROJECT: Wavefront Alignments Algorithms
 * AUTHOR(S): Santiago Marco-Sola <santiagomsola@gmail.com>
 * DESCRIPTION: Parasail library wrapper
 */

#ifndef BENCHMARK_PARASAIL
#define BENCHMARK_PARASAIL

#include "benchmark/benchmark_utils.h"

/*
 * Parasail
 */
void benchmark_parasail_nw_stripped(
    align_input_t* const align_input,
    affine_penalties_t* const penalties);
void benchmark_parasail_nw_scan(
    align_input_t* const align_input,
    affine_penalties_t* const penalties);
void benchmark_parasail_nw_diag(
    align_input_t* const align_input,
    affine_penalties_t* const penalties);
void benchmark_parasail_nw_banded(
    align_input_t* const align_input,
    affine_penalties_t* const penalties,
    const int bandwidth);

#endif /* BENCHMARK_PARASAIL */
