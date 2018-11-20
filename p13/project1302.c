#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);
// c) I didn't do the c) part i could try make day containg month value or make another seperate variable.
int main()
{
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[3], time_str[3], msg_str[MSG_LEN+1];
	int day, time, i, j, num_remind = 0;
	
	for(;;) {
		fflush(stdin); // flush for clean buffer scanf but working only in window or linux
		// stackoverflow said Rather than using scanf() and have to deal with the buffer having invalid character, use fgets() and sscanf().
		if (num_remind == MAX_REMIND) {
			printf("-- No space left -- \n");
			break;
		}
		
		printf("Enter day and time (0 ~ 24) and reminder: ");
		scanf("%2d", &day);
		
		if (day == 0) break;
		if ( day < 0 || day > 31)
		{
			printf("write correct day (1 - 31)\n"); // (a)
			continue;
		}
		

		scanf("%2d", &time);// (b)
		
		if (time < 0 || time > 24)
		{// (b)
			printf("write correct tiem (0 - 24)\n"); 
			continue;
		}
		sprintf(day_str, "%2d", day);
		sprintf(time_str, "%2d", time);
		
		read_line(msg_str, MSG_LEN);
		
		for (i = 0; i < num_remind; i++)
			if ((strcmp(day_str, reminders[i]) < 0 ) && 
				(strcmp(time_str, reminders[i] + 5 ) < 0))// (b)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);
		
		strcpy(reminders[i], day_str);
		strcat(reminders[i], " ");
		strcat(reminders[i], time_str);
		strcat(reminders[i], msg_str);
		
		num_remind++;
	}
	
	printf("\nDay Time Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);
	
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}