# Objetivo
Essa funcionalidade busca possibilitar o uso da manopla como um controle universal para dispositivos que utilizam a tecnologia de controle via sinais Infravermelho. A ideia vai ser separada em algumas partes e precisará de alguns componentes que podem ser alterados com o passar do tempo. 

No momento vou separar essa funcionalidade por [Receptor](#receptor) e [Transmissor](#transmissor). Ao completar a funcionalidade, o usuário deve ser capaz de, NO MÍNIMO, controlar alguns dispositivos via botões pré-definidos por ele mesmo, modificar os controles via interface web e automatizar ações dependendo do dispositivo a ser controlado (macro). 

A finalidade? É simples: se livrar da dependência de ter sempre um controle para cada coisinha. Por que não colocar tudo no mesmo dispositivo? É mais prático, vai estar sempre ou quase sempre com você e também será de fácil acesso. No futuro serão implementados controles por gestos, mas aí é papo de sei lá quando eu vou conseguir material pra isso.
> [!NOTE]
> A ideia surgiu de um [controle remoto universal e temático](https://www.thewandcompany.com/eleventh-doctors-sonic) da empresa [The Wand Company](https://www.thewandcompany.com/). Este controle é baseado na [Chave de Fenda Sônica](https://pt.wikipedia.org/wiki/Chave_de_fenda_s%C3%B4nica), ferramenta utilizada pelo protagonista da série [Doctor Who](https://www.imdb.com/pt/title/tt0436992/), mais especificamente no período da 5ª à 9ª temporada da era moderna (antes da série ir pra Disney). 

## <div id='receptor'>Receptor</div>
Responsável por **receber** o sinal infravermelho de transmissores como **controles de TV**, **ar-condicionado**, **aparelho de som**, **projetores**, **portas automáticas**, etc.
Os sinais são armazenados em um cartão SD e nomeados com seu dispositivo-alvo.

### Como deve funcionar?
O usuário irá interagir com a interface da manopla e colocará ela no modo cadastro. Desse modo, o usuário poderá apontar o dispositivo controlador para a manopla e enviar os sinais infravermelhos. A cada sinal recebido, o usuário deverá cadastrar um gesto ou ação equivalente para ser utilizada como gatilho de ativação daquele sinal.

## <div id='transmissor'>Transmissor</div>
Responsável por enviar os sinais para cada dispositivo previamente configurado. O usuário deve selecionar qual dispositivo irá utilizar para começar a enviar sinais com a manopla.

### Como deve funcionar?
Após o cadastro de um dispositivo controlador, ele será armazenado na memória SD da manopla. É com este cadastro que o usuário poderá interagir. Ao selecionar e ativar um item cadastrado, basta que o usuário aponte a manopla para o dispositivo receptor e executar o gesto ou ação correspondente à resposta desejada.

# Fontes
Vozes da minha cabeça e algumas pesquisas relacionadas a controladores IR.
Baseado na [Chave de Fenda Sônica de Doctor Who](https://www.thewandcompany.com/eleventh-doctors-sonic/) da empresa [The Wand Company](https://www.thewandcompany.com/).
