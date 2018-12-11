a)

struct color make_color(int red, int green, int blue)
{
	if(red < 0 ) red = 0;
	if(green < 0 ) green = 0;
	if(blue < 0 ) blue = 0;
	
	return (struct color) {red,green,blue};
}

b)

int getRed(struct color c);
{
	return (c.red);
}

c)

bool equal_color(struct color color1, struct color color2)
{
	if (color1 == color2) return true;
	
	return false;
}

d)
struct color brighter(struct color c)
{
	if(c.red == 0 && c.green == 0 && c.blue == 0)
		return (struct color) {3, 3, 3};
	
	if(c.red > 0 && c.red < 3) c.red = 3;
	if(c.green > 0 && c.green < 3) c.green= 3;
	if(c.blue > 0 && c.blue < 3) c.blue = 3;
	
	c.red /= 0.7f;
	c.green /= 0.7f;
	c.blue /= 0.7f;
	if(c.red > 255) c.red = 255;
	if(c.green > 255) c.green= 255;
	if(c.blue > 255) c.blue = 255;
	
	return (struct color) {c.red, c.green, c.blue};
	
}

e) 
struct color darker(struct color c)
{
	return (struct color) {c.red * 0.7f, c.green * 0.7f, c.blue * 0.7f};
}


