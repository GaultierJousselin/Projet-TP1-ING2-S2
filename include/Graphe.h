#ifndef GRAPHE_H
#define GRAPHE_H


class Graphe
{

    private:
        unsigned int m_Counter;

    public:
        Graphe();
        virtual ~Graphe();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:


};

#endif // GRAPHE_H
