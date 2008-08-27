#
# CDDL HEADER START
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License (the "License").
# You may not use this file except in compliance with the License.
#
# You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
# or http://www.opensolaris.org/os/licensing.
# See the License for the specific language governing permissions
# and limitations under the License.
#
# When distributing Covered Code, include this CDDL HEADER in each
# file and include the License file at usr/src/OPENSOLARIS.LICENSE.
# If applicable, add the following below this CDDL HEADER, with the
# fields enclosed by brackets "[]" replaced with your own identifying
# information: Portions Copyright [yyyy] [name of copyright owner]
#
# CDDL HEADER END
#
# Copyright 2008 Sun Microsystems, Inc.  All rights reserved.
# Use is subject to license terms.

# =============================================================================
# =============================================================================
# Module containing validator methods.
# =============================================================================
# =============================================================================

from osol_install.TreeAcc import TreeAcc, TreeAccError
from osol_install.install_utils import comma_ws_split
from osol_install.DC_defs import LOCALE_LIST
import string

# =============================================================================
class ValidatorModule:
	"""Module containing validator methods, called by methods in the
	DefValProc.py module on the direction of the defval-manifest.

	Each method in this class takes a TreeAccNode of the node to validate,
	and returns True if the node validates, or False if it doesn't.

	Note that through the node passed in, the method has access to the whole
	tree.  This allows the method to scan the tree for other relevant nodes
	and check their characteristics (in case, for example, the node being
	checked needs to have a certain value based on an attribute of a
	different node).
	"""
# =============================================================================

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_abs_path(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns True if the path starts with a /.
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		return (node.get_value()[0] == "/")

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_wildcard(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns True if disallowed_chars are found in the node's value.
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		disallowed_chars = "*%?@[]{}|><()#$\"\'\\"
		value = node.get_value()
		for i in range(len(disallowed_chars)):
			if (value.find(disallowed_chars[i:i+1]) != -1):
				return True
		return False

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_zero_thru_nine_val(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns True if the node string is a numeric value between 0..9.
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		try:
			value = int(node.get_value())
		except Exception:
			return False
		return (0 <= value <= 9)

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_locale_available(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns true if the locale specified by the node's value is available
	# per the "img_params/locale_list".
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		checkthis = node.get_value().strip()
		tree = node.get_tree()
		locale_node = tree.find_node(LOCALE_LIST)[0]
		locales = comma_ws_split(locale_node.get_value())
		for i in range(len(locales)):
			if (checkthis == locales[i].strip()):
				return True
		return False

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_non_neg_float(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns True if the node's string represents a non-negative floating
	# point number.
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		try:
			value = float(node.get_value())
		except Exception:
			return False
		return (0.0 <= value)

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_hostnameOK(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns True if the node's string conforms to a valid hostname.
	# Valid hostnames are <= 256 chars, and made up only of alpha-numeric
	# characters, dashes and periods.  Two periods in a row are not allowed.
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		value = node.get_value()
		if (len(value) > 256):	# XXX use MAXHOSTNAMELEN <netdb.h>
			return False
		if (value.find("..") != -1):
			return False
		return (len(value.lstrip(
		    string.ascii_letters + string.digits + "-" + ".")) == 0)

	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	def is_unique(self, node):
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	# Returns True if the node's string value is unique among all nodes
	# which match the same nodepath.
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		count = 0
		value = node.get_value()
		tree = node.get_tree()
		path = node.get_path()
		nodepath_matches = tree.find_node(path)
		for i in range(len(nodepath_matches)):
			if (nodepath_matches[i].get_value() == value):
				count += 1
		return (count == 1)
