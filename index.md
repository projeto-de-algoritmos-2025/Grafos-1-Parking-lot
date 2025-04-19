---

title: "🚗 Projeto de Algoritmos - Parking lot com Grafos"

---

## 👩‍💻 Integrantes

<div align = "center">
<table>
  <tr>
    <td align="center"><a href="https://github.com/BiancaPatrocinio7"><img style="border-radius: 50%;" src="https://github.com/BiancaPatrocinio7.png" width="190;" alt=""/><br /><sub><b>Bianca Patrocínio Castro   - 22/1008801</b></sub></a><br /><a href="Link git" title="Rocketseat"></a></td>
    <td align="center"><a href="https://github.com/leticiatmartins"><img style="border-radius: 50%;" src="https://github.com/leticiatmartins.png" width="190px;" alt=""/><br /><sub><b>Leticia Torres Soares Martins - 20/2016702 </b></sub></a><br />
  </tr>
</table>

---

## 🎯 Objetivo

Desenvolver um sistema de estacionamento que utiliza **algoritmos de grafos** para encontrar a **vaga disponível mais próxima** de uma **loja específica** escolhida pelo usuário. O sistema deve considerar tanto a **estrutura do estacionamento** (com conexões entre vagas) quanto a **ocupação atual das vagas**.

---

## 🔧 Tecnologias e Estruturas Utilizadas

- **Linguagem**: C++
- **Representação do grafo**: Lista de adjacência
- **Tipo de grafo**: Direcionado
- **Algoritmo de busca**: BFS (Breadth-First Search)

---

## 🧩 Modelagem do Grafo

### 🟢 Nós (Vértices)
Cada **nó** do grafo representa uma **vaga** do estacionamento.

#### Atributos de um nó:
- `id`: número da vaga
- `loja_proxima`: nome da loja mais próxima (ex: "Americanas")
- `ocupada`: booleano indicando se a vaga está ocupada (`true`) ou livre (`false`)

### 🔗 Arestas
As **arestas** representam os **caminhos** entre as vagas do estacionamento. Como nem todos os caminhos são necessariamente bidirecionais, o grafo será **direcionado**.

### 🧱 Estrutura de dados utilizada
Usaremos uma **lista de adjacência** para representar o grafo.

---

## 🏪 Lojas Disponíveis

As lojas próximas às vagas são:

- Americanas
- Magazine Luiza (Magalu)
- C&A
- Outros exemplos

---

## 🧠 Funcionamento do Algoritmo

1. O usuário escolhe uma loja de destino.
2. O algoritmo percorre o grafo com **BFS**, partindo das vagas mais próximas à loja.
3. A busca ignora vagas ocupadas.
4. O sistema retorna a **vaga disponível mais próxima** da loja escolhida.

## Apresentação 

<div align="center">
<a href="https://youtu.be/PoJ3FK-J3wM?si=VLjQ5nK-w6U8Dh7-"><img src="https://i.imgur.com/nNBEJk2.png" width="50%"></a>
</div>

<font size="3"><p style="text-align: center">Autor: [Bianca Patrocínio](https://github.com/BiancaPatrocinio7) e [Letícia Torres](https://github.com/leticiatmartins).</p></font>
