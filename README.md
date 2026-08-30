Markdown
# 📊 Sistema Kanban de Gestão de Projetos (C++)

> Projeto desenvolvido como Trabalho Prático para a disciplina de **Técnicas de Programação 1** na Universidade de Brasília (UnB), com foco em arquitetura de software, rigor de modelagem e boas práticas de Orientação a Objetos.

---

## 💡 Sobre o Projeto
Este sistema é uma aplicação completa de linha de comando para gerenciamento de projetos baseada no método **Kanban**. O software foi arquitetado do zero para garantir alta coesão, baixo acoplamento e validação estrita de regras de negócio, simulando um ambiente de desenvolvimento profissional.

O sistema diferencia perfis de usuários (**Gestores e Desenvolvedores**) e gerencia todo o ciclo de vida de projetos, quadros e cartões de atividade, calculando métricas ágeis essenciais.

---

## 🛠️ Tecnologias e Conceitos Aplicados
*   **Linguagem:** C++ (Padrão e Orientação a Objetos avançada)
*   **Arquitetura:** Arquitetura em Camadas (Apresentação e Serviço) com contratos definidos por Classes Abstratas (Interfaces).
*   **Modelagem & Documentação:** Diagramas UML e documentação técnica gerada via **Doxygen**.
*   **Qualidade e Regras de Negócio:** 
    *   Validação estrita de formatos (E-mails, senhas, identificadores e restrições textuais).
    *   Tratamento robusto de exceções em métodos de atribuição (`setters`).
*   **Ambiente:** Code::Blocks / Compilação nativa em C++.

---

## ⚙️ Principais Funcionalidades e Métricas Ágeis
O sistema implementa regras de negócio complexas do universo ágil, incluindo:
1.  **Controle de Acesso e Contas:** Autenticação e permissões restritas baseadas no papel do usuário (Gestor vs. Desenvolvedor).
2.  **Fluxo Kanban:** Movimentação controlada de cartões pelas colunas (*A Fazer* ➔ *Fazendo* ➔ *Feito*).
3.  **Métricas de Desempenho:**
    *   **Cycle Time:** Tempo de execução da atividade (da coluna *Fazendo* até *Feito*).
    *   **Lead Time:** Tempo total da atividade (da entrada *A Fazer* até *Feito*).
    *   **WIP (Work in Progress):** Monitoramento e limite de tarefas simultâneas em execução.

---

## 🏛️ Decisões Arquiteturais
Para demonstrar boas práticas de engenharia de software, o projeto foi estruturado em dois grandes blocos independentes:
*   **Camada de Apresentação:** Responsável pela interação via console (`cin`/`cout`) e triagem/validação prévia de inputs, dependendo estritamente de contratos (interfaces) e desacoplada da lógica de dados.
*   **Camada de Serviço:** Contém os motores de regra de negócio, gerenciamento de entidades de Domínio e estruturas de persistência em memória.

---

## 📂 Estrutura do Repositório
```text
/
├── docs/                   # Documentação técnica gerada (Doxygen HTML) + Diagrama UML (PDF)
├── projeto-codeblocks/     # Arquivos de projeto prontos para abertura no Code::Blocks
├── src/                    # Código-fonte modularizado (Classes de Domínio, Entidades, Interfaces e Camadas)
└── bin/                    # Binários executáveis