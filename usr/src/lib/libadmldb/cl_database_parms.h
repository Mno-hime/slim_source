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


#ifndef	_CL_DATABASE_PARMS_H
#define	_CL_DATABASE_PARMS_H


#define	DB_CLASS	"database"
#define	DB_CURR_CLASS_VERS	"2.1"

#define	DB_GET_ALIASES_MTHD	"get_aliases_entry"
#define	DB_GET_AUTO_HOME_MTHD	"get_auto_home_entry"
#define	DB_GET_BOOTPARAMS_MTHD	"get_bootparams_entry"
#define DB_GET_CLIENT_NAMESERVICE_MTHD "get_client_nameservice"
#define	DB_GET_CRED_MTHD	"get_cred_entry"
#define	DB_GET_ETHERS_MTHD	"get_ethers_entry"
#define	DB_GET_GROUP_MTHD	"get_groups_entry"
#define	DB_GET_GROUPS_MTHD	DB_GET_GROUP_MTHD
#define	DB_GET_HOSTS_MTHD	"get_hosts_entry"
#define	DB_GET_LOCALE_MTHD	"get_locale_entry"
#define	DB_GET_NETGROUP_MTHD	"get_netgroup_entry"
#define	DB_GET_NETMASKS_MTHD	"get_netmasks_entry"
#define	DB_GET_NETWORKS_MTHD	"get_networks_entry"
#define	DB_GET_PASSWD_MTHD	"get_passwd_entry"
#define	DB_GET_PROTOCOLS_MTHD	"get_protocols_entry"
#define	DB_GET_RPC_MTHD		"get_rpc_entry"
#define	DB_GET_SERVICES_MTHD	"get_services_entry"
#define	DB_GET_TIMEZONE_MTHD	"get_timezone_entry"
#define	DB_GET_POLICY_MTHD	"get_policy_entry"
#define	DB_LIST_ALIASES_MTHD	"list_aliases"
#define	DB_LIST_AUTO_HOME_MTHD	"list_auto_home"
#define	DB_LIST_BOOTPARAMS_MTHD	"list_bootparams"
#define	DB_LIST_CRED_MTHD	"list_cred"
#define	DB_LIST_ETHERS_MTHD	"list_ethers"
#define	DB_LIST_GROUP_MTHD	"list_groups"
#define	DB_LIST_GROUPS_MTHD	DB_LIST_GROUP_MTHD
#define	DB_LIST_HOSTS_MTHD	"list_hosts"
#define	DB_LIST_LOCALE_MTHD	"list_locale"
#define	DB_LIST_NETGROUP_MTHD	"list_netgroup"
#define	DB_LIST_NETMASKS_MTHD	"list_netmasks"
#define	DB_LIST_NETWORKS_MTHD	"list_networks"
#define	DB_LIST_PASSWD_MTHD	"list_passwd"
#define	DB_LIST_PROTOCOLS_MTHD	"list_protocols"
#define	DB_LIST_RPC_MTHD	"list_rpc"
#define	DB_LIST_SERVICES_MTHD	"list_services"
#define	DB_LIST_TIMEZONE_MTHD	"list_timezone"
#define	DB_LIST_POLICY_MTHD	"list_policy"
#define	DB_REMOVE_ALIASES_MTHD	"remove_aliases_entry"
#define	DB_REMOVE_AUTO_HOME_MTHD "remove_auto_home_entry"
#define DB_REMOVE_BOOTPARAMS_MTHD "remove_bootparams_entry"
#define	DB_REMOVE_CRED_MTHD	"remove_cred_entry"
#define DB_REMOVE_ETHERS_MTHD	"remove_ethers_entry"
#define	DB_REMOVE_GROUP_MTHD	"remove_groups_entry"
#define	DB_REMOVE_GROUPS_MTHD	DB_REMOVE_GROUP_MTHD
#define DB_REMOVE_HOSTS_MTHD	"remove_hosts_entry"
#define	DB_REMOVE_LOCALE_MTHD	"remove_locale_entry"
#define	DB_REMOVE_NETGROUP_MTHD	"remove_netgroup_entry"
#define DB_REMOVE_NETMASKS_MTHD	"remove_netmasks_entry"
#define	DB_REMOVE_NETWORKS_MTHD	"remove_networks_entry"
#define	DB_REMOVE_PASSWD_MTHD	"remove_passwd_entry"
#define	DB_REMOVE_PROTOCOLS_MTHD "remove_protocols_entry"
#define	DB_REMOVE_RPC_MTHD	"remove_rpc_entry"
#define	DB_REMOVE_SERVICES_MTHD	"remove_services_entry"
#define DB_REMOVE_TIMEZONE_MTHD	"remove_timezone_entry"
#define	DB_REMOVE_POLICY_MTHD	"remove_policy_entry"
#define	DB_SET_ALIASES_MTHD	"set_aliases_entry"
#define	DB_SET_AUTO_HOME_MTHD	"set_auto_home_entry"
#define	DB_SET_BOOTPARAMS_MTHD	"set_bootparams_entry"
#define	DB_SET_CRED_MTHD	"set_cred_entry"
#define	DB_SET_ETHERS_MTHD	"set_ethers_entry"
#define	DB_SET_GROUP_MTHD	"set_groups_entry"
#define	DB_SET_GROUPS_MTHD	DB_SET_GROUP_MTHD
#define	DB_SET_HOSTS_MTHD	"set_hosts_entry"
#define	DB_SET_LOCALE_MTHD	"set_locale_entry"
#define	DB_SET_NETGROUP_MTHD	"set_netgroup_entry"
#define	DB_SET_NETMASKS_MTHD	"set_netmasks_entry"
#define	DB_SET_NETWORKS_MTHD	"set_networks_entry"
#define	DB_SET_PASSWD_MTHD	"set_passwd_entry"
#define	DB_SET_PROTOCOLS_MTHD	"set_protocols_entry"
#define	DB_SET_RPC_MTHD		"set_rpc_entry"
#define	DB_SET_SERVICES_MTHD	"set_services_entry"
#define	DB_SET_TIMEZONE_MTHD	"set_timezone_entry"
#define	DB_SET_POLICY_MTHD	"set_policy_entry"

#define	DB_ADDFLAG_PAR		"addflag"
#define	DB_ALIAS_NAME_PAR	"alias_name"
#define DB_ALIASES_PAR		"aliases"
#define	DB_AUTH_TYPE_PAR	"auth_type"
#define	DB_AUTH_NAME_PAR	"auth_name"
#define	DB_COMMENT_PAR		"comment"
#define	DB_CREDNAME_PAR		"credname"
#define	DB_DISABLE_LOCKING_PAR	"disable_locking"
#define	DB_DOMAIN_PAR		"domain"
#define DB_ETHERADDR_PAR	"ether_addr"
#define	DB_EXPANSION_PAR	"expansion"
#define	DB_EXPIRE_PAR		"expire"
#define	DB_FLAG_PAR		"flag"
#define	DB_FS_PAR		"filesystems"
#define	DB_GCOS_PAR		"gcos"
#define	DB_GID_PAR		"gid"
#define	DB_GROUPNAME_PAR	"groupname"
#define	DB_HOSTNAME_PAR		"hostname"
#define	DB_INACTIVE_PAR		"inactive"
#define	DB_IPADDR_PAR		"ip_addr"
#define	DB_LASTCHANGED_PAR	"lastchanged"
#define	DB_LIST_SHADOW_PAR	"list_shadow"
#define	DB_LOCALE_PAR		"locale"
#define	DB_MAXIMUM_PAR		"maximum"
#define	DB_MEMBERS_PAR		"members"
#define	DB_MINIMUM_PAR		"minimum"
#define	DB_NAMESERVICE_PAR	"nameservice"
#define	DB_NETGROUP_PAR		"netgroup"
#define	DB_NETMASK_PAR		"netmask"
#define	DB_NETNAME_PAR		"netname"
#define	DB_NETNUM_PAR		"net_num"
#define	DB_NULL_PAR		"null"
#define	DB_OPTIONS_PAR		"options"
#define	DB_PASSWD_PAR		"passwd"
#define	DB_PATH_PAR		"path"
#define	DB_PRIVATE_PAR		"private"
#define	DB_PROTOCOL_NAME_PAR	"protocol_name"
#define	DB_PROTOCOL_NUM_PAR	"protocol_num"
#define	DB_PUBLIC_PAR		"public"
#define	DB_RPC_NAME_PAR		"rpc_name"
#define	DB_RPC_NUM_PAR		"rpc_num"
#define	DB_SERVICE_NAME_PAR	"service_name"
#define	DB_SERVICE_PORT_PAR	"service_port"
#define	DB_SHADOW_PAR		"shadow"
#define	DB_SHELL_PAR		"shell"
#define	DB_SORT_LIST_PAR	"sort_list"
#define	DB_SRCH_RES_PAR		"searchresult"
#define	DB_TIMEZONE_PAR		"timezone"
#define	DB_TABLE_NAME_PAR	"table_name"
#define	DB_POLICY_PAR		"policy"
#define	DB_POLICY_VAL_PAR	"value"
#define	DB_UFS_TABLE_PAR	"ufs_table"
#define	DB_UID_PAR		"uid"
#define	DB_USERNAME_PAR		"username"
#define	DB_WARN_PAR		"warn"

#define	DB_OLD_ALIAS_NAME_PAR	"old_alias_name"
#define	DB_OLD_AUTH_NAME_PAR	"old_auth_name"
#define	DB_OLD_AUTH_TYPE_PAR	"old_auth_type"
#define	DB_OLD_CREDNAME_PAR	"old_credname"
#define	DB_OLD_ETHERADDR_PAR	"old_etheraddr"
#define	DB_OLD_GID_PAR		"old_gid"
#define	DB_OLD_GROUPNAME_PAR	"old_groupname"
#define	DB_OLD_HOSTNAME_PAR	"old_hostname"
#define	DB_OLD_IPADDR_PAR	"old_ipaddr"
#define	DB_OLD_NETGROUP_PAR	"old_netgroup"
#define	DB_OLD_NETNAME_PAR	"old_netname"
#define	DB_OLD_NETNUM_PAR	"old_netnum"
#define	DB_OLD_PROTOCOL_NAME_PAR	"old_protoname"
#define	DB_OLD_PROTOCOL_NUM_PAR	"old_protonum"
#define	DB_OLD_RPC_NAME_PAR	"old_rpcname"
#define	DB_OLD_RPC_NUM_PAR	"old_rpcnum"
#define	DB_OLD_SERVICE_NAME_PAR	"old_servname"
#define	DB_OLD_SERVICE_PORT_PAR "old_servport"
#define	DB_OLD_UID_PAR		"old_uid"
#define	DB_OLD_USERNAME_PAR	"old_username"
#define	DB_OLD_POLICY_PAR	"old_policy"

#define	DB_VAL_NS_ALL		"all"
#define	DB_VAL_NS_NIS		"nis"
#define	DB_VAL_NS_NIS_PLUS	"nis_plus"
#define DB_VAL_NS_UFS		"ufs"

#define	DB_VAL_SRCH_FOUND	"found"
#define	DB_VAL_SRCH_NOTFOUND	"notfound"

#define	DB_VAL_ADDONLY		"addonly"
#define	DB_VAL_ADD_OVERWRITE	"add_overwrite"
#define	DB_VAL_OVERWRITEONLY	"overwrite"

#define	DB_VAL_TRUE		"true"
#define	DB_VAL_FALSE		"false"
#endif	/* _CL_DATABASE_PARMS_H */
