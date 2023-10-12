#include <iostream>

using namespace std;

class Enemy{
    public:
        Enemy();
        void Attack() const;
    protected:
        int m_Damage;
};

Enemy::Enemy():
m_Damage(10)
{}

void Enemy::Attack() const{
    cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

class Boss : public Enemy{
    public:
        Boss();
        void SpecialAttack() const;
    private:
        int m_DamageMultiplier;
};

Boss::Boss():
m_DamageMultiplier(3)
{}

void Boss::SpecialAttack() const{
    cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
    cout << " damage points!\n";
}

class FinalBoss : public Boss{
    public:
    FinalBoss();
        void MegaAttack() const;
    private:
        int m_MegaDamageMultiplier;
};

FinalBoss::FinalBoss():
m_MegaDamageMultiplier(10)
{}

void FinalBoss::MegaAttack() const{
    cout << "Special Attack inflicts " << (m_MegaDamageMultiplier * m_Damage);
    cout << " damage points!\n";
}

int main(){
    cout << "Creating an enemy.\n";
    Enemy enemy1;
    enemy1.Attack();
    cout << "\nCreating a boss.\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();
    cout << "\nCreating a final boss.\n";
    FinalBoss boss2;
    boss2.Attack();
    boss2.SpecialAttack();
    boss2.MegaAttack();
    return 0;
}