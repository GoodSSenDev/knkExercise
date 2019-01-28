while ((ch = fgetc(fp)) != EOF)
	if('.' == ch) n++;
fclose(fp);