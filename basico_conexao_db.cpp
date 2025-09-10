
#include <mysqlx/xdevapi.h> // Header oficial do MySQL Connector/C++

#include <iostream>

int main() {
    try {

        // Cria a conexao com o banco de dados
        mysqlx::Session sess("localhost", 3306, "root", "ediferal"); // 33060 é a porta padrão do X Protocol
        std::cout << "Conexao realizada com sucesso!" << std::endl;
        // Exemplo: acessar um schema
        // mysqlx::Schema db = sess.getSchema("nome_do_banco");
        // std::cout << "Schema selecionado com sucesso!" << std::endl;
    }
    catch (const mysqlx::Error& e) {
        std::cout << "Erro ao conectar ao banco de dados: " << e.what() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Erro padrão: " << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "Erro desconhecido ao conectar ao banco de dados." << std::endl;
    }
    return 0;
}


