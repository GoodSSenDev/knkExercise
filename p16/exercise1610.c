struct point { int x, y;};
struct rectangle { struct point upper_left, lower_right; };

a)
int area(struct rectangle r)
{
	return ((r.upper_left.y - r.lower_right.y) 
			* (r.lower_right.x - r.upper_left.x) );
}

b)
struct point middle(struct reactangle r)
{
	return (struct point) {r.lower_right.x - ((r.lower_right.x - r.upper_left.x)/2),
							r.upper_left.y - ((r.upper_left.y - r.lower_right.y)/2)};
}

c)

struct reactangle move(struct reactangle r,int x,int y)
{
	r.lower_right.x += x;
	r.lower_right.y += y;
	r.upper_left.x += x;
	r.upper_left.y += y;
	
	return r;
}


bool liesPoint(struct point p, struct rectangle r)
{
	if (p.x > r.upper_left.x && p.x < r.lower_right.x) && 
		(p.y > r.lower_right.y && p.y < r.upper_left.y))
		return true;
		
	return flase;
}

