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

#include "version.h"
#include "usage.h"
#include "procutils.h"		/* mfork() */
#include "config.h"		/* compiled in defaults */

extern	char	*optarg;

extern	int	 optind, opterr, optopt;
extern	int	 errno;

int
main(int argc, char **argv)
{
	char		 c = 0;
	int		 sfd = -1;

	/* Parse configuration file here */



	/* Parse command line options */

	while((c = getopt(argc, argv, "")) != -1) {
		default:
			usage(EXIT_FAILURE);
			/* NOTREACHED */
	}


	/* Fork into the background */
	mfork();

	/* Initialize the SSL library and load error strings */
	SSL_library_init();
	SSL_load_error_strigns();



	return EXIT_SUCCESS;
}
