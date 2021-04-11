# Readme of ownProject

## Code
```bash
using namespace std;

int main(int argc, char** argv){
	enum languages {german, english, french};
	string greetings[3] = {"Hallo Welt!","Hello world!","Salut monde!"};
	languages lang = french;
	cout << greetings[lang] << endl;
	return 0;
}
```
## Image
![An owl](https://www.cotswold-falconry.co.uk/images/our-birds/owls/turkmenian-eagle-owl.jpg)
## LaTex
Sei (X,$\rho$) metrischer Raum, $x:Y\mapsto X$ und $x_N:Y\mapsto X$.\\

Dann konvergiert $(x_N)_{N\in \mathbb{N}}$ punktweise gegen $x$, falls


   $\forall f\in Y:x_N(f) \underset{n \to \infty}{\longrightarrow} x(f)$


Dann konvergiert $(x_N)_{N\in \mathbb{N}}$ gleichmäßig gegen $x$, falls

   $\forall \delta >0\: \exists m\in\mathbb{N}:\forall N\ge m$ gilt $\forall f\in Y:\rho(x_N(f),x(f))<\delta$
