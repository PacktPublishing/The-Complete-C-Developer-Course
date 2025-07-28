#ifndef CROP_H
#define CROP_H

class Crop {
	public:
		Crop(int height, int yield, int droughtResistance);
		int getHeight() const;
		int getYield() const;
		int getDroughtResistance() const;
		int getScore() const;

		bool operator==(const Crop& other) const;
		bool operator!=(const Crop& other) const;
		bool operator<(const Crop& other) const;
		bool operator>(const Crop& other) const;
		bool operator<=(const Crop& other) const;
		bool operator>=(const Crop& other) const;
		Crop operator+(const Crop& other) const;
		void operator=(const Crop& other);

	private:
		int height;
		int yield;
		int droughtResistance;
};
#endif
