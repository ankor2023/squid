
/*
 * $Id: enums.h,v 1.111 1998/07/22 20:53:55 wessels Exp $
 *
 *
 * SQUID Internet Object Cache  http://squid.nlanr.net/Squid/
 * ----------------------------------------------------------
 *
 *  Squid is the result of efforts by numerous individuals from the
 *  Internet community.  Development is led by Duane Wessels of the
 *  National Laboratory for Applied Network Research and funded by the
 *  National Science Foundation.  Squid is Copyrighted (C) 1998 by
 *  Duane Wessels and the University of California San Diego.  Please
 *  see the COPYRIGHT file for full details.  Squid incorporates
 *  software developed and/or copyrighted by other sources.  Please see
 *  the CREDITS file for full details.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 */

typedef enum {
    LOG_TAG_NONE,
    LOG_TCP_HIT,
    LOG_TCP_MISS,
    LOG_TCP_REFRESH_HIT,
    LOG_TCP_REFRESH_FAIL_HIT,
    LOG_TCP_REFRESH_MISS,
    LOG_TCP_CLIENT_REFRESH_MISS,
    LOG_TCP_IMS_HIT,
    LOG_TCP_IMS_MISS,
    LOG_TCP_SWAPFAIL_MISS,
    LOG_TCP_NEGATIVE_HIT,
    LOG_TCP_MEM_HIT,
    LOG_TCP_DENIED,
    LOG_UDP_HIT,
    LOG_UDP_MISS,
    LOG_UDP_DENIED,
    LOG_UDP_INVALID,
    LOG_UDP_MISS_NOFETCH,
    LOG_ICP_QUERY,
    LOG_TYPE_MAX
} log_type;

typedef enum {
    ERR_NONE,
    ERR_READ_TIMEOUT,
    ERR_LIFETIME_EXP,
    ERR_READ_ERROR,
    ERR_WRITE_ERROR,
    ERR_CLIENT_ABORT,
    ERR_CONNECT_FAIL,
    ERR_INVALID_REQ,
    ERR_UNSUP_REQ,
    ERR_INVALID_URL,
    ERR_SOCKET_FAILURE,
    ERR_DNS_FAIL,
    ERR_CANNOT_FORWARD,
    ERR_FORWARDING_DENIED,
    ERR_NO_RELAY,
    ERR_ZERO_SIZE_OBJECT,
    ERR_FTP_DISABLED,
    ERR_FTP_FAILURE,
    ERR_URN_RESOLVE,
    ERR_ACCESS_DENIED,
    ERR_CACHE_ACCESS_DENIED,
    ERR_CACHE_MGR_ACCESS_DENIED,
    ERR_SQUID_SIGNATURE,	/* not really an error */
    ERR_FTP_PUT_CREATED,	/* !error,a note that the file was created */
    ERR_FTP_PUT_MODIFIED,	/* modified, !created */
    ERR_FTP_PUT_ERROR,
    ERR_ONLY_IF_CACHED_MISS,	/* failure to satisfy only-if-cached request */
    ERR_MAX
} err_type;

typedef enum {
    ACL_NONE,
    ACL_SRC_IP,
    ACL_DST_IP,
    ACL_SRC_DOMAIN,
    ACL_DST_DOMAIN,
    ACL_SRC_DOM_REGEX,
    ACL_DST_DOM_REGEX,
    ACL_TIME,
    ACL_URLPATH_REGEX,
    ACL_URL_REGEX,
    ACL_URL_PORT,
    ACL_USER,
    ACL_PROTO,
    ACL_METHOD,
    ACL_BROWSER,
    ACL_PROXY_AUTH,
    ACL_SRC_ASN,
    ACL_DST_ASN,
    ACL_SRC_ARP,
    ACL_SNMP_COMM,
    ACL_NETDB_SRC_RTT,
    ACL_ENUM_MAX
} squid_acl;

typedef enum {
    ACL_LOOKUP_NONE,
    ACL_LOOKUP_NEEDED,
    ACL_LOOKUP_PENDING,
    ACL_LOOKUP_DONE
} acl_lookup_state;

enum {
    FD_NONE,
    FD_LOG,
    FD_FILE,
    FD_SOCKET,
    FD_PIPE,
    FD_UNKNOWN
};

enum {
    FD_READ,
    FD_WRITE
};

enum {
    FD_CLOSE,
    FD_OPEN
};

enum {
    FQDN_CACHED,
    FQDN_NEGATIVE_CACHED,
    FQDN_PENDING,		/* waiting to be dispatched */
    FQDN_DISPATCHED		/* waiting for reply from dnsserver */
};
typedef unsigned int fqdncache_status_t;

enum {
    IP_CACHED,
    IP_NEGATIVE_CACHED,
    IP_PENDING,			/* waiting to be dispatched */
    IP_DISPATCHED		/* waiting for reply from dnsserver */
};
typedef unsigned int ipcache_status_t;

typedef enum {
    PEER_NONE,
    PEER_SIBLING,
    PEER_PARENT,
    PEER_MULTICAST
} peer_t;

typedef enum {
    PEER_SA_NONE,
    PEER_SA_DIGEST,
    PEER_SA_ICP,
    PEER_SA_NETDB
} peer_select_alg_t;

typedef enum {
    LOOKUP_NONE,
    LOOKUP_HIT,
    LOOKUP_MISS
} lookup_t;

typedef enum {
    MGR_NONE,
    MGR_CLIENT_LIST,
    MGR_CONFIGURATION,
    MGR_DNSSERVERS,
    MGR_FILEDESCRIPTORS,
    MGR_FQDNCACHE,
    MGR_INFO,
    MGR_IO,
    MGR_IPCACHE,
    MGR_LOG_CLEAR,
    MGR_LOG_DISABLE,
    MGR_LOG_ENABLE,
    MGR_LOG_STATUS,
    MGR_LOG_VIEW,
    MGR_NETDB,
    MGR_OBJECTS,
    MGR_REDIRECTORS,
    MGR_REFRESH,
    MGR_REMOVE,
    MGR_REQUEST_HDRS,
    MGR_REPLY_HDRS,
    MGR_MSG_HDRS,
    MGR_SERVER_LIST,
    MGR_NON_PEERS,
    MGR_SHUTDOWN,
    MGR_UTILIZATION,
    MGR_VM_OBJECTS,
    MGR_STOREDIR,
    MGR_CBDATA,
    MGR_PCONN,
    MGR_COUNTERS,
    MGR_5MIN,
    MGR_60MIN,
    MGR_MEM,
    MGR_MAX
} objcache_op;

/* recognized or "known" header fields; @?@ add more! */
typedef enum {
    HDR_ACCEPT,
    HDR_ACCEPT_CHARSET,
    HDR_ACCEPT_ENCODING,
    HDR_ACCEPT_LANGUAGE,
    HDR_ACCEPT_RANGES,
    HDR_AGE,
    HDR_ALLOW,
    HDR_AUTHORIZATION,
    HDR_CACHE_CONTROL,
    HDR_CONNECTION,
    HDR_CONTENT_BASE,
    HDR_CONTENT_ENCODING,
    HDR_CONTENT_LANGUAGE,
    HDR_CONTENT_LENGTH,
    HDR_CONTENT_LOCATION,
    HDR_CONTENT_MD5,
    HDR_CONTENT_RANGE,
    HDR_CONTENT_TYPE,
    HDR_DATE,
    HDR_ETAG,
    HDR_EXPIRES,
    HDR_FROM,
    HDR_HOST,
    HDR_IF_MODIFIED_SINCE,
    HDR_IF_RANGE,
    HDR_LAST_MODIFIED,
    HDR_LINK,
    HDR_LOCATION,
    HDR_MAX_FORWARDS,
    HDR_MIME_VERSION,
    HDR_PRAGMA,
    HDR_PROXY_AUTHENTICATE,
    HDR_PROXY_AUTHORIZATION,
    HDR_PROXY_CONNECTION,
    HDR_PUBLIC,
    HDR_RANGE,
    HDR_REFERER,
    HDR_RETRY_AFTER,
    HDR_SERVER,
    HDR_SET_COOKIE,
    HDR_TITLE,
    HDR_UPGRADE,
    HDR_USER_AGENT,
    HDR_VARY,
    HDR_VIA,
    HDR_WARNING,
    HDR_WWW_AUTHENTICATE,
    HDR_X_CACHE,
    HDR_X_CACHE_LOOKUP,		/* tmp hack, remove later */
    HDR_X_FORWARDED_FOR,
    HDR_X_REQUEST_URI,		/* appended if ADD_X_REQUEST_URI is #defined */
    HDR_X_SQUID_ERROR,
    HDR_OTHER,
    HDR_ENUM_END
} http_hdr_type;

/* server cache-control */
typedef enum {
    CC_PUBLIC,
    CC_PRIVATE,
    CC_NO_CACHE,
    CC_NO_STORE,
    CC_NO_TRANSFORM,
    CC_MUST_REVALIDATE,
    CC_PROXY_REVALIDATE,
    CC_MAX_AGE,
    CC_ONLY_IF_CACHED,
    CC_OTHER,
    CC_ENUM_END
} http_hdr_cc_type;

/* possible types for http header fields */
typedef enum {
    ftInvalid = HDR_ENUM_END,	/* to catch nasty errors with hdr_id<->fld_type clashes */
    ftInt,
    ftStr,
    ftDate_1123,
    ftETag,
    ftPCc,
    ftPContRange,
    ftPRange,
    ftDate_1123_or_ETag
} field_type;

/* possible owners of http header */
typedef enum {
    hoNone,
    hoRequest,
    hoReply
} http_hdr_owner_type;

typedef enum {
    HIER_NONE,
    DIRECT,
    SIBLING_HIT,
    PARENT_HIT,
    DEFAULT_PARENT,
    SINGLE_PARENT,
    FIRSTUP_PARENT,
    NO_PARENT_DIRECT,
    FIRST_PARENT_MISS,
    CLOSEST_PARENT_MISS,
    CLOSEST_PARENT,
    CLOSEST_DIRECT,
    NO_DIRECT_FAIL,
    SOURCE_FASTEST,
    ROUNDROBIN_PARENT,
#if USE_CACHE_DIGESTS
    CACHE_DIGEST_HIT,
    NO_CACHE_DIGEST_DIRECT,
#endif
#if USE_CARP
    CARP,
#endif
    HIER_MAX
} hier_code;

typedef enum {
    ICP_INVALID,
    ICP_QUERY,
    ICP_HIT,
    ICP_MISS,
    ICP_ERR,
    ICP_SEND,
    ICP_SENDA,
    ICP_DATABEG,
    ICP_DATA,
    ICP_DATAEND,
    ICP_SECHO,
    ICP_DECHO,
    ICP_UNUSED12,
    ICP_UNUSED13,
    ICP_UNUSED14,
    ICP_UNUSED15,
    ICP_UNUSED16,
    ICP_UNUSED17,
    ICP_UNUSED18,
    ICP_UNUSED19,
    ICP_UNUSED20,
    ICP_MISS_NOFETCH,
    ICP_DENIED,
    ICP_HIT_OBJ,
    ICP_END
} icp_opcode;

enum {
    NOT_IN_MEMORY,
    IN_MEMORY
};

enum {
    PING_NONE,
    PING_WAITING,
    PING_TIMEOUT,
    PING_DONE
};

enum {
    STORE_OK,
    STORE_PENDING,
    STORE_ABORTED
};

enum {
    SWAPOUT_NONE,
    SWAPOUT_OPENING,
    SWAPOUT_WRITING,
    SWAPOUT_DONE
};

enum {
    STORE_NON_CLIENT,
    STORE_MEM_CLIENT,
    STORE_DISK_CLIENT
};

enum {
    METHOD_NONE,		/* 000 */
    METHOD_GET,			/* 001 */
    METHOD_POST,		/* 010 */
    METHOD_PUT,			/* 011 */
    METHOD_HEAD,		/* 100 */
    METHOD_CONNECT,		/* 101 */
    METHOD_TRACE,		/* 110 */
    METHOD_PURGE,		/* 111 */
    METHOD_ENUM_END
};
typedef unsigned int method_t;

typedef enum {
    PROTO_NONE,
    PROTO_HTTP,
    PROTO_FTP,
    PROTO_GOPHER,
    PROTO_WAIS,
    PROTO_CACHEOBJ,
    PROTO_ICP,
    PROTO_URN,
    PROTO_WHOIS,
    PROTO_INTERNAL,
    PROTO_HTTPS,
    PROTO_MAX
} protocol_t;

typedef enum {
    HTTP_CONTINUE = 100,
    HTTP_SWITCHING_PROTOCOLS = 101,
    HTTP_OK = 200,
    HTTP_CREATED = 201,
    HTTP_ACCEPTED = 202,
    HTTP_NON_AUTHORITATIVE_INFORMATION = 203,
    HTTP_NO_CONTENT = 204,
    HTTP_RESET_CONTENT = 205,
    HTTP_PARTIAL_CONTENT = 206,
    HTTP_MULTIPLE_CHOICES = 300,
    HTTP_MOVED_PERMANENTLY = 301,
    HTTP_MOVED_TEMPORARILY = 302,
    HTTP_SEE_OTHER = 303,
    HTTP_NOT_MODIFIED = 304,
    HTTP_USE_PROXY = 305,
    HTTP_BAD_REQUEST = 400,
    HTTP_UNAUTHORIZED = 401,
    HTTP_PAYMENT_REQUIRED = 402,
    HTTP_FORBIDDEN = 403,
    HTTP_NOT_FOUND = 404,
    HTTP_METHOD_NOT_ALLOWED = 405,
    HTTP_NOT_ACCEPTABLE = 406,
    HTTP_PROXY_AUTHENTICATION_REQUIRED = 407,
    HTTP_REQUEST_TIMEOUT = 408,
    HTTP_CONFLICT = 409,
    HTTP_GONE = 410,
    HTTP_LENGTH_REQUIRED = 411,
    HTTP_PRECONDITION_FAILED = 412,
    HTTP_REQUEST_ENTITY_TOO_LARGE = 413,
    HTTP_REQUEST_URI_TOO_LARGE = 414,
    HTTP_UNSUPPORTED_MEDIA_TYPE = 415,
    HTTP_INTERNAL_SERVER_ERROR = 500,
    HTTP_NOT_IMPLEMENTED = 501,
    HTTP_BAD_GATEWAY = 502,
    HTTP_SERVICE_UNAVAILABLE = 503,
    HTTP_GATEWAY_TIMEOUT = 504,
    HTTP_HTTP_VERSION_NOT_SUPPORTED = 505,
    HTTP_INVALID_HEADER = 600	/* Squid header parsing error */
} http_status;

enum {
    PD_INITED,			/* initialized */
    PD_USABLE,			/* ready to use */
    PD_REQUESTED,		/* we are in the process of receiving a [fresh] digest */
    PD_DISABLED,		/* do not use/validate the digest */
    PD_INIT_PENDING
} peer_cd_t;

/*
 * These are for StoreEntry->flag, which is defined as a SHORT
 *
 * NOTE: These flags are written to swap.state, so think very carefully
 * about deleting or re-assigning!
 */
enum {
    ENTRY_SPECIAL,
    ENTRY_REVALIDATE,
    DELAY_SENDING,
    RELEASE_REQUEST,
    REFRESH_REQUEST,
    ENTRY_CACHABLE,
    ENTRY_DISPATCHED,
    KEY_PRIVATE,
    ENTRY_UNUSED_08,
    ENTRY_NEGCACHED,
    ENTRY_VALIDATED,
    ENTRY_BAD_LENGTH
};

enum {
    HTTP_PROXYING,
    HTTP_KEEPALIVE
};

enum {
    ERR_FLAG_CBDATA
};

/*
 * These are request_t->flags
 */
enum {
    REQ_RANGE,
    REQ_NOCACHE,
    REQ_IMS,
    REQ_AUTH,
    REQ_CACHABLE,
    REQ_HIERARCHICAL,
    REQ_LOOPDETECT,
    REQ_PROXY_KEEPALIVE,
    REQ_PROXYING,
    REQ_REFRESH,
    REQ_USED_PROXY_AUTH,
    REQ_REDIRECTED,
    REQ_NOCACHE_HACK		/* for changing no-cache requests into IMS */
};

enum {
    HELPER_ALIVE,
    HELPER_BUSY,
    HELPER_CLOSING,
    HELPER_SHUTDOWN
};

enum {
    NEIGHBOR_PROXY_ONLY,
    NEIGHBOR_NO_QUERY,
    NEIGHBOR_NO_DIGEST,
    NEIGHBOR_DEFAULT_PARENT,
    NEIGHBOR_ROUNDROBIN,
    NEIGHBOR_MCAST_RESPONDER,
    NEIGHBOR_CLOSEST_ONLY,
#if USE_HTCP
    NEIGHBOR_HTCP,
#endif
    NEIGHBOR_NO_NETDB_EXCHANGE,
    NEIGHBOR_END
};

typedef enum {
    ACCESS_DENIED,
    ACCESS_ALLOWED,
    ACCESS_REQ_PROXY_AUTH
} allow_t;

#if SQUID_SNMP
enum {
    SNMP_C_VIEW,
    SNMP_C_USER,
    SNMP_C_COMMUNITY
};

#endif

typedef enum {
    MEM_NONE,
    MEM_DONTFREE,
    MEM_DISK_BUF,
    MEM_STMEM_BUF,
    MEM_2K_BUF,
    MEM_4K_BUF,
    MEM_8K_BUF,
    MEM_ACL_IP_DATA,
    MEM_ACL_TIME_DATA,
    MEM_ACL_NAME_LIST,
    MEM_ACL_DENY_INFO_LIST,
    MEM_ACL,
    MEM_ACL_LIST,
    MEM_ACL_ACCESS,
    MEM_ACL_PROXY_AUTH_USER,
    MEM_ACLCHECK_T,
    MEM_AIO_RESULT_T,
    MEM_WORDLIST,
    MEM_INTLIST,
    MEM_USHORTLIST,
    MEM_RELIST,
    MEM_SQUIDCONFIG,
    MEM_SQUIDCONFIG2,
    MEM_CLOSE_HANDLER,
    MEM_DREAD_CTRL,
    MEM_DNSSERVER_T,
    MEM_DNSSTATDATA,
    MEM_DWRITE_Q,
    MEM_FILEMAP,
    MEM_FQDNCACHE_ENTRY,
    MEM_FQDNCACHE_PENDING,
    MEM_FWD_STATE,
    MEM_FWD_SERVER,
    MEM_HASH_LINK,
    MEM_HASH_TABLE,
    MEM_HTTP_REPLY,
    MEM_HTTP_HDR_ENTRY,
    MEM_HTTP_HDR_CC,
    MEM_HTTP_HDR_RANGE_SPEC,
    MEM_HTTP_HDR_RANGE,
    MEM_HTTP_HDR_CONTENT_RANGE,
    MEM_HTTP_STATE_DATA,
    MEM_ICPUDPDATA,
    MEM_CLIENTHTTPREQUEST,
    MEM_CONNSTATEDATA,
    MEM_IPCACHE_PENDING,
    MEM_IPCACHE_ENTRY,
    MEM_DOMAIN_PING,
    MEM_DOMAIN_TYPE,
    MEM_DIGEST_FETCH_STATE,
    MEM_PEER,
    MEM_NET_DB_NAME,
    MEM_NET_DB_PEER,
    MEM_NETDBENTRY,
    MEM_ICP_PING_DATA,
    MEM_PS_STATE,
    MEM_HIERARCHYLOGENTRY,
    MEM_PINGERECHODATA,
    MEM_PINGERREPLYDATA,
    MEM_ICP_COMMON_T,
    MEM_IOSTATS,
    MEM_MEM_NODE,
    MEM_STORE_CLIENT,
    MEM_MEMOBJECT,
    MEM_STOREENTRY,
    MEM_SWAPDIR,
    MEM_REQUEST_T,
    MEM_ACCESSLOGENTRY,
    MEM_CACHE_DIGEST,
    MEM_CACHEMGR_PASSWD,
    MEM_REFRESH_T,
    MEM_COMMWRITESTATEDATA,
    MEM_ERRORSTATE,
    MEM_DLINK_NODE,
    MEM_DLINK_LIST,
    MEM_STATCOUNTERS,
    MEM_CLIENT_INFO,
    MEM_MAX
} mem_type;

/*
 * NOTE!  We must preserve the order of this list!
 */
enum {
    STORE_META_VOID,		/* should not come up */
    STORE_META_KEY_URL,		/* key w/ keytype */
    STORE_META_KEY_SHA,
    STORE_META_KEY_MD5,
    STORE_META_URL,		/* the url , if not in the header */
    STORE_META_STD,		/* standard metadata */
    STORE_META_HITMETERING,	/* reserved for hit metering */
    STORE_META_VALID,
    STORE_META_END
};

enum {
    STORE_LOG_CREATE,
    STORE_LOG_SWAPIN,
    STORE_LOG_SWAPOUT,
    STORE_LOG_RELEASE
};

typedef enum {
    SWAP_LOG_NOP,
    SWAP_LOG_ADD,
    SWAP_LOG_DEL,
    SWAP_LOG_MAX
} swap_log_op;


/* parse state of HttpReply or HttpRequest */
typedef enum {
    psReadyToParseStartLine = 0,
    psReadyToParseHeaders,
    psParsed,
    psError
} HttpMsgParseState;


enum {
    MEDIAN_HTTP,
    MEDIAN_ICP_QUERY,
    MEDIAN_DNS,
    MEDIAN_HIT,
    MEDIAN_MISS,
    MEDIAN_NM,
    MEDIAN_ICP_REPLY
};

enum {
    SENT,
    RECV
};

/*
 * These are field indicators for raw cache-cache netdb transfers
 */
enum {
    NETDB_EX_NONE,
    NETDB_EX_NETWORK,
    NETDB_EX_RTT,
    NETDB_EX_HOPS
};
