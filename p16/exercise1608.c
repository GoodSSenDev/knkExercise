struct color {
	int red;
	int green;
	int blue;
};

a)
const struct color MAGENTA = {255,0,255};

b)
const struct color MAGENTA = {.red = 255, .green = 0, .blue = 255};
