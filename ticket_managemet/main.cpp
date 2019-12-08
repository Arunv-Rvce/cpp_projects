#include <iostream>
#include <memory>
#include "SqliteService.cpp"

using namespace std;

int main(int argc, char* argv[])
{
    SqliteService sqliteService("test.db");
    sqliteService.connect();
    string query = "select * from users";
    sqliteService.execute(query.c_str());
    sqliteService.close();
}