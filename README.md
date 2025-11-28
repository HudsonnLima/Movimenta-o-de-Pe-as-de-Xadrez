# Movimentação de Peças de Xadrez – Projeto C

Este projeto demonstra a movimentação básica de peças do xadrez utilizando 

**estruturas de repetição** e agora também **funções recursivas**, 
permitindo comparar abordagens diferentes dentro do mesmo programa.

---

## 🔄 Atualizações Recentes

### ✔ Inclusão de Movimentações Recursivas
As seguintes peças agora possuem versões de movimentação usando **recursão**, além das versões tradicionais com `for`, `while` e `do...while`:

- **Torre** – movimento horizontal para a direita  
- **Bispo** – movimento diagonal superior direita  
- **Rainha** – movimento horizontal para a esquerda  
- **Cavalo** – movimento em L (2 para cima, 1 para a direita)

As funções recursivas seguem o padrão:

```c
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Torre movendo para a direita (%d casas restantes)
", casas);
        moverTorreRecursivo(casas - 1);
    }
}
```

Cada função verifica se ainda há movimentos restantes e chama a si mesma até que o valor chegue a zero.

---

## 📌 Menu interativo

Agora o programa conta com:

- Menu funcional  
- Entrada do usuário  
- Loop que repete o menu até que a opção **Sair (0)** seja escolhida  
- Execução de cada movimento com a versão recursiva correspondente  

---

## 📁 Estrutura do projeto

```
Movimentacao-Xadrez/
│
├── main.c
├── README.md
└── (outros arquivos futuros)
```

---

## 🚀 Como compilar

```bash
gcc main.c -o xadrez
```

---

## ▶ Como executar

```bash
./xadrez
```

---

## ✨ Autor
Hudson Lima  
GitHub: [HudsonnLima](https://github.com/HudsonnLima)
