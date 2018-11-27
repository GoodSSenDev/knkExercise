#define TOSTRING(x) #x
#define TO_TOSTRING(x) TOSTRING(x)

#define LINE_FILE "Line "TO_TOSTRING(__LINE__)" of file " TO_TOSTRING(__FILE__)