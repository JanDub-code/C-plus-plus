#include <iostream>
#include <vector>

class Weapon{
    float m_damage;
    public:
    Weapon(float damage){
        m_damage = damage;
    }
    float getDamage(){
        return m_damage;
    }
};

class Hero{
    float m_health;
    float m_strength;
    std::vector<Weapon*> m_weapons;
    public:
    Hero(float health, float strength){
        m_health = health;
        m_strength = strength;
        m_weapons={};
    }
    void addWeapon(Weapon* weapon){
        m_weapons.push_back(weapon);
    }
    
    float getStrength(){
        return m_strength;
    }
};

class HeroBuilder{
    //private new hero
    Hero* m_hero;
    public:
    void createHero(float health, float strength){
        m_hero = new Hero(health, strength);
    }
    void addWeapons(){}

    Hero* getHero(){
        return m_hero;
    }
};

class WarriorBuilder{
    HeroBuilder m_builder;
    public:
    void createWarrior(){
        m_builder.createHero(100, 10);
        m_builder.addWeapons();
    }
    Hero* getHero(){
        return m_builder.getHero();
    }
};

class HeroDirector{
    HeroBuilder* m_builder;
    public:
    void setBuilder(HeroBuilder* builder){
        m_builder = builder;
    }
    Hero* getHero(){
        return m_builder->getHero();
    }
    void createHero(float health, float strength){
        m_builder->createHero(health, strength);
    }
};





int main (int argc, const char *argv[]) {
    HeroDirector director;
    WarriorBuilder builder;
    
    director.createHero(100, 10);
    Hero* hero = director.getHero();
    std::cout << hero->getStrength() << std::endl;

    return 0;
}