/* @(#) $Id$ */

/* Copyright (C) 2003-2007 Daniel B. Cid <dcid@ossec.net>
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 3) as published by the FSF - Free Software
 * Foundation
 */

 

#ifndef _DBDCONFIG__H
#define _DBDONFIG__H


/* Database config structure */
typedef struct _DBConfig
{
    unsigned int db_type;
    unsigned int alert_id;
    unsigned int server_id;
    unsigned int error_count;
    unsigned int maxreconnect;

    char *host;
    char *user;
    char *pass;
    char *db;

    void *conn;
    void *location_hash;

    char **includes;
}DBConfig;


#define MYSQLDB 0x002
#define POSTGDB 0x004

#endif