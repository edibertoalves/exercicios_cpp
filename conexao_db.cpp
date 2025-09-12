// exemplo usando o MySQL Connector C++ 9.4
#include <iostream>
#include <stdexcept>
#include "../basico/include/mysqlx/xdevapi.h"

int main() {
    // cria uma conexao ao banco de dados
    mysqlx::Session sess("localhost", 3306, "root", "ediferal");

    // abre a conexão com o banco de dados
    std::cout << "Conexão bem sucedida!" << std::endl;

    // testar se a base de dados it0112 existe
    mysqlx::Schema db = sess.getSchema("it0112", true);
    if (db.existsInDatabase()) {
        std::cout << "A base de dados it0112 existe." << std::endl;
    } else {
        std::cout << "A base de dados it0112 não existe." << std::endl;
    }

    return 0;
}