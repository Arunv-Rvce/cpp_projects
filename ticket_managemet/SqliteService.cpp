//
// Created by arun on 08/12/19.
//

//
// Created by arun on 08/12/19.
//

#include <sqlite3.h>
#include <iostream>

using namespace std;

#include "SqliteService.h"

SqliteService::SqliteService(const char* db_name): db_name(db_name) {

}

int SqliteService::callback(void*, int argc, char** argv, char** col_names)
{
    for (int i = 0; i < argc; ++i)
        cout << col_names[i] << " = " << (argv[i] ? argv[i] : "NULL") << '\n';
    cout << endl;
    return 0;
}


void SqliteService::connect() {
    int rc = sqlite3_open(db_name, &db_connection);
    if (!rc)
        cout << "Opened Database Successfully!" << endl;
    else
        cerr << "Error open DB " << sqlite3_errmsg(db_connection) << endl;
}

void SqliteService::close() {
    if (db_connection) {
        sqlite3_close(db_connection);
    }
}

int SqliteService::execute(const char* query) {
    char* error_msg{};
    int rc = sqlite3_exec(db_connection, query, callback, nullptr, &error_msg);
    if( rc != SQLITE_OK ) {
        cerr << "Can't execute query: " << error_msg << '\n';
    }
    return 3;
}



