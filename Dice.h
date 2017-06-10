#ifndef DICE_ROLLER
#define DICE_ROLLER
#include <random>

struct RNG {
	int dice(int throws, int sides) { // 4d6 = dice(4, 6);
		int total = 0;
		for (throws; throws > 0; throws--) total += random(1, sides);
		return total;
	}

	template<typename T>
	T random(T min, T max) {
		std::random_device rd;
		std::mt19937 seed(rd());
		std::uniform_int_distribution<T> result(min, max);
		return result(seed);
	}
};

#endif // !DICE_ROLLER