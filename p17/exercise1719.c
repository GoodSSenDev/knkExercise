struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
{{"new",        new_cmd},
 {"open",       open_cmd},
 {"close",      close_cmd},
 {"close all",  close_all_cmd},
 {"save",       save_cmd},
 {"save as",    save_as_cmd},
 {"save all",   save_all_cmd},
 {"print",      print_cmd},
 {"exit",       exit_cmd}};


void findCmd(char *string)
{
	for(int i = 0; i < 9; i++)
	{
		if (strcmp(file_cmd[i].*cmd_name,*string) == 0)
		{
			file_cmd[i].(*cmd_pointer)();
			break;
		}
	}
}