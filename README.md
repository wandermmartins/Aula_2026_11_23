No primeiro exercício, eu montei uma grade de números com 3 linhas e 4 colunas (como uma pequena tabela) e usei dois laços for para somar os valores na vertical — ou seja, coluna por coluna, de cima para baixo, em vez de somar linha por linha. 
Cada soma de coluna foi guardada em um vetor separado e, no fim, o programa imprimiu o total de cada coluna na tela.

No segundo exercício, eu trabalhei com leitura de texto em C pegando o nome e a senha digitados pelo usuário com fgets, que é uma forma mais segura de ler palavras sem estourar o espaço reservado na memória. 
Como o fgets costuma guardar a quebra de linha (\n) quando apertamos Enter, usei strcspn para trocar esse \n pelo fim da string (\0), deixando o texto limpinho antes de exibi-lo na tela (e já deixei uma senha de referência salva no código para futuras comparações).
