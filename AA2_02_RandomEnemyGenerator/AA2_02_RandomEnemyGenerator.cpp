#include "Enemy.h"
#include <iostream>

#define MAX_ENEMIES 5

int main()
{
	Enemy enemy;
	Enemy enemies[MAX_ENEMIES];
	Enemy possibleEnemy;
	bool EqualEnemy;
	srand(time(NULL));

	for (int i = 0; i < MAX_ENEMIES; i++)
	{

		enemy = createRandomEnemy();

		for (int j = 0; j < i; j++)
		{
			EqualEnemy = equalEnemies(enemy, enemies[j]);
			if (EqualEnemy == false)
			{
				possibleEnemy = createRandomEnemy();
			}
		}
	}

	for (Enemy enemyTest : enemies) {
		std::cout << "List of enemies: " << enemyTest.name << "is a " << getEnemyTypeString(enemyTest.type) << "whose life is " << enemyTest.health << std::endl;
	}

}


