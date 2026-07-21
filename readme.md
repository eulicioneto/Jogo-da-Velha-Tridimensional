# 🎮 Jogo da Velha 3D com Gravidade

Projeto desenvolvido para a disciplina de **Introdução à Programação**, utilizando a linguagem **C**.

O projeto consiste na implementação de um **Jogo da Velha Tridimensional (3×3×3)** com mecânica de gravidade, em que as peças são inseridas no nível mais baixo disponível da posição escolhida, semelhante ao funcionamento do jogo *Connect Four*.

---

## 📖 Sobre o Projeto

O tabuleiro é composto por três níveis:

- Nível 2 (Topo)
- Nível 1 (Meio)
- Nível 0 (Fundo)

Cada jogador escolhe uma **linha** e uma **coluna**, e o sistema posiciona automaticamente a peça no menor nível disponível daquela posição.

Além da mecânica de gravidade, o projeto realiza automaticamente a verificação de todas as possibilidades de vitória em um cubo 3×3×3 e identifica situações de empate.

---

## ✨ Funcionalidades

- Inicialização automática do tabuleiro
- Exibição dos três níveis do cubo no terminal
- Mecânica de gravidade
- Validação de jogadas
- Controle de turnos entre os jogadores
- Verificação automática de vitória
- Verificação de empate
- Organização modular utilizando arquivos `.c` e `.h`
- Compilação utilizando **Makefile**

---

## 🛠 Tecnologias Utilizadas

- Linguagem C
- GCC (MinGW)
- Makefile

---

## 📂 Estrutura do Projeto

```text
.
├── main.c
├── tabuleiro.c
├── tabuleiro.h
├── vitoria.c
├── vitoria.h
├── Makefile
└── README.md
```

---

## 📚 Conceitos Aplicados

Durante o desenvolvimento foram utilizados diversos conceitos fundamentais da linguagem C, entre eles:

- Matrizes tridimensionais
- Modularização do código
- Funções
- Estruturas condicionais
- Estruturas de repetição
- Manipulação de caracteres
- Arquivos de cabeçalho (`.h`)
- Processo de compilação utilizando Makefile
- Algoritmos para verificação de vitória em três dimensões

---

## 🎯 Objetivo

O principal objetivo do projeto foi aplicar, na prática, os conteúdos estudados na disciplina de Introdução à Programação, desenvolvendo um jogo completo em linguagem C e explorando conceitos de organização de código, lógica de programação e estruturas de dados.

---

## 👥 Autores

Projeto desenvolvido como atividade acadêmica da disciplina de **Introdução à Programação**.
