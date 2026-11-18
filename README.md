# 🎲 Jogo dos Dados

Um jogo de raciocínio lógico desenvolvido em **linguagem C**, inspirado em uma mecânica apresentada em *Ordem Paranormal: A Vigília*. O objetivo final é descobrir uma sequência de valores secretos gerados pelo programa, utilizando tentativas e dicas indiretas.

> **Status atual:** a estrutura inicial do jogo já está implementada. O projeto gera e armazena os valores secretos, permite escolher a dificuldade e apresenta um menu ao final dessa etapa. A entrada de palpites, a comparação e o sistema de dicas ainda estão planejados.

## Sobre o projeto

A ideia é transformar uma mecânica de dedução envolvendo dados em um jogo independente. O programa utiliza valores de **1 a 4**, como os resultados possíveis de um dado de quatro lados (D4).

A quantidade de valores secretos depende da dificuldade escolhida. Em versões futuras, o jogador deverá informar uma sequência de palpites e interpretar as dicas fornecidas pelo programa até descobrir a combinação.

Além de desenvolver um jogo, este projeto é uma oportunidade de praticar lógica de programação, modularização e fundamentos da linguagem C.

## Como o projeto funciona atualmente

O fluxo implementado neste estágio é:

1. **Inicialização:** `srand(time(NULL))` inicializa o gerador de números pseudoaleatórios.
2. **Escolha da dificuldade:** o jogador seleciona uma das três opções disponíveis.
3. **Definição da quantidade:** a dificuldade determina quantos valores serão gerados.
4. **Geração dos valores secretos:** a função `numAleatorio()` preenche o vetor `secreto`.
5. **Exibição para teste:** os valores armazenados são impressos no terminal para permitir a verificação da geração.
6. **Menu final:** o jogador pode escolher jogar novamente, trocar a dificuldade ou encerrar o programa.

**Importante:** a exibição dos valores secretos é, neste momento, uma etapa de teste. Ela deverá ser removida ou ocultada quando a lógica de palpites estiver implementada. As opções “Jogar novamente” e “Trocar dificuldade” atualmente retornam ao início do laço, onde a dificuldade é solicitada novamente.

## Dificuldades

| Opção | Nível | Quantidade de valores secretos |
|---|---|---:|
| 1 | Normal | 3 |
| 2 | Médio | 6 |
| 3 | Difícil | 12 |

Cada valor gerado está no intervalo de **1 a 4**.

## Estrutura do projeto

```text
Jogo-dos-Dados/
├── main.c    # Fluxo principal, inicialização, dificuldade e controle dos menus
├── jogo.c    # Implementação da geração dos números aleatórios
├── jogo.h    # Protótipo das funções relacionadas ao jogo
├── menu.c    # Menus de dificuldade e de encerramento/continuação
├── menu.h    # Protótipos das funções de menu
└── README.md
```

### Responsabilidade dos arquivos

- **`main.c`**: controla o fluxo principal, inicializa o gerador aleatório, recebe a dificuldade, define a quantidade de valores e chama as funções dos outros módulos.
- **`jogo.c`**: implementa `numAleatorio()`, que gera números entre o mínimo e o máximo informados e os armazena no vetor recebido.
- **`jogo.h`**: declara a função `numAleatorio()` para que ela possa ser utilizada em outros arquivos.
- **`menu.c`**: implementa os menus de seleção de dificuldade e de opções ao final da rodada.
- **`menu.h`**: declara as funções de menu.

## Tecnologias e conceitos praticados

- Linguagem C;
- Bibliotecas padrão (`stdio.h`, `stdlib.h` e `time.h`);
- Geração de números pseudoaleatórios com `rand()` e `srand()`;
- Vetores;
- Funções e modularização em arquivos `.c` e `.h`;
- Passagem de vetores como parâmetros;
- Escopo de variáveis;
- Estruturas condicionais (`switch` e `if/else`);
- Estrutura de repetição (`while` e `for`);
- Entrada e saída de dados com `scanf()` e `printf()`.

## Como compilar e executar

### Requisitos

- Um compilador C, como o GCC;
- Um terminal ou ambiente de desenvolvimento compatível.

Na pasta do projeto, compile os arquivos `.c`:

```bash
gcc *.c -o d4
```

Execute no Windows:

```bash
d4.exe
```

Execute no Linux:

```bash
./d4
```

Também é possível utilizar um compilador online de C, como o GDB Online, copiando os arquivos-fonte do projeto.

## Próximas etapas

A próxima etapa de desenvolvimento é implementar a interação principal do jogo, começando pelo vetor de tentativas do jogador.

O planejamento atual é:

1. Criar o vetor `tentativa[12]`, utilizando apenas a quantidade de posições correspondente à dificuldade selecionada.
2. Receber os valores informados pelo jogador.
3. Comparar cada palpite com os valores armazenados em `secreto`.
4. Contar os acertos.
5. Gerar dicas indiretas, indicando quantos valores estão acima ou abaixo dos valores secretos, sem revelar diretamente a posição correspondente.
6. Verificar se a combinação foi descoberta e controlar a condição de vitória.
7. Integrar o ciclo de tentativas ao fluxo principal e ajustar o menu final para o funcionamento completo da partida.

## Histórico e aprendizados até aqui

Durante o desenvolvimento, foi identificado um problema na geração dos números: a função responsável pelo sorteio era chamada dentro de um laço de interação, fazendo com que a combinação fosse gerada novamente a cada interação.

A solução adotada foi gerar os valores uma vez por partida e armazená-los no vetor `secreto`, declarado em `main()`. Assim, a mesma combinação permanece disponível para as etapas seguintes daquela rodada.

Esse processo também permitiu praticar:

- criação e utilização de vetores;
- escopo e organização de variáveis;
- passagem de vetores para funções;
- funções com retorno `void`;
- separação do código em módulos.

## Estado do desenvolvimento

| Funcionalidade | Situação |
|---|---|
| Geração de números aleatórios | Implementada |
| Armazenamento no vetor `secreto` | Implementado |
| Seleção de dificuldade | Implementada |
| Quantidade variável de valores (3, 6 ou 12) | Implementada |
| Modularização inicial (`jogo` e `menu`) | Implementada |
| Menu para continuar ou encerrar | Implementado |
| Entrada das tentativas do jogador | Pendente |
| Comparação entre palpites e valores secretos | Pendente |
| Contagem de acertos e dicas | Pendente |
| Verificação de vitória | Pendente |

---

Projeto em desenvolvimento. O README será atualizado conforme novas funcionalidades forem implementadas.
