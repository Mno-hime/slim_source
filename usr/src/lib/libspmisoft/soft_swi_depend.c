/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2007 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */



#include "spmisoft_api.h"
#include "sw_swi.h"

Depend *
get_depend_pkgs(void)
{
	Depend	*d;

	enter_swlib("get_depend_pkgs");
	d = swi_get_depend_pkgs();
	exit_swlib();
	return (d);
}

boolean_t
check_sw_depends(void)
{
	int	i;

	enter_swlib("check_sw_depends");
	i = swi_check_sw_depends();
	exit_swlib();
	return (i);
}
