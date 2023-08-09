Acionamentos e Tempos

Os exercícios propostos devem ter sua temporização realizada pelos
periféricos temporizadores(TIM). A frequência do clock dos TIM é de 16 Mhz.
Estes exercicios trabalham com programação dos periféricos GPIO e TIM
através de tarefas que poderiam ser realizadas através de circuitos
sequenciais.
Sugere-se o uso de leds, arrays de leds ou displays de 7 segmentos como
dispositivos de saída, e chaves ou botões como dispositivos de entrada.
Os pinos de E/S e os TIM utilizados em cada exercício, quando não
indicados, são de livre escolha do projetista (o aluno, no caso). A única
restrição é o uso do led e botão de usuário disponível no kit, pois um dos
objetivos é também exercitar as habilidades de desenho e montagem de
circuitos eletrônicos, mesmo que o circuito seja simples.
Exercício 1 : “Hello word!”
Este é o clássico dos clássicos. Elabore um programa capaz de piscar o Led
com um ciclo de trabalho de 50% (metade do tempo ligado, metade
desligado) e com período de 200ms (5 Hz ou 5 piscadas/segundo). O led é
ativo em LOW e conectado ao PC0. Utilize o TIM11.
Exercício 2 : Altere o exercício 1 para que a frequência da piscada seja
função de uma entrada E. Quando E estiver em nivel alto, o led pisca a 2 Hz,
caso contrário pisca a 7 Hz. O led é ativo em HIGH e conectado ao PB0. A
entrada E será feita através do pino PC1. Utilize o TIM10.
Exercício 3 : Mensagem no led.
O led de status de um equipamento é utilizado para sinalizar sua condição de
operação, através de uma mensagem visual codificada como piscadas. O
período da mensagem é de 1s e o tempo de cada piscada é de 100 ms,
seguido por 100ms com o led apagado.
As mensagens seguem a codificação dada pela tabela abaixo:
Código Número piscadas Significado
0 Sempre aceso Funcionamento ok
1 1 Falha de comunicação
2 2 Entradas digitais abertas
3 3 Termopar aberto
4 4 Curto na saída
5 5 Fusível aberto

FUNDAÇÃO LIBERATO ELETRÔNICA
Sistemas Microprocessados I prof. Marcos Zuccolotto

O led é ativo em HIGH, conectado ao PA8.
Utilize os pinos PB3, PB4 e PB5 para entrada do código. Podem ser
utilizados botões, chaves ou mesmo jumpers.

Exercício 4 :
Monte dois conjuntos de 3 leds, um verde, um amarelo e um vermelho, nas
posições de um semáforo (se não tiveres as cores, não importa.).
Desenvolva um programa de controle para este semáforo de dois tempos. O
tempo de verde/vermelho deve ser de 700 ms e o tempo de amarelo aceso é
200ms. Faça a sequência Vd → Vd/Am → Vm
Os exercícios a seguir utilizam um conjunto de 8 leds montados em linha.
Pode usar um arranjo de leds ou até mesmo um display..
Exercício 5 :
Acione os leds em sequência, começando de uma ponta da linha e
percorrendo até a outra ponta, acionando somente um led. O led aceso deve
“percorrer” a extensão da linha, indo de uma extremidade a outra e
retornando. Seguir com este movimento indefinidamente.
Exercício 6 :
Acione os leds em sequência, começando de uma ponta da linha e
percorrendo até a outra ponta, acionando o proximo led, mantendo o anterior
acionado. Ao preencher a linha, retornar apagando os leds.
Exercício 7 :
Crie (invente, inove, seja criativo) um efeito visual na linha de leds, a exemplo
dos exercícios anteriores.
Exercício 8 :
Utilizando duas chaves conectadas ao kit, junte os codigos 5 a 7,
selecionando o efeito através das chaves.

FUNDAÇÃO LIBERATO ELETRÔNICA
Sistemas Microprocessados I prof. Marcos Zuccolotto

Os sons utilizados para produção de música possuem determinadas características
físicas, no que se refere às suas oscilações. Todos conhecem as sete notas musicais
"naturais", Dó, Ré, Mi, Fá, Sol, Lá e Si. A determinação dessas notas tem uma história muito
longa, e uma enorme influência da Matemática.
Uma corda esticada, como num violão, pode vibrar livremente com determinado valor de
oscilações por segundo. Se a nota musical que a corda produz ao vibrar livremente for um
Dó, quando reduzimos seu comprimento à metade (mantendo sobre ela a mesma tensão),
ela passará a vibrar com o dobro das oscilações, o que corresponderá à nota Dó uma oitava
acima. Se reduzirmos o comprimento para 2/3 do original, teremos então a nota Sol. E se
reduzirmos o comprimento para 3/4 do original, teremos a nota Fá.
O sábio grego Pitágoras (séc. VI a.C.) foi quem primeiro estabeleceu uma escala
de sons adequados ao uso musical, formando uma série a partir da fração de 2/3 (que
corresponde ao intervalo musical chamado de "quinta"). Usando uma sucessão de "quintas",
ele conseguiu definir doze notas musicais, sendo sete "naturais" (Dó, Ré, Mi, Fá, Sol, Lá e Si)
e mais cinco "acidentes": Dó#, Ré#, Fá#, Sol#, e Lá# (o símbolo # é chamado de
"sustenido").
A escala com intervalos acusticamente perfeitos definida por Pitágoras foi usada durante
séculos, até pouco depois da Idade Média, quando a Música ainda era restrita a regras
rígidas de composição e execução. Com o Renascimento, uma série de novas idéias
surgiram nas Artes em geral, e na Música em particular, e os compositores começaram a
tentar ultrapassar os limites musicais impostos até aquela época. Foi quando surgiu, então, a
necessidade de se transpor as melodias para outras tonalidades. Com a escala musical em
vigor isso era impraticável, pois os intervalos "perfeitos" só podiam ser usados numa única
tonalidade. Em outras palavras, uma melodia feita para a tonalidade de Dó não podia ser
executada na tonalidade de Fá, por exemplo, pois os intervalos entre as notas passariam a
soar desafinados.
Dentre as várias soluções apresentadas, a que vingou e é usada até os dias de hoje, foi a
"escala de temperamento igual", de Andreas Werkmeister, proposta em 1691. Essa escala,
hoje em dia chamada apenas de "escala temperada", possui também doze notas (sete
"naturais" e cinco "acidentes"), mas em vez de preservar os intervalos "perfeitos" (frações de
2/3, 3/4, etc.), as notas foram levemente ajustadas, pois Werkmeister tomou o comprimento
inteiro e dividiu-o exponencialmente em doze partes, baseado na raiz duodécima de 2. Isso
fez com que a relação entre qualquer nota e sua vizinha anterior fosse sempre igual à raiz
duodécima de 2 (aproximadamente 1,0594), o que permitiu, então, a execução de qualquer
música em qualquer tonalidade, uma vez que as relações entre intervalos iguais são sempre
as mesmas, não importa qual a referência (tonalidade) que se use. Apesar de a escala
temperada não possuir mais os intervalos acusticamente perfeitos de 3/2, 4/3, etc., os novos
intervalos correspondentes têm erros muito pequenos, praticamente imperceptíveis para o
ouvido. A nova escala temperada contou com o apoio do famoso compositor Johann
Sebastian Bach (séc. XVIII), que escreveu O Cravo Bem-Temperado, uma obra contendo 24
prelúdios e fugas, que cobrem as 24 tonalidades maiores e menores, e provando que a
proposta de Werkmeister não só era viável como não comprometia de forma alguma a
qualidade e a beleza da Música.

http://www.musicaeadoracao.com.br/tecnicos/matematica/musica_matematica.htm
Exercício 9: Elabore um programa que gere os sons de, ao menos, os 7 tons
maiores. As notas são acionadas através de botões e reproduzidas em um
alto-falante.
Nota Freq(Hz) Nota Freq(Hz) Nota Freq(Hz) Nota Freq(Hz)
Dó 261,63 Re# 311,13 Fá# 369,99 La 440
Dó# 227,18 Mi 329,63 Sol 392 Lá# 466,16
Re 293,66 Fá 349,23 Sol# 415,30 Si 493,88

FUNDAÇÃO LIBERATO ELETRÔNICA
Sistemas Microprocessados I prof. Marcos Zuccolotto

Desafio

Exercício 10:
Utilizando como base o código do exercicio 9, elabore um programa que
reproduza através do alto-falante uma música
Sugestão para conexão do alto-falante / buzzer :
