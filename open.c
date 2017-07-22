#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char **argv)
{
	char buffer[50];

	int fd = open(argv[1],O_RDONLY);
	int n = read(fd,buffer,sizeof(buffer));
	write(1,buffer,n);
}
