/* ------------------------------------------- * 
 * zdb.h
 * ========
 * 
 * Summary 
 * -------
 * Header file for functions for dealing with basic 
 * SQL database interactions.
 *
 * Usage
 * -----
 * gcc -ldl -llua -o zdb vendor/single.o zdb.c && ./config
 * 
 *
 * LICENSE
 * -------
 * Copyright 2020 - 2021 Tubular Modular Inc. dba Collins Design
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
 * THE SOFTWARE.
 *
 * CHANGELOG 
 * ---------
 * 
 * ------------------------------------------- */
#include <zwalker.h>
#include <ztable.h>
#include <sqlite3.h>

#if 0
#ifndef SKIPMYSQL_H
 #include <mysql.h>
#endif

#ifndef SKIPPGSQL_H
 #include <postgresql.h>
#endif
#endif

#ifndef HDATABASE_H
#define HDATABASE_H

//Structure used for something else...
typedef struct dbvalue_t {
	const char *field;
	void *value;
	int vlen;
	zhType type;
} dbvalue_t;


//Macros could really be improved here...
void *db_open( const char *, char *, int ) ;
void *db_close( void **, char *, int );
zTable *db_exec( void *, const char *, void **, char *, int ) ;
zTable *db_to_table ( const char *filename, const char *query );
dbvalue_t ** generate_bind_args ( dbvalue_t **records, void *p, int len, zhType type );

#define db_query_file( ptr, file )

#define db_insert( ptr, file )

#define db_query_str( ptr, str )


#endif
