/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#include "mpiimpl.h"

#include "tsp_gentran.h"

/* instantiate alltoallv linear algorithms for the gentran transport */
#include "ineighbor_alltoallv_tsp_linear_algos_prototypes.h"
#include "ineighbor_alltoallv_tsp_linear_algos.h"
#include "ineighbor_alltoallv_tsp_linear_algos_undef.h"

#include "tsp_undef.h"
