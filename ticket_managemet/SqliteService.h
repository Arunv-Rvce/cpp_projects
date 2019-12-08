//
// Created by arun on 08/12/19.
//


#ifndef TICKET_MANAGEMET_SQLLITESERVICE_H
#define TICKET_MANAGEMET_SQLLITESERVICE_H

#endif //TICKET_MANAGEMET_SQLLITESERVICE_H

class SqliteService {
public:
    SqliteService(const char* db_name);
    static int callback(void* data, int argc, char** argv, char** colNames);
    int execute(const char* query);
    void connect();
    void close();

private:
    const char* db_name;
    sqlite3* db_connection;
};