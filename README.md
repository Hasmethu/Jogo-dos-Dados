# 🎲 Jogo dos Dados

Um jogo de raciocínio lógico desenvolvido em **linguagem C**, inspirado em uma mecânica apresentada em *Ordem Paranormal: A Vigília*. O objetivo é descobrir uma sequência de números secretos gerados aleatoriamente, utilizando tentativas e dicas para deduzir a combinação correta.

## Sobre o projeto

O Jogo dos Dados é um projeto desenvolvido para praticar lógica de programação, manipulação de vetores, funções, modularização, validação de entradas e controle de fluxo utilizando a linguagem C.

O jogador deve descobrir uma sequência de números entre **1 e 4**, cujos valores e quantidade variam conforme a dificuldade escolhida. A cada tentativa, o programa fornece informações sobre os palpites, permitindo que o jogador refine sua estratégia até encontrar a sequência correta ou esgotar as tentativas disponíveis.

## Como funciona

1. O jogador seleciona uma das três dificuldades.
2. O programa gera uma sequência aleatória de números entre 1 e 4.
3. O jogador informa seus palpites, preenchendo a sequência de acordo com a dificuldade.
4. Após cada tentativa, o programa informa quantos números estão acima, abaixo ou exatamente corretos em relação à sequência secreta.
5. Com base nas dicas, o jogador deve deduzir a combinação correta.
6. A partida termina quando a sequência é descoberta ou quando todas as tentativas são utilizadas.

As dicas são fornecidas de forma indireta, sem revelar as posições dos números corretos, tornando o jogo um desafio de dedução e raciocínio lógico.

## Dificuldades

| Dificuldade | Números na sequência | Tentativas |
|:---:|:---:|:---:|
| Normal | 3 | 4 |
| Médio | 6 | 6 |
| Difícil | 12 | 8 |

Todos os números gerados pertencem ao intervalo de **1 a 4**, simulando os resultados possíveis de um dado de quatro lados (D4).

## Funcionalidades

- Geração de sequências aleatórias.
- Três níveis de dificuldade.
- Quantidade variável de números conforme o nível escolhido.
- Recebimento e validação dos palpites do jogador.
- Tratamento de entradas inválidas e não numéricas.
- Comparação entre a sequência secreta e a tentativa do jogador.
- Contagem de números corretos, acima e abaixo do valor secreto.
- Sistema de dicas indiretas, sem revelar posições.
- Controle de tentativas restantes.
- Condições de vitória e derrota.
- Possibilidade de iniciar uma nova partida.

## Estrutura do projeto

```text
Jogo-dos-Dados/
├── main.c    # Fluxo principal e controle das partidas
├── jogo.c   # Geração, entrada, validação e comparação dos números
├── jogo.h   # Declarações das funções relacionadas ao jogo
├── menu.c   # Menus de dificuldade e opções ao final da partida
├── menu.h   # Declarações das funções de menu
└── README.md
```

### Responsabilidade dos arquivos

| Arquivo | Responsabilidade |
|---|---|
| `main.c` | Controla o fluxo do programa, dificuldades, tentativas, resultados e partidas. |
| `jogo.c` | Implementa a geração aleatória, entrada dos palpites, validação e comparação das sequências. |
| `jogo.h` | Declara as funções utilizadas pelo módulo de jogo. |
| `menu.c` | Implementa os menus de seleção de dificuldade e continuidade da partida. |
| `menu.h` | Declara as funções relacionadas aos menus. |

## Como executar

### Pré-requisitos

- Compilador C, como o GCC.
- Terminal ou ambiente de desenvolvimento compatível.

### Compilação

Na pasta raiz do projeto, execute:

```bash
gcc *.c -o d4
```

### Execução

**Windows:**

```bash
d4.exe
```

**Linux:**

```bash
./d4
```

Também é possível compilar e executar o projeto utilizando compiladores online de C, desde que todos os arquivos-fonte sejam incluídos.

## Próximos passos

- Aprimorar a interface e a experiência do jogador.
- Refatorar partes do código para melhorar legibilidade e manutenção.
- Desenvolver uma interface gráfica utilizando HTML, CSS e JavaScript.
- Integrar a lógica desenvolvida em C à uma versão web utilizando WebAssembly.

## Estado do desenvolvimento

| Funcionalidade | Status |
|---|:---:|
| Geração de números aleatórios | ✅ |
| Seleção de dificuldade | ✅ |
| Sequências de tamanho variável | ✅ |
| Entrada de palpites | ✅ |
| Validação de valores entre 1 e 4 | ✅ |
| Tratamento de entradas inválidas | ✅ |
| Comparação de sequências | ✅ |
| Sistema de dicas | ✅ |
| Contagem de tentativas | ✅ |
| Condições de vitória e derrota | ✅ |
| Menu para novas partidas | ✅ |
| Interface web | 🔄 Planejada |

---

> Projeto desenvolvido com o objetivo de consolidar conhecimentos em lógica de programação e linguagem C, evoluindo gradualmente para novas funcionalidades e interfaces.
