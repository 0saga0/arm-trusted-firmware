/*
 * Copyright (c) 2018-2020, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* Helper functions to offer easier navigation of Device Tree Blob */

#ifndef FDT_WRAPPERS_H
#define FDT_WRAPPERS_H

/* Number of cells, given total length in bytes. Each cell is 4 bytes long */
#define NCELLS(len) ((len) / 4U)

int fdtw_read_cells(const void *dtb, int node, const char *prop,
		unsigned int cells, void *value);
int fdt_read_uint32_array(const void *dtb, int node, const char *prop_name,
			  unsigned int cells, uint32_t *value);
int fdtw_read_string(const void *dtb, int node, const char *prop,
		char *str, size_t size);
int fdtw_write_inplace_cells(void *dtb, int node, const char *prop,
		unsigned int cells, void *value);
int fdtw_read_bytes(const void *dtb, int node, const char *prop,
		unsigned int length, void *value);
int fdtw_write_inplace_bytes(void *dtb, int node, const char *prop,
		unsigned int length, const void *data);

#endif /* FDT_WRAPPERS_H */
