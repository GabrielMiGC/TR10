
# TRABALHO 10 

#### Manipulação bit-a-bit
##### Programa feito e testado em sistema operacional Linux Ubuntu 20.04 e GCC 9.4

> O quê esse código faz?

Recebe-se uma lista de inteiros que será utilizada como teste.
- Valores de entrada **devem** estar entre 0 e 5000
- Caso o input seja -1, o programa irá imprimir os valores da variável j (variável manipulada) em ordem crescente e sem repetições
- O programa suporta mais de um input
- Caso o input seja um Char, string ou float, o programa apresentará erro, repetindo a mensagem de inserção infinitamente

Esse código então manipula os bits de do valor inteiro 1, rearranjando a ordem de bits e fazendo com que assuma outros valores, nesse caso, os valores inseridos.  
Uma variável j recebe o valor manipulado de 1, porém só é impresso se esse valor for igual a algum dos valores do input.  

**Ex:**  
*inputs*: 5 1 2 6 4000 3000 -1  
*output*: 1 2 5 6 3000 4000  

> Como baixar?

Para fazer o download do código basta clica no botão "Code" e, em seguida, "Download Zip".  
Após o download os arquivos do repositório (TR3_511916 e README.md) devem ser extraídos do .zip.  

##### Alternativa

Caso deseja baixar somente o arquivo do programa, clique no arquivo TR3_511916 e em seguida clique com o botão direito em "Raw", selecione "Salvar link como" e em Salvar.

> Como compilar e executar esse código?

Para compilar o programa, insira em seu terminal Linux: *gcc TR3_511916.c -o TR3_511916*  
Para executar o programa, insira em seu terminal Linux: *./TR3_511916*  
Para testar, basta inserir um valor inteiro e apertar enter.  
