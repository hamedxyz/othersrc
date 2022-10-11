/* user and group to drop privileges to */
static const char *user  = "air";
static const char *group = "air";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1d2021",     /* after initialization */
	[INPUT] =  "#82ba48",   /* during input */
	[FAILED] = "#ee9911",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
