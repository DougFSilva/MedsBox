#ifndef _MEDSBOX_H
#define _MEDSBOX_H

#include <Arduino.h>

class MedsBox {
    private: 
        String id;
        String remedio;  
        String descricao;
        int periodicidade;
        int hora;
        int minuto;
        int endereco;
        bool ativo;

    public:
        MedsBox(String id, int endereco);
        MedsBox(String id, String remedio, String descricao, int periodicidade, int hora, int minuto, int endereco, bool ativo);
        String getId();
        String getRemedio();
        String getDescricao();
        int getPeriodicidade();
        int getHora();
        int getMinuto();
        int getEndereco();
        bool getAtivo();
        void setId(String id)
        void setRemedio(String remedio);
        void setDescricao(String descricao);
        void setPeriodicidade(int periodicidade);
        void setHora(int hora);
        void setMinuto(int minuto);
        void setEndereco(int endereco);
        void setAtivo(bool ativo);
};

#endif