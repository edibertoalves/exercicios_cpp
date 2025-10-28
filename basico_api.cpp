// https://stackoverflow.com/questions/53861300/how-do-you-properly-install-libcurl-for-use-in-visual-studio-2017

#include <iostream>
#include <string>

#include "E:/Estudos/cpp/curl/include/curl/curl.h"

class ClasseApi {
    public:
        ClasseApi() {}

        void Acessar(int idCidade) {
            std::string url = "http://servicos.cptec.inpe.br/XML/cidade/" + std::to_string(idCidade) + "/previsao.xml";

            std::cout << "Acessando URL: " << url << std::endl;

            // Aqui você pode adicionar o código para fazer a requisição HTTP e processar o XML
            // Exemplo de uso da biblioteca cURL para fazer a requisição HTTP:
            CURL *curl;
            CURLcode res;

            curl_global_init(CURL_GLOBAL_DEFAULT);
            curl = curl_easy_init();

            if (curl) {
                curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
                res = curl_easy_perform(curl);
                curl_easy_cleanup(curl);
                curl_global_cleanup();
            } else {
                std::cerr << "Erro ao inicializar cURL" << std::endl;
            }

            if (res != CURLE_OK) {
                std::cerr << "Erro na requisição: " << curl_easy_strerror(res) << std::endl;
            } else {
                std::cout << "Requisição realizada com sucesso!" << std::endl;
            }

            curl_global_cleanup();
            curl = nullptr;
            res = CURLE_OK;
        };
};

int main () {
    ClasseApi api;
    api.Acessar(244); // São Paulo 244

    std::cout << "Hello World!" << std::endl;

    return 0;
}