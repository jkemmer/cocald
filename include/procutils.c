#ifndef	PROCUTILS_H
#	warning	"Function file included directly without header file! Prototypes might be missing!"
#endif

/**
 * This wrapper of fork(2) forks the calling process
 * but not before flushing stderr and stdout.
 *
 * It also exits the parent process and continues on with
 * the child process, thus eliminating the need for a return
 * value
 */

void
mfork(void)
{
	fflush(stdout);
	fflush(stderr);

	switch(fork()) {
		/* Forking failed. Critical failure! */
		case -1:
			fprintf(stderr, "[!] Failed to fork child process: `%s'\n[!] Exiting...\n", strerror(errno));
			exit(EXIT_FAILURE);
			/* NOTREACHED */
		/* Child process */
		case 0:
			break;
		/* Parent process */
		default:
			exit(EXIT_SUCCESS);
	}
}
