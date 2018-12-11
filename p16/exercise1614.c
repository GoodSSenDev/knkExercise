struct shape {
	int shape_kind;
	struct point center;
	union {
		struct {
			int height, width;
		}rectangle;
		struct {
			int radius;
		}circle;
	}u;
} s;
enum {RECTANGLE,CIRCLE} shape_kind;

a) area

int area(struct shape s)
{
	if (shape_kind == RECTANGLE)
		return (s.u.rectangle.height * s.u.rectangle.width);
	if (shape_kind == CIRCLE)
		return (s.u.circle.radius * s.u.circle.radius * 3.14f);
	
	return 0;
}

b) movePoint

struct shape movePoint(struct shape s, int x, int y)
{
	s.center.x += x;
	s.center.y += y;
	
	return s;
}

c) scale

struct shape scale(struct shape s, double c)
{
	s.center.x /= c;
	s.center.y /= c;
	
	if (shape_kind == RECTANGLE)
	{
		s.u.rectangle.height /= c;
		s.u.rectangle.width /= c;
	}
	if (shape_kind == CIRCLE)
		s.u.circle.radius /= c;
	
	return s;
	
}