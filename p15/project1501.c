void write_line(void)
{
	int extra_spaces, spaces_to_insert, i, j;
	
	extra_spaces = MAX_LINE_LEN = line_len;
	for (i = (line_len - 1) ; i >= 0; i--) {
		if (line[i] != ' ')
			putchar(line[i]);
		else {
			spaces_to_insert = extra_spaces / (num_words - 1);
			for (j = 1; j <= spaces_to_insert + 1; j++)
				putchar(' ');
			extra_spaces -= spaces_to_insert;
			num_words--;
		}
	}
	putchar('\n');
}