#include <sys/types.h>
#include <sys/socket.h>
#include <limits.h>

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <netdb.h>
#include <paths.h>
#include <errno.h>

#if !defined(__OpenBSD__)
#	include "strlcpy.c"
#	include "strlcat.c"
#endif

#include "usage.h"

extern	char	*optarg;

extern	int	 optind, opterr, optopt;
extern	int	 errno;

int
main(int argc, char **argv)
{
	char		 c = 0;
	int		 sfd = -1;

	while((c = getopt(argc, argv, "")) != -1) {
		default:
			usage(EXIT_FAILURE);
			/* NOTREACHED */
	}

	return EXIT_SUCCESS;
}
