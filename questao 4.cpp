#include <iostream>
#include <vector>
#include <string>

struct Contato {
    std::string nome;
    std::string telefone;
};

void adicionarContato(std::vector<Contato>& listaContatos) {
    Contato novoContato;
    std::cout << "Digite o nome do contato: ";
    std::cin >> novoContato.nome;
    std::cout << "Digite o número de telefone: ";
    std::cin >> novoContato.telefone;
    listaContatos.push_back(novoContato);
    std::cout << "Contato adicionado com sucesso!\n";
}

void listarContatos(const std::vector<Contato>& listaContatos) {
    std::cout << "Lista de Contatos:\n";
    for (std::vector<Contato>::size_type i = 0; i < listaContatos.size(); ++i) {
        std::cout << "Nome: " << listaContatos[i].nome << ", Telefone: " << listaContatos[i].telefone << "\n";
    }
}

void buscarContato(const std::vector<Contato>& listaContatos, const std::string& nomeBusca) {
    bool encontrado = false;
    for (std::vector<Contato>::size_type i = 0; i < listaContatos.size(); ++i) {
        if (listaContatos[i].nome == nomeBusca) {
            std::cout << "Contato encontrado:\n";
            std::cout << "Nome: " << listaContatos[i].nome << ", Telefone: " << listaContatos[i].telefone << "\n";
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        std::cout << "Contato não encontrado.\n";
    }
}

int main() {
    std::vector<Contato> listaContatos;
    int opcao;

    do {
        std::cout << "Escolha uma opção:\n";
        std::cout << "1. Adicionar Contato\n";
        std::cout << "2. Listar Contatos\n";
        std::cout << "3. Buscar Contato\n";
        std::cout << "4. Sair\n";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarContato(listaContatos);
                break;
            case 2:
                listarContatos(listaContatos);
                break;
            case 3: {
                std::string nomeBusca;
                std::cout << "Digite o nome do contato a ser buscado: ";
                std::cin >> nomeBusca;
                buscarContato(listaContatos, nomeBusca);
                break;
            }
            case 4:
                std::cout << "Saindo do programa.\n";
                return 0;
            default:
                std::cout << "Opção inválida.\n";
        }

    } while (opcao != 4);

    return 0;
}

