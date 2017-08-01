<!-- .slide: data-state="no-toc-progress" --> <!-- don't show toc progress bar on this slide -->

# Prorgramação Orietanda a Objetos
<!-- .element: class="no-toc-progress" --> <!-- slide not in toc progress bar -->

[Diego Silva](https://github.com/diego91964) | [online][1] | [src][2]


[1]: https://diego91964.github.io/unipac/poo
[2]: https://github.com/diego91964/unipac/poo

[3]: http://lab.hakim.se/reveal-js/
[4]: https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet



----  ----

# 1. Introdução

Consiste em um paradigma de programação que se baseia na composição e interação
de objetos.

Note:
Os principais aspectos são: Objetos, Classes, Métodos, Instanciação, Reuso, Mensagens, Chamadas de Métodos, Atributos, Variáveis de Instância, Encapsulamento, Herança

----

## História

>"Alan Kay foi a primeira pessoa que teve a visão de representação por objetos,
tal ideia foi vendida para a Xerox que criou a linguagem Smaltalk."

[Fonte: The University of Tennessee](http://web.eecs.utk.edu/~huangj/CS302S04/notes/oo-intro.html)

Note:
A criação da orientação a objetos foi em 1970.

Inicialmente, as linguagens orientadas a objetos foram criadas
para a modelagem de objetos do mundo real, como:

* Simulações de fábrica
* Simulações de um sistema planetário
* Um PC desktop - objetos representam janelas, documentos, etc.


----

## Objetos

Um objeto possui um conjunto de dados, sendo capaz de armazenar dados e realizar operações com eles.
Não é necessário mostrar como tais operações foram implementadas.

Note:
Um carro pode ser considerado um objeto. O mesmo possui operações, como:
ligar,freiar, acelerar, abrir vidro, etc.

----

## Classes x Objetos

Para que exista um objeto, é necessário um modelo, a classe é este modelo, ela
define tudo que existe no objeto, até a implementação de suas operações.

Note:
Ainda utilizando o exemplo do carro, a classe consiste no projeto do veículo.

----

## Propriedades de uma Classe

Em uma classe é possível:
* Declarar as variáveis ​​do objeto.
* Declarar as operações do objeto.
* Definir a função que implementa cada uma dessas operações.

Note:
O conjunto de variáveis de uma classe é chamado de variáveis de instância.

----

## Classes para Objetos

Quando um programa quer uma nova instância de um objeto, ele pergunta a classe
apropriada para criar um novo objeto para ele. A classe aloca memória para manter
as variáveis ​​de instância do objeto e retorna o objeto para o programa.

Note:
Cada objeto sabe qual classe criou para que quando uma operação for solicitada
para esse objeto, ele pode procurar na classe a função que implementa essa
operação e chamar essa função.

----

## Herança

Herança consiste em uma forma de agrupar classes em grupo de operações e variáveis
genéricas, reutilizando estes recursos para classes mais específicas.

Note:
Um carro é um veículo. Um veículo tem variáveis genéricas, como cor e modelo. Também
possui operações genéricas, como ligar e desligar. Um caminhão possui carroceria, um
carro não, ou seja, isto são propriedades específicas.


----

## Herança

Uma classe que herda variáveis e operações de uma classe genérica é chamada de
subclasse e a classe genérica é chamada de superclasse.

![](img/heranca.svg)


Note:
A subclasse não pode excluir nenhuma propriedade herdada da superclasse.

----

## Exemplo Herança

<img src="img/heranca.jpg" width="500"/>

[Fonte: Devmedia](http://www.devmedia.com.br/sobrecarga-e-sobreposicao-de-metodos-em-orientacao-a-objetos/33066)

----

## Sobreposição

A subclasse é livre para definir novas funções para essas operações, isso é chamado de
sobreposição.

Note:
* A subclasse pode seletivamente quais funções sobrepõe.
* Todas as funções que não são substituídas são herdadas.

----


## Exemplo de Sobreposição

<img src="img/sobreposicao.jpg" width="500">

[Fonte: Devmedia](http://www.devmedia.com.br/sobrecarga-e-sobreposicao-de-metodos-em-orientacao-a-objetos/33066)



----

## Parâmetro

Uma operação é chamada de método e recebe parâmetros para executar a sequência
de ações.

```
  Carro.setVelocidade(velocidadeAtual);

  #O Parâmetro do método será a velocidade atual.

```

----

## Sobrecarga

Uma sobrecarga de método consiste em manter vários métodos com o mesmo nome, mas
com número de parâmetros diferentes.

```
  Veiculo.setVelocidade(velocidadeAtual);
  Carro.setVelocidade(velocidadeAtual,marcha);
  Caminhao.setVelocidade(velocidadeAtual,marcha,quantidadeDeArReservatorio)


```

----





## reveal.js: Showroom

Some reveal.js presentations:
* *"Official"* demo: http://lab.hakim.se/reveal-js
* http://slid.es/gsklee/functional-programming-in-5-minutes
* http://www.adidahiya.com/design.html
* http://slides.drublic.de/awesome-code
* http://hoebel.net/presentations_archive/saltstack/saltstack.html

More demos: https://github.com/hakimel/reveal.js/wiki/Example-Presentations


----  ----

# 2. fabric and fabsetup

----

# fabric

> "Fabric is a Python (2.5-2.7) library and command-line tool
> for streamlining the use of SSH for application deployment
> or systems administration tasks."
>
> -- <cite>http://www.fabfile.org/</cite>

<div class="fragment" />

__`>>shell-deploy-scripts on steroids!<<`__

----

## fab and fabfile.py

* __`fabfile.py`__ contains the fabric tasks
  * Bash commands _"written"_ in Python (2.5 - 2.7)
* Command __`fab`__ executes a task

----

example __`fabfile.py`__:

```python
from fabric.api import env, run, task

@task
def show_ips():
    ips = run('/bin/hostname -I')
    print('IPs of {}:\n  {}'.format(env.host, ips))
```

<div class="fragment" />

__`fab`__ uses the fabfile of the current dir:

```bash
> ls
fabfile.py
```

<div class="fragment" />

```bash
> fab show_ips  -H user@example_host
[example_host] Executing task 'ip_addresses'
[example_host] run: hostname -I
[example_host] out: 1.2.3.4

IPs of mobi12.uni.cx:
  1.2.3.4

  Done.  Disconnecting from example_host... done.
```

----

# fabsetup

Collection of __fabric tasks__:
* set up an [owncloud server][7]
* set up an own android app repository (own [F-Droid server][8])
* set up a linux desktop:
  eg. [configure vim, tmux, solarized colors][9] *(dotfiles on steroids!)*
* set up ...
* <!-- .element: class="fragment" -->
 __set up everything you need for a *reveal.js* presentation__:
 ```sh
 fab setup.revealjs
 ```

[7]: https://github.com/theno/fabsetup/blob/master/howtos/owncloud.md
[8]: https://github.com/theno/fabsetup/blob/master/howtos/f-droid-repo.md
[9]: https://github.com/theno/fabsetup/blob/master/howtos/no-sudo.md


----  ----

# 3. fab setup.revealjs

----

## A reveal.js Template

boilerplate for getting started on a nice reveal.js presentation:
* reveal.js code installed (comes with built-in plugins)
* Additional reveal.js plugins installed
* __`index.html`__ prepared accordingly
* All slides are defined in __`slides.md`__

----

## Set It Up

* install __fabsetup__:
```sh
sudo apt-get install  git  fabric              #
mkdir -p ~/repos  &&  cd ~/repos
git clone https://github.com/theno/fabsetup
```

* run fabric task __`setup.revealjs`__:
```sh
cd ~/repos/fabsetup
fab setup.revealjs  -H localhost
```

----

## fab setup.revealjs

*Asks for:*
 * Presentation base directory
 * Title
 * Sub-title
 * Short description

----

## fab setup.revealjs

*Optionally:*
 * Create github repo
 * Download npm libs

*When running again (also optional):*
 * Re-install reveal.js codebase

----

[howto](https://github.com/theno/fabsetup/blob/master/howtos/revealjs.md)

----

## Boilerplate File Structure

```sh
~/repos/my_presi> tree
.
├── .git/
├── .gitignore
│
├── README.md   <-- Short description and usage
│
├── slides.md   <-- All slides are defined here
├── index.html  <-- Configuration
├── img/
│   └── thanks.jpg  <-- good place for images
│
└── reveal.js/   <--.
    ├── css/         `-- reveal.js code "hidden" in a subdir
    ├── js/               (keeps the basedir clean)
    ├── plugin/
    ...
    ├── img -> ../img                \
    ├── reveal.js -> ../reveal.js     |_ symbolic links in order
    ├── slides.md -> ../slides.md     |   to run `npm start`
    └── index.html -> ../index.html  /
```

----

*template features*

----

## Plugins Built-In

All the built-in plugins are enabled in the __`index.html`__:
* __[marked.js, markdown.js][10]__: Markdown support
* __[highlight.js][11]__: Code syntax highlighting
* __zoom.js__: Zoom in and out with `ALT+click`
* __[notes.js][13]__: Speaker notes
* __[math.js][14]__: Formatting math expressions

[10]: https://github.com/hakimel/reveal.js/#markdown
[11]: https://github.com/hakimel/reveal.js/#code-syntax-highlighting
[13]: https://github.com/hakimel/reveal.js/#speaker-notes
[14]: https://github.com/hakimel/reveal.js/#mathjax

----

## Additional Plugins

This additional plugins will be installed and set up, too:
* __[menu.js][15]__: Slideout menu (slide index, change theme and transition)
* __[toc-progress.js][16]__: *"LaTeX Beamer-like progress indicator"*
* __[title-footer.js][17]__: *"Footer showing title of presentation"*

[15]: https://github.com/denehyg/reveal.js-menu#revealjs-menu
[16]: https://github.com/e-gor/Reveal.js-TOC-Progress
[17]: https://github.com/e-gor/Reveal.js-Title-Footer

----

## Customizations in reveal.js

* Don't Capitalize Titles (NO FULL UPPERCASE HEADINGS)
* Images are displayed without border

----

## Special Markdown Slide dividers

*Two dividers exist:*
* New horizontal slide: `\n----  ----\n`
* New vertical slide: `\n----\n`

*Win-win:*
* ["Raw"][18] `slides.md`: Easy to read and edit
* Horizontal lines in [rendered Markdown][19]: Easy to read, too

[18]: https://raw.githubusercontent.com/theno/revealjs_template/master/slides.md
[19]: https://github.com/theno/revealjs_template/blob/master/slides.md

----

## Create PDF

*cumbersome.*
* With [decktape](https://github.com/astefanutti/decktape)

```sh
cd ~/bin/decktape/active && \                                               #
./phantomjs decktape.js --size 1280x800 URL ~/repos/my_presi/my_presi.pdf
```

* Or just print the `slides.md` rendered by github into a PDF:
  https://github.com/theno/revealjs_template/blob/master/slides.md

---

* [Printing with chromium](https://github.com/hakimel/reveal.js#pdf-export)
  (or chrome) does not work well:
  https://theno.github.io/revealjs_template/?print-pdf#/

Note:
URL can be of:
* localhost:8000
* github.io page

----

## Shortcut

Checkout the template presentation repo:
```sh
git clone https://github.com/theno/revealjs_template  ~/repos/my_presi
```

Then:
* Adjust `<title>reveal.js template</title>` in __`index.html`__
* Edit __`slides.md`__
* Add symbolic link:
  ```sh
  cd ~/repos/my_presi  &&  ln -snf ../reveal.js  reveal.js/reveal.js
  ```


----  ----

# 4. Publishing at github.io


----

## Publishing as github page

A github repo (with `index.html`) can be rendered into a github.io page

1. Add remote repo at github.com <br>
   *(automated in fabsetup task setup.revealjs)*

1. [Configure][20] entry point for github.io page <br>
   *(manually, select "master branch")*


[20]: https://help.github.com/articles/configuring-a-publishing-source-for-github-pages/
[1_]: https://theno.github.io/revealjs_template
[2_]: https://github.com/theno/revealjs_template


----  ----

# 5. Conclusion and Outlook

----

## Conclusion

* Presentations with __reveal.js__ are fancy and nice
* Writing slides in __Markdown__ is easy
* __fabric__ is a framework for powerfull setup scripts
* __fabsetup__ is a collection of fabric tasks

----

__`fab setup.revealjs`__ (one of this tasks):
  Creates the boilerplate of your presentation:
  * Clean basedir (reveal.js codebase hidden in a subdir)
  * Slides are written in a __Markdown file__
  * Usefull plugins enabled (eg. __footer, toc, menu__)
  * Versioning with __git__
  * Publishing at __github.io__

__`>>just edit the slides.md<<`__  <!-- .element: class="fragment" -->

----

## Outlook

* Publishing with own webserver
  * Implement restricted access
* Custom design
  * Create themes / corporate design
* Explore [more plugins][21]
* [Customize][23] fabsetup task `setup.revealjs`

---

Alternative:

[prez][22] -- *"Opiniated Reveal slideshow generator with nice
PDF output and ability to treat notes as first-class content."*

[21]: https://github.com/hakimel/reveal.js/wiki/Plugins,-Tools-and-Hardware
[22]: https://github.com/byteclubfr/prez
[23]: https://github.com/theno/fabsetup/blob/master/howtos/fabsetup_custom.md

----

## References

* reveal.js: [http://lab.hakim.se/reveal-js](http://lab.hakim.se/reveal-js/)
  * at github: [https://github.com/hakimel/reveal.js](https://github.com/hakimel/reveal.js)

---

* markdown: [https://daringfireball.net/projects/markdown](https://daringfireball.net/projects/markdown/)
  * cheatsheet: [https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)

---

* fabric: [http://www.fabfile.org](http://www.fabfile.org/)
  * at github: [https://github.com/fabric/fabric](https://github.com/fabric/fabric)

---

* fabsetup: [https://github.com/theno/fabsetup](https://github.com/theno/fabsetup)
  * revealjs [howto](https://github.com/theno/fabsetup/blob/master/howtos/revealjs.md)


----  ----

<!-- .slide: data-state="no-toc-progress" --> <!-- don't show toc progress bar on this slide -->

### *Thank You for Your attention!*
<!-- .element: class="no-toc-progress" -->

![](img/thanks.jpg)
