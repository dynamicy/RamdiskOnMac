#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	system("diskutil erasevolume HFS+ \"ramdisk\" `hdiutil attach -nomount ram://8388608`");
	return 0;
}
