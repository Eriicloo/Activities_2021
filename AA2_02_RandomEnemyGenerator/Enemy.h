#pragma once
#include <string>
#include <iostream>
#include <fstream> 

enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH };

std::string getEnemyTypeString(EnemyType enemy) {
	enemy = EnemyType::ZOMBIE;
	std::string enemyType;

	switch (enemy) {
	case EnemyType::ZOMBIE:
		enemyType = "ZOMBIE";
		break;
	case EnemyType::VAMPIRE:
		enemyType = "VAMPIRE";
		break;
	case EnemyType::GHOST:
		enemyType = "GHOST";
		break;
	case EnemyType::WITCH:
		enemyType = "WITCH";
		break;
	default:
		break;
	}
	return enemyType;
}


struct Enemy {
	EnemyType type;
	std::string name;
	int health = 0;
};

bool equalEnemies(Enemy enemy1, Enemy enemy2) {
	if (enemy1.type == enemy2.type && enemy1.name == enemy2.name) return true;
	else return false;
}

Enemy createRandomEnemy() {
	Enemy enemy;

	//NAME
	std::string randomNames[] = { "LUNA", "BLABLA", "BLEBLEBLE", "BLUBLUBLU", "MIAU" }; // 0 1 2 3 4
	int enemyNameRand = rand() % 5;
	switch (enemyNameRand)
	{
	case 0:
		enemy.name = randomNames[0];
		break;
	case 1:
		enemy.name = randomNames[1];
		break;
	case 2:
		enemy.name = randomNames[2];
		break;
	case 3:
		enemy.name = randomNames[3];
		break;
	case 4:
		enemy.name = randomNames[4];
		break;
	default:
		break;
	}

	//HEALTH
	int minHealth = 0;
	int maxHealth = 100;
	enemy.health = rand() % (minHealth - maxHealth + 1) + minHealth;

	//TYPE
	int enemyType = rand() % 5;
	switch (enemyType)
	{
	case 0:
		enemy.type = EnemyType::ZOMBIE;
		break;
	case 1:
		enemy.type = EnemyType::VAMPIRE;
		break;
	case 2:
		enemy.type = EnemyType::GHOST;
		break;
	case 3:
		enemy.type = EnemyType::WITCH;
		break;
	default:
		break;
	}

	return enemy;
};
