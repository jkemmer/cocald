#ifndef	USAGE_H
#	warning "Function file included directly without header file! Prototypes might be missing!"
#endif

void
usage(int e)
{
	fprintf(stderr, "usage: %s [..]\n", __progname);
	exit(e);
}
