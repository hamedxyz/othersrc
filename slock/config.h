/* user and group to drop privileges to */
static const char *user  = "air";
static const char *group = "air";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",     /* after initialization */
	[INPUT] =  "#1d2021",   /* during input */
	[FAILED] = "#fabd2f",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
