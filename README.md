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
