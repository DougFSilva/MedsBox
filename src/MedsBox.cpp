#include <MedsBox.h>

MedsBox::MedsBox(int endereco){
    this->remedio = "sem remedio";
    this->descricao = "sem remedio";
    this->periodicidade = 0;
    this->hora = 0;
    this->minuto = 0;
    this->endereco = endereco;
    this->ativo = false;
}

MedsBox::MedsBox(String remedio, String descricao, int periodicidade, int hora, int minuto, int endereco, bool ativo){
    this->remedio = remedio;
    this->descricao = descricao;
    this->periodicidade = periodicidade;
    this->hora = hora;
    this->minuto = minuto;
    this->endereco = endereco;
    this->ativo = ativo;
}

String MedsBox::getRemedio(){
    return this->remedio;
}

String MedsBox::getDescricao(){
    return this->descricao;
}

int MedsBox::getPeriodicidade() {
    return this->periodicidade;
}

int MedsBox::getHora() {
    return this->hora;
}

int MedsBox::getMinuto() {
    return this->minuto;
}

int MedsBox::getEndereco() {
    return this->endereco;
}

bool MedsBox::getAtivo() {
    return this->ativo;
}

void MedsBox::setRemedio(String remedio) {
    this->remedio = remedio;
}

void MedsBox::setDescricao(String descricao) {
    this->descricao = descricao;
}

void MedsBox::setPeriodicidade(int periodicidade) {
    this->periodicidade = periodicidade;
}

void MedsBox::setHora(int hora) {
    this->hora = hora;
}

void MedsBox::setMinuto(int minuto) {
    this->minuto = minuto;
}

void MedsBox::setEndereco(int endereco) {
    this->endereco = endereco;
}

void MedsBox::setAtivo(bool ativo) {
    this->ativo = ativo;
}

