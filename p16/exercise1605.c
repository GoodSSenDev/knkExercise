struct data{
	int year;
	int month;
	int day;
};

a) 

int day_of_year(struct date d);
{
	return ((d.day) + (d.month * 30));
}

b)

int compare_dates(struct date d1, struct date d2)
{
	if ((d1.day + (d1.month * 30))==(d2.day + (d2.month * 30)))
		return 0;
	
	return ((d1.day + (d1.month * 30)) > 
		(d1.day + (d1.month * 30))? 1 : -1);
}