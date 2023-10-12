#include <iostream>

using namespace std;

class Creature{
    public:
        Creature(int health = 100);
        virtual void Greet() const = 0;
        virtual void DisplayHealth() const;
    protected:
        int m_Health;
};

Creature::Creature(int health):
m_Health(health)
{}

void Creature::DisplayHealth() const{
    cout << "Health: " << m_Health << endl;
}

class Orc : public Creature{
    public:
        Orc(int health = 120);
        virtual void Greet() const;
};

Orc::Orc(int health):
Creature(health)
{}

void Orc::Greet() const{
    cout << "The orc grunts hello.\n";
}

class AnOrcBoss : public Orc{
    public:
        AnOrcBoss(int health = 180);
        virtual void Greet() const;
};

AnOrcBoss::AnOrcBoss(int health):
Orc(health)
{}

void AnOrcBoss::Greet() const{
    cout << "The orc boss growls hello.\n";
}

int main(){
    Creature *pCreature = new Orc();
    pCreature->Greet();
    pCreature->DisplayHealth();

    Creature *pCreature2 = new AnOrcBoss();
    pCreature2->Greet();
    pCreature2->DisplayHealth();
    return 0;
}