# 🎲 | O Jogo dos Dados

Um pequeno jogo de lógica desenvolvido em **C**, no qual sua capacidade de dedução será colocada à prova!

Você consegue descobrir os valores secretos de três dados de quatro lados utilizando apenas dicas indiretas?

## Sobre o projeto

O **O Jogo dos Dados** é um jogo de adivinhação e raciocínio lógico desenvolvido em linguagem C.

A proposta é simples: o programa gera três valores aleatórios, cada um representando o resultado de um dado de quatro lados (D4). O jogador precisa descobrir os três números secretos por meio de tentativas e dicas fornecidas pelo próprio programa.

Entretanto, existe um detalhe: as dicas não revelam diretamente quais números estão corretos ou incorretos, e você possui uma quantidade limitada de tentativas. Cabe ao jogador interpretar as informações recebidas, formular hipóteses e utilizar a lógica para encontrar a combinação correta.

O projeto nasceu da minha admiração pela série de RPG **Ordem Paranormal**, criada por Rafael Lange (Cellbit), mais especificamente pela temporada *A Vigília*, episódio 1. Na ocasião, uma mecânica envolvendo dados é utilizada para resolver um desafio relacionado à afinação das cordas de uma lira.

Inspirado por essa ideia, decidi desenvolver minha própria implementação da mecânica, transformando-a em um pequeno jogo independente e, ao mesmo tempo, em uma oportunidade para aprimorar meus conhecimentos em programação.

## Como ela funciona?

O funcionamento do jogo é dividido em algumas etapas:

1. **Geração dos números:** O programa sorteia três números aleatórios, cada um entre 1 e 4, representando os três dados.
2. **Tentativa do jogador:** O usuário informa três valores, tentando descobrir a combinação secreta.
3. **Análise da tentativa:** O programa compara os valores informados com os números armazenados.
4. **Sistema de dicas:** O jogador recebe informações sobre quantos valores estão corretos, acima ou abaixo dos resultados secretos, sem saber exatamente a qual dado cada informação corresponde.
5. **Repetição:** As tentativas continuam até que o jogador descubra a combinação correta ou encerre sua quantidade de tentativas.

### Exemplo de uma partida

Imagine que o programa tenha sorteado secretamente a seguinte combinação:

| Dado | Valor secreto |
|---|---:|
| D4-1 | 2 |
| D4-2 | 3 |
| D4-3 | 3 |

O jogador realiza a seguinte tentativa:

| Dado | Palpite |
|---|---:|
| D4-1 | 2 |
| D4-2 | 4 |
| D4-3 | 1 |

O programa retorna:

> **Um está correto, está abaixo, um está acima!**

Observe que o jogador não sabe qual dos dados corresponde a cada dica. Ele precisa utilizar as informações das tentativas anteriores para descobrir a combinação.

E assim o desafio continua até que os três valores sejam descobertos!

## Tecnologias e conceitos utilizados

O projeto está sendo desenvolvido em **linguagem C**, explorando conceitos fundamentais da programação, como:

- Geração de números pseudoaleatórios;
- Declaração e manipulação de variáveis;
- Estruturas condicionais;
- Estruturas de repetição;
- Entrada e saída de dados;
- Comparação e validação de valores;
- Desenvolvimento de lógica de programação.

## Objetivos do projeto

Bom, Um dos objetivos deste projeto é dar para consumidores de Ordem Paranormal a oportunidade de jogar um jogo divertido e ao mesmo tempo desafiador.
Mas não só isso, como também viso melhorar minhas capacidades de programação e lógica.

Entre meus principais objetivos estão:

- Aprimorar minha lógica de programação;
- Desenvolver minha capacidade de resolver problemas utilizando C;
- Trabalhar com geração e manipulação de números aleatórios;
- Implementar um sistema de dicas baseado em comparações;
- Praticar a organização e documentação de projetos utilizando Git e GitHub.

## Como executar

**Requisitos:**
- Compilador de linguagem C (site GDB online, por exemplo (Futuramente com foco em criar um executável)).
- Terminal ou ambiente de desenvolvimento compatível.

### Compilação

Após clonar o repositório, acesse a pasta do projeto e compile os arquivos utilizando:

```bash
gcc *.c -o d4
```

### Execução

No Windows:

```bash
d4.exe
```

No Linux:

```bash
./d4
```

*Observação: os comandos de compilação e execução poderão ser ajustados conforme a estrutura definitiva do projeto.*

## Status do projeto

🚧 Em desenvolvimento.

Novas melhorias e funcionalidades poderão ser implementadas conforme a evolução do projeto.

## 👨‍💻 Desenvolvedor

Desenvolvido por **Matheus Alves**, estudante de Análise e Desenvolvimento de Sistemas, como um projeto pessoal para exercitar conhecimentos em programação e transformar uma ideia inspirada em uma obra de entretenimento em uma aplicação funcional.

---

*Será que você vai conseguir afinar essa lira? Ou vai estourar suas cordas? Independente do resultado, estou ansioso por sua tentativa!! Boa sorte!!* 🎲
