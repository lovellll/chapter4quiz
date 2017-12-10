// chapter4quiz.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
};

struct Monster
{
	std::string name;
	MonsterType monstertype;
	int health;

};

Monster m_torg{ "Torg",MonsterType::OGRE,145 };
Monster m_blurp{ "Blurp",MonsterType::SLIME,23 };

std::string monsterName(Monster monster)
{
	switch (monster.monstertype)
	{
		case MonsterType::OGRE:
			return "Ogre";
		case MonsterType::DRAGON:
			return "Dragon";
		case MonsterType::ORC:
			return "Orc";
		case MonsterType::GIANT_SPIDER:
			return "Giant spider";
		case MonsterType::SLIME:
			return "slime";
	}
}

void printMonster(Monster monster)
{
	std::cout << "This " << monsterName(monster) << " is named " << monster.name << " and has " << monster.health << " health.\n";

}



int main()
{
	printMonster(m_torg);
	printMonster(m_blurp);
	
	
	return 0;
}

