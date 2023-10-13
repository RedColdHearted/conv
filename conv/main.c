#include "conv.h"

int main(int argc, char ** argv)
{
if (argc < 3)
{
printf("Error\n");
return 1;
}
if (strcmp(argv[1], "cm2inch") == 0)
{
printf("%s cm => %.2lf inch\n",argv[2] ,cm2inch(atof(argv[2])));
}
else if (strcmp(argv[1], "inch2cm") ==0)
{
printf("%s inch => %.2lf cm\n",argv[2] ,inch2cm(atof(argv[2])));
}
else if (strcmp(argv[1], "ft2m") ==0)
{
printf("%s ft => %.2lf m\n",argv[2] ,ft2m(atof(argv[2])));
}
else if (strcmp(argv[1], "m2ft") ==0)
{
printf("%s m => %.2lf ft\n",argv[2] ,m2ft(atof(argv[2])));
}
else if (strcmp(argv[1], "km2mil") ==0)
{
printf("%s km => %.2lf mil\n",argv[2] ,km2mil(atof(argv[2])));
}
else if (strcmp(argv[1], "mil2km") ==0)
{
printf("%s mil => %.2lf km\n",argv[2] ,mil2km(atof(argv[2])));
}
return 0;
}
