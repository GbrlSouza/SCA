#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Aluno {
    int id;
    string nome;
    int idade;
};

vector<Aluno> alunos;

void adicionarAluno() {
    Aluno aluno;
    cout << "Digite o ID do aluno: ";
    cin >> aluno.id;
    cout << "Digite o nome do aluno: ";
    cin.ignore();
    getline(cin, aluno.nome);
    cout << "Digite a idade do aluno: ";
    cin >> aluno.idade;
    alunos.push_back(aluno);
    cout << "Aluno adicionado com sucesso!\n";
}

void listarAlunos() {
    for (const auto &aluno : alunos) {
        cout << "ID: " << aluno.id << " | Nome: " << aluno.nome << " | Idade: " << aluno.idade << endl;
    }
}

void editarAluno() {
    int id;
    cout << "Digite o ID do aluno que deseja editar: ";
    cin >> id;
    
    for (auto &aluno : alunos) {
        if (aluno.id == id) {
            cout << "Digite o novo nome: ";
            cin.ignore();
            getline(cin, aluno.nome);
            cout << "Digite a nova idade: ";
            cin >> aluno.idade;
            cout << "Aluno atualizado!\n";
            return;
        }
    }
    cout << "Aluno não encontrado.\n";
}

int main() {
    int opcao;
    do {
        cout << "1. Adicionar Aluno\n2. Listar Alunos\n3. Editar Aluno\n0. Sair\nEscolha: ";
        cin >> opcao;
        switch (opcao) {
            case 1: adicionarAluno(); break;
            case 2: listarAlunos(); break;
            case 3: editarAluno(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opção inválida.\n";
        }
    } while (opcao != 0);
    return 0;
}
