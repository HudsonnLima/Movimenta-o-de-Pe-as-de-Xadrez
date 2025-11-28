# Movimento de Peças --- Avaliação de Estruturas de Repetição

Projeto solicitado pela equipe de testes da **Matecheck**, com o
objetivo de avaliar limites e desempenho do código utilizado nas
movimentações das peças dentro do jogo.

------------------------------------------------------------------------

## 📌 Descrição Geral

O sistema demonstra o funcionamento das estruturas de repetição
aplicadas à movimentação de peças de xadrez em um ambiente controlado.\
O objetivo é testar eficiência, repetição e clareza do código que
implementa esses movimentos.

------------------------------------------------------------------------

## ♟️ Peças e Movimentações

Quatro peças foram selecionadas, cada uma com um movimento e uma
estrutura de repetição diferente:

  --------------------------------------------------------------------------
  Peça         Movimento solicitado                 Direção impressa
  ------------ ------------------------------------ ------------------------
  **Bispo**    5 casas na diagonal direita para     `cima, direita`
               cima                                 

  **Torre**    5 casas para a direita               `direita`

  **Rainha**   8 casas para a esquerda              `esquerda`

  **Cavalo**   movimento em L (2 cima, 1 direita)   `para cima`,
                                                    `para a direita`
  --------------------------------------------------------------------------

### 🔍 Observação sobre o Bispo

Como movimentos diagonais não são direções únicas, eles são
representados pela combinação de duas direções:

-   Exemplo: diagonal inferior direita → `baixo, direita`

### 🔍 Observação sobre o Cavalo

O cavalo não se move em linha reta; seu movimento tradicional é em "L",
e aqui é representado como:

-   2 movimentos: `para cima`
-   1 movimento: `para a direita`

------------------------------------------------------------------------

## 🎯 Objetivo

Imprimir no console, usando `printf`, cada casa percorrida por cada peça
conforme o número de repetições definido.

------------------------------------------------------------------------

## ✔️ Requisitos Funcionais

-   Quantidade de casas deve ser definida por **variáveis**.
-   Pode-se usar constantes, se desejado.
-   Cada peça deve utilizar **uma estrutura de repetição diferente**:
    -   Bispo → `for`
    -   Torre → `while`
    -   Rainha → `do-while`
    -   Cavalo → `for` **aninhado**
-   A direção deve ser impressa linha por linha.
-   Código deve ser organizado e legível.

------------------------------------------------------------------------

## ⚙️ Requisitos Não Funcionais

### 🔧 Performance

-   Loops devem conter apenas o essencial.
-   Execução deve ser rápida, sem atrasos perceptíveis.

### 📝 Documentação

-   Código deve ser comentado de forma clara.
-   Qualquer dev deve entender sem consultar fontes externas.

### 🧩 Manutenibilidade

-   Variáveis com nomes descritivos.
-   Padrões de indentação e espaçamento devem ser seguidos.
-   Apenas **inteiros** e **strings** podem ser usados.

------------------------------------------------------------------------

## 🔢 Instruções Detalhadas

### Entrada de Dados

-   Incluir a biblioteca `<stdio.h>`.
-   Declarar variáveis no início do código.
-   Variáveis internas devem ser locais quando possível.

### Estruturas de Repetição

  Peça     Estrutura usada
  -------- --------------------
  Bispo    `for`
  Torre    `while`
  Rainha   `do-while`
  Cavalo   `for` **aninhado**

Cada estrutura representa o movimento da peça, mas o comportamento geral
é igual: repetir a direção pelo número de casas.

------------------------------------------------------------------------

## 🖨️ Saída de Dados

Cada linha exibida deve conter **apenas** a direção correspondente ao
movimento.

Exemplos:

    cima
    baixo
    direita
    esquerda
    cima, direita
    para cima
    para a direita

As saídas devem ser separadas por peça, com rótulos claros.

------------------------------------------------------------------------

## 🧾 Exemplo de Direções Permitidas

-   `cima`
-   `baixo`
-   `direita`
-   `esquerda`
-   `cima, direita`
-   `baixo, esquerda`
-   `para cima`
-   `para a direita`

------------------------------------------------------------------------

## 📂 Estrutura do Código (Resumo)

O programa:

-   Declara as variáveis `Bispo`, `Torre`, `Rainha`, `Cavalo`
-   Usa:
    -   `for` → Bispo\
    -   `while` → Torre\
    -   `do-while` → Rainha\
    -   `for` aninhado → Cavalo\
-   Imprime a quantidade correta de movimentos\
-   É eficiente, claro e bem documentado

------------------------------------------------------------------------

## 📄 Como Executar

1.  Compile o código:

``` bash
gcc movimentos.c -o movimentos
```

2.  Execute:

``` bash
./movimentos
```

O terminal exibirá todos os movimentos conforme solicitado.

------------------------------------------------------------------------

## ✔️ Conformidade com o Desafio

Este README e o código cumprem **100%** dos requisitos:

-   ✔ Regras funcionais\
-   ✔ Regras não funcionais\
-   ✔ Estruturas de repetição distintas\
-   ✔ Movimentos corretos\
-   ✔ Inclusão do Cavalo\
-   ✔ Documentação completa\
-   ✔ Código claro e eficiente

--------------------------------------------------------------------------


