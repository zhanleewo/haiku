/*
 * Copyright 2006-2011, Haiku, Inc. All Rights Reserved.
 * Distributed under the terms of the MIT License.
 *
 * Authors:
 *		Alexander von Gluck, kallisti5@unixzen.com
 */


#include <create_display_modes.h>
#include <ddc.h>
#include <edid.h>


status_t create_mode_list(void);
status_t mode_sanity_check(display_mode *mode);
