# Gauntlet Project - Sefirot Claws
Um projeto ambicioso inspirado em personagens de animações e de jogos que utilizam manoplas de combate.

## Resumo
O projeto consiste na criação de uma manopla com várias utilidades, sendo algumas delas o controle remoto de dispositivos, Token RO portátil, interface modular de prototipagem, relógio multi-funções (não pode faltar) e outras coisas que não lembro no atual momento porque esqueci de anotar as ideias quando tive o brainstorming (enquanto caducava durante minha insônia).

## Fase inicial
Primeiro é necessário aprender o básico, como a criação de interfaces para o display, conexão sem fio com o ESP32-S3 (que é o que vou utilizar para aprender), armazenamento de dados, recepção e transmissão com módulos IR e conexão OTG. A ideia final é derivada da manopla, mas ainda não pode ser desenvolvida pois tem muita fundação na própria manopla. Posteriormente serão adicionados comandos com sEMG e IMU para controle espacial por gestos. 

## Alvo final (gauntlet only)
O objetivo é fazer um controlador universal que sirva não apenas para dispositivos IR, mas também para controlar computadores, celulares e até mesmo sua própria casa sem a necessidade de uma câmera ou coisas do tipo. Será necessário o desenvolvimento de um ecossistema universal para que a manopla possa se conectar e enviar comandos para qualquer SO, seja Windows, Linux (Debian, Fedora, Arch), Mac, Android, iOS, etc. 

O controle por gestos poderá ser definido pelo próprio usuário via interface web ou aplicação (a que for mais simples de desenvolver quando eu tiver com cabeça pra isso), mas o meu objetivo é adicionar funções simples que facilitem AINDA MAIS o meu cotidiano, principalmente em controle de mídia, Áreas de Trabalho, troca de programas, e vários outros.

A "plataforma de prototipagem" seria algo como uma interface com conexões POGO (pogo pin, aqueles pininhos que vocês encontram nos fones de ouvido, smartwatches e etc). A base é criar uma área em que o usuário possa adicionar os componentes que quer utilizar de forma modular (depois de modificar o componente e adicionar os conectores, né).

## Objetivos posteriores
Além da manopla, pretendo projetar, desenvolver e adicionar outros componentes (isso aqui é um projeto ENORME e MUITO ambicioso, eu só tenho ideia maluca e esse repositório serve pra documentar essas ideias), como um cyberdeck com possível conexão com a manopla, uma interface de rede que permita a criação de uma rede privada que acompanhe o usuário onde ele for, sistema de conexão com dispositivos e componentes de RA ou RV (vou testar com meus óculos, mas isso vai depender e MUITO da conexão com o cyberdeck), IA pessoal no cyberdeck, encaixe personalizado para fones, e etc (novamente eu não lembro da maior parte das ideias, vou atualizar isso quando lembrar). 

O projeto inteiro, por possuir muitos componentes, estava chegando a ser quase que uma armadura (e olha que surgiu da ideia de não precisar pegar o celular/controle pra ligar/desligar ar-condicionado em sala de aula). Documentar as ideias do projeto no repositório vai me ajudar a identificar e separar o que é essencial para mim e o que não precisa ser colocado/pode ser adicionado de forma modular no futuro. Assim eu posso diminuir E MUITO a ideia final, além de não precisar levar sei lá quantos KG de trambolho comigo quando eu quiser levar tudo pra algum lugar.

## *"Mas por que uma manopla?"*
Simplesmente porque eu acho legal. A ideia surgiu da [Meta Neural Band](https://www.meta.com/br/ai-glasses/meta-ray-ban-display-glasses-and-neural-band/?srsltid=AYCX9vLf-JrNI44b8a3A1isY-wnHRFjtuvnQ4A7T3sMMebSeaMo6WrtS) que, resumindo MUITO, é simplesmente uma pulseira utilizada para controlar o [Meta Ray Ban Display](https://www.meta.com/br/ai-glasses/meta-ray-ban-display-glasses-and-neural-band/?srsltid=AYCX9vLf-JrNI44b8a3A1isY-wnHRFjtuvnQ4A7T3sMMebSeaMo6WrtS) *e sim, o link é o mesmo porque não vendem a pulseira separadamente*. 

### *"Ah, mas por que você não faz uma pulseira então?"*
Eu gosto da ideia da pulseira, acho clean, mas o tanto de ideia maluca que eu quero colocar não cabe numa pulseira. Não com o conhecimento, tecnologia e orçamento que eu tenho. Pra começar, a ideia de ser uma manopla é ter várias ações como possíveis gatilhos. Gestos, toques, botões, potenciômetros (*sim, potenciômetros*) serão utilizados para fazer o controle de diversas (*eu não tô brincando*) funcionalidades.

### *"Então se for pensar assim, poderia ser um bracelete, né não?"*
Sim, mas não. Somente o bracelete funciona se eu já tiver aprendido como funciona a leitura de sinais elétricos e neurais, tecnologia aí que eu não aprendi e não tô com grana pra testar. E simplesmente fazer com que seja uma manopla trás mais possibilidades para macros e comandos, além de ser muito daora.

### *"Então me diz aí, como que funciona enquanto você não tem essa tecnologia e conhecimento?"*
*Botões! É tudo botão! Você é um botão, eu sou um botão, teu cachorro é um botão, teu p-*

Vamos lá, olhe pra sua mão e observe: o ser humano *(normalmente)* possui 5 dedos em cada mão e 4 deles *(desconsiderando o dedão)* possuem *(normalmente)* 2 articulações que conectam as falanges entre si *(desconsideramos aqui as articulações que conectam os dedos ao metacarpo)*, ou seja, as articulações interfalângicas da mão. Pense que cada uma dessas articulações pode se tornar um tipo de gatilho e que seu dedão pode ser o ativador. Você já teria aí 12 ações LITERALMENTE na palma da sua mão. Além disso, há a possibilidade de adicionar combinações entre esses gatilhos, então existem várias combinações disponíveis para serem configuradas.

### *"Nesse caso você poderia fazer só uma luva"*
Aí que tá, só a luva seria somente os gatilhos e o ativador. Não teria todas as funções que eu quero adicionar. A ideia aqui é ser capaz de fazer com que os comandos sejam executados mesmo que os sensores de gestos não funcionem.

### *"E de onde vem todo esse fanatismo por manoplas?"*
*Armaduras e armas comicamente grandes são a minha paixão.*

Bom, o meu gosto vem muito de [Mutante Rex](https://pt.wikipedia.org/wiki/Generator_Rex), [Prototype](https://pt.wikipedia.org/wiki/Prototype_(jogo_eletr%C3%B4nico)), [Yang de RWBY](https://pt.wikipedia.org/wiki/RWBY), [Lu e Ciel de Elsword](https://elwiki.net/w/Lu/Ciel), [SoulWorker](https://en.wikipedia.org/wiki/SoulWorker), [Monster Hunter](https://pt.wikipedia.org/wiki/Monster_Hunter), [Gigi Murin](https://hololive.hololivepro.com/en/talents/gigi-murin/), [Vi de League of Legends](https://www.leagueoflegends.com/pt-br/champions/vi/) e vários outros personagens e jogos que me fizeram entender que a proposta de armas ligeiramente maiores que o personagem são a coisa mais engraçada e divertida do mundo, além de serem altamente personalizáveis de acordo com o gosto do usuário. A manopla que eu vou desenvolver obviamente não vai ser comicamente grande nem utilizada para combate, mas é uma forma que eu encontrei de adicionar algo que eu gosto nos meus projetos. 

Pô, eu não vou criar uma espada que controla portão de garagem, não vou fazer um rifle pra ligar meu computador, não vou fazer um martelo pra mudar o canal da TV, então eu vou utilizar a coisa mais prática e legal que conheço e que não seria tão estranha de carregar por aí.

Também é a minha forma de fazer aquilo que vejo nas redes sociais vez ou outra, de pessoas utilizando as mãos para controlar algum objeto na tela, controlar o computador, de fazer formas com as mãos (mesmo sendo vídeo com pós processamento), é a minha forma de contribuir com o controle remoto de dispositivos, é a minha visão sobre o uso da tecnologia absurda exibida em filmes (ex. Homem de Ferro). Tá que a gente pode usar câmeras para controlar o PC agora (tenho um aluno que tá estudando sobre isso), dá pra adicionar IA nisso e fazer um controle absurdo sem nenhum equipamento adicional, mas eu quero fazer algo físico, algo tocável, com feedback, algo que eu possa chegar e utilizar no dispositivo sem precisar conectar um único cabo nele, fazendo apenas uma conexão bluetooth ou wifi. Também tem várias outras coisas que me fazem acreditar que a ideia é boa mas que nunca vem na cabeça quando quero explicar pra alguém.
