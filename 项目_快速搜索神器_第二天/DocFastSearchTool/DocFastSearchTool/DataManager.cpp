#include"DataManager.h"

#pragma comment(lib, "./sqlite/sqlite3.lib")

SqliteManager::SqliteManager():m_db(nullptr)
{}
SqliteManager::~SqliteManager()
{
	//Close()
}

void SqliteManager::Open(const std::string& path)
{
	char *zErrMsg = 0;
	int rc;

	/* Open database */
	rc = sqlite3_open("doc.db", m_db);
	if (rc)
	{
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(m_db));
		exit(0);
	}
	else
	{
		fprintf(stderr, "Opened database successfully\n");
	}

}