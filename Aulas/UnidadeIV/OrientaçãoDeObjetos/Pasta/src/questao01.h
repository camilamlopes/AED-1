#ifndef EXERCICIO1_H
#define EXERCICIO1_H

#include <iostream>
#include <string>

using namespace std;

/* CLASSE PESSOA */
class Pessoa{
    //informações privadas (apenas a classe tem aceso)
    private:
    string nome;
    int idade;
    float altura,
          peso;

    //informações públicas (todos tem acesso)
    public:
    //construtor padrão
    Pessoa(){}

    //contrutor secundário -> modifica todas as variáveis ao mesmo tempo
    Pessoa(string nome, float altura, int idade, float peso){
        this -> nome = nome;
        this -> idade = idade;
        this -> altura = altura;
        this -> peso = peso;
    }
    
    //sets
    void setNome(string nome){ this -> nome = nome; }
    void setIdade(float idade){ this -> idade = idade; }
    void setAltura(float altura){ this -> altura = altura; }
    void setPeso(float peso){ this -> peso = peso; }

    //gets
    string getNome(){ return nome; }
    int getIdade(){ return idade; }
    float getAltura(){ return altura; }
    float getPeso(){ return peso; }


    void imprimir(){
        cout << "O seu nome: " << nome << endl;
        cout << "A sua idade: " << idade << endl;
        cout << "A sua altura: " << altura << endl;
        cout << "O seu peso: " << peso << endl;
    }
};

void EXERCICIO1();

#endif