# 🎲 Jogo da Velha Tridimensional 3x3x3 com Gravidade em C

![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Compilador](https://img.shields.io/badge/Compilador-GCC-orange.svg)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-brightgreen.svg)

[cite_start]Um projeto desenvolvido em **Linguagem C** que eleva o clássico Jogo da Velha para a terceira dimensão, adicionando uma mecânica dinâmica de **gravidade**[cite: 3, 4]. [cite_start]O jogo roda diretamente no terminal, permitindo partidas entre dois jogadores com alternância automática de turnos e detecção precisa de vitória em 49 combinações espaciais[cite: 5, 24, 31].

---

## 📌 Sumário
- [Sobre o Projeto](#-sobre-o-projeto)
- [⚙️ Mecânica de Gravidade](#️-mecânica-de-gravidade)
- [🏆 Condições de Vitória](#-condições-de-vitória)
- [📁 Estrutura de Arquivos](#-estrutura-de-arquivos)
- [🛠️ Como Compilar e Executar](#️-como-compilar-e-executar)
- [🎮 Como Jogar](#-como-jogar)

---

## 📖 Sobre o Projeto
[cite_start]O tabuleiro é modelado como um cubo $3 \times 3 \times 3$, representado por uma matriz tridimensional em C (`tabuleiro[coluna][nível][linha]`)[cite: 7]. 

[cite_start]Diferente do jogo da velha convencional, o jogador interage exclusivamente com a **camada superior (Topo / Nível 2)**[cite: 4, 10]. [cite_start]A peça escolhida desce pelos níveis através de uma simulação de gravidade até pousar no nível mais baixo ainda não ocupado daquela coluna[cite: 4, 12].

---

## ⚙️ Mecânica de Gravidade
1. [cite_start]O jogador escolhe a coordenada da linha (`0` a `2`) e coluna (`0` a `2`) na camada do topo[cite: 10].
2. O sistema verifica os níveis de baixo para cima:
   - [cite_start]**Nível 0 (Fundo):** Se estiver vazio, a peça para aqui[cite: 45, 46].
   - **Nível 1 (Meio):** Se o nível 0 estiver ocupado, a peça cai e para no nível 1.
   - **Nível 2 (Topo):** Se os níveis 0 e 1 estiverem ocupados, a peça fica no topo.
3. [cite_start]Se todos os 3 níveis daquela coordenada estiverem ocupados, a jogada é considerada **inválida**, exigindo que o jogador tente outra posição sem perder o turno[cite: 13, 19].

---

## 🏆 Condições de Vitória
[cite_start]Um jogador vence a partida ao alinhar **3 peças iguais** em qualquer direção do espaço tridimensional[cite: 26]. [cite_start]O sistema verifica automaticamente todas as **49 combinações possíveis** após cada jogada[cite: 31, 50]:

- [cite_start]**Linhas Horizontais:** Em qualquer um dos 3 níveis (9 combinações)[cite: 27, 52].
- [cite_start]**Colunas Horizontais:** Em qualquer um dos 3 níveis (9 combinações)[cite: 53].
- [cite_start]**Diagonais Planas:** Diagonais internas em cada face/plano do cubo (18 combinações)[cite: 29, 54].
- [cite_start]**Colunas Verticais:** Alinhamento direto na mesma posição atravessando os 3 níveis (9 combinações)[cite: 28, 55].
- [cite_start]**Diagonais Espaciais:** Diagonais tridimensionais cruzando os três níveis, linhas e colunas simultaneamente (4 combinações)[cite: 30, 57].

[cite_start]Caso o tabuleiro fique inteiramente preenchido sem nenhum vencedor, o jogo encerra em **Empate**[cite: 61].

---

## 📁 Estrutura de Arquivos
[cite_start]O projeto foi desenvolvido de forma modular para garantir organização e fácil manutenção[cite: 82, 90]:

```text
├── main.c        # Loop principal do jogo e controle de turnos [cite: 83]
├── tabuleiro.c   # Lógica de inicialização, exibição e gravidade [cite: 84]
├── tabuleiro.h   # Protótipos das funções do tabuleiro [cite: 85]
├── vitoria.c     # Algoritmo de verificação das 49 combinações de vitória e empate [cite: 86]
├── vitoria.h     # Protótipos das funções de vitória e empate [cite: 87]
└── Makefile      # Automação de compilação do projeto [cite: 88]
