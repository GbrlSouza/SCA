# Gerenciador de Alunos

Este é um simples programa em C++ que permite gerenciar uma lista de alunos. O usuário pode adicionar novos alunos, listar todos os alunos cadastrados e editar as informações de um aluno existente. O programa utiliza uma estrutura (`struct`) para armazenar os dados dos alunos e um vetor (`vector`) para gerenciar a lista.

## Funcionalidades

1. **Adicionar Aluno**: Permite ao usuário inserir um novo aluno informando o ID, nome e idade.
2. **Listar Alunos**: Exibe todos os alunos cadastrados com suas informações.
3. **Editar Aluno**: Permite ao usuário modificar as informações de um aluno existente, utilizando o ID como referência.
4. **Validação de Dados**: O programa verifica se as entradas de idade são válidas e impede a adição de alunos com dados inválidos.

## Estrutura dos Dados

O programa utiliza a seguinte estrutura para armazenar os dados dos alunos:

```cpp
struct Aluno {
    int id;        // ID do aluno
    string nome;  // Nome do aluno
    int idade;    // Idade do aluno
};
```

## Uso

Para executar o programa, siga os passos abaixo:

1. Compile o código usando um compilador C++ (por exemplo, g++):
   ```bash
   g++ -o gerenciador_alunos gerenciador_alunos.cpp
   ```

2. Execute o programa:
   ```bash
   ./gerenciador_alunos
   ```

3. Siga as instruções exibidas no terminal para interagir com o programa:
   - Digite `1` para adicionar um novo aluno.
   - Digite `2` para listar todos os alunos.
   - Digite `3` para editar as informações de um aluno existente.
   - Digite `0` para sair do programa.

## Dependências

- Este programa é escrito em C++ e não possui dependências externas.

## Licença

Este projeto é de domínio público. Sinta-se à vontade para usá-lo, modificá-lo e distribuí-lo como desejar.
