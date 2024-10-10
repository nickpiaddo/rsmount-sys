// Copyright (c) 2023 Nick Piaddo
// SPDX-License-Identifier: Apache-2.0 OR MIT

#include <libmount/libmount.h>

#define VERSION2(M, m, p) RUST_MOUNT_VERSION_ ## M ## m ## p
#define VERSION(M, m, p) VERSION2(M, m, p)

#if defined(LIBMOUNT_MAJOR_VERSION) && defined (LIBMOUNT_MINOR_VERSION) && defined (LIBMOUNT_PATCH_VERSION)
VERSION(LIBMOUNT_MAJOR_VERSION, LIBMOUNT_MINOR_VERSION, LIBMOUNT_PATCH_VERSION)
#endif
