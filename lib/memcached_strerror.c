#include <memcached.h>

char *memcached_strerror(memcached_st *ptr, memcached_return rc)
{
  switch (rc)
  {
  case MEMCACHED_SUCCESS:
    return "SUCCESS";
  case MEMCACHED_FAILURE:
    return "FAILURE";
  case MEMCACHED_HOST_LOCKUP_FAILURE:
    return "HOSTNAME LOOKUP FAILURE";
  case MEMCACHED_CONNECTION_FAILURE:
    return "CONNECTION FAILURE";
  case MEMCACHED_CONNECTION_BIND_FAILURE:
    return "CONNECTION BIND FAILURE";
  case MEMCACHED_READ_FAILURE:
    return "READ FAILURE";
  case MEMCACHED_UNKNOWN_READ_FAILURE:
    return "UNKNOWN READ FAILURE";
  case MEMCACHED_PROTOCOL_ERROR:
    return "PROTOCOL ERROR";
  case MEMCACHED_CLIENT_ERROR:
    return "CLIENT ERROR";
  case MEMCACHED_SERVER_ERROR:
    return "SERVER ERROR";
  case MEMCACHED_WRITE_FAILURE:
    return "WRITE FAILURE";
  case MEMCACHED_CONNECTION_SOCKET_CREATE_FAILURE:
    return "CONNECTION SOCKET CREATE FAILURE";
  case MEMCACHED_DATA_EXISTS:
    return "CONNECTION DATA EXISTS";
  case MEMCACHED_DATA_DOES_NOT_EXIST:
    return "CONNECTION DATA DOES NOT EXIST";
  case MEMCACHED_NOTSTORED:
    return "NOT STORED";
  case MEMCACHED_NOTFOUND:
    return "NOT FOUND";
  case MEMCACHED_MEMORY_ALLOCATION_FAILURE:
    return "MEMORY ALLOCATION FAILURE";
  case MEMCACHED_PARTIAL_READ:
    return "PARTIAL READ";
  case MEMCACHED_SOME_ERRORS:
    return "SOME ERRORS WERE REPORTED";
  };

  return "COMPLETELY UNKNOWN ERROR, SOMEONE FORGOT TO UPDATE ERROR MESSAGES";
}