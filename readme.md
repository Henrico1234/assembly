# Comparador de Modelos LLM

---


## Descrição do Código (Implementação)
Este projeto tem como objetivo comparar diferentes modelos de linguagem natural (LLMs), como o ChatGPT e um modelo da Hugging Face. Ele permite ao usuário inserir um prompt e receber respostas de múltiplos modelos, além de avaliar e selecionar a melhor resposta com base em critérios como similaridade semântica e legibilidade.

## Tecnologias Utilizadas
- **Python** (versão recomendada: 3.8+)
- **OpenAI API** (ChatGPT)
- **Hugging Face Transformers**
- **Sentence Transformers** (para avaliação de respostas)
- **NumPy** (cálculo de métricas)
- **Textstat** (métrica de legibilidade)

## Estrutura do Projeto
```plaintext
comparador-llms/
│── factory.py            # Implementação dos modelos de LLM (ChatGPT e outro da Hugging Face)
│── strategy.py           # Estratégia de avaliação das respostas com critérios de similaridade e legibilidade
│── observer.py           # Implementação do padrão Observer para monitoramento da escolha de respostas
│── main.py               # Arquivo principal que executa o programa e interage com o usuário
│── requirements.txt      # Lista de dependências do projeto
│── README.md             # Documentação do projeto
```

## Configuração e Instalação

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/Henrico1234/comparador-llms.git
   cd comparador-llms
   ```

3. **Instale as dependências:**
   ```bash
   pip install -r requirements.txt
   ```

4. **Configure a API Key do OpenAI:**
   No arquivo `main.py`, adicione sua chave de API:
   ```python
   openai_api_key = "sua-api-key-aqui"
   ```

## Modo de Uso

1. **Execute o programa:**
   ```bash
   python main.py
   ```

2. **Interaja com o menu:**
   - Escolha a opção `1` para inserir um prompt.
   - O sistema consultará os modelos e exibirá as respostas.
   - A melhor resposta será escolhida com base em critérios definidos na estratégia de avaliação.
   - Escolha `2` para sair do programa.

## Exemplo de Saída
```
=== Menu ===
1. Fazer uma pergunta
2. Sair
Escolha uma opção: 1

Digite sua pergunta: O que é aprendizado de máquina?

Respostas dos LLMs:
ChatGPT: Aprendizado de máquina é um campo da IA que permite aos computadores aprenderem padrões a partir de dados.
OutroLLM: Machine learning é uma abordagem que utiliza algoritmos para identificar padrões em dados.

=== Atualização da Resposta ===
Melhor resposta escolhida: Aprendizado de máquina é um campo da IA que permite aos computadores aprenderem padrões a partir de dados.
Explicação: 
- Similaridade semântica: 0.92
- Legibilidade (Flesch-Kincaid): 72.5
```

## Considerações Finais
O projeto utiliza conceitos de Padrões de Projeto, como Factory, Strategy e Observer, para manter a modularidade e facilitar a adição de novos modelos de LLM.

# Autor
Nome: Henrico Costa 



