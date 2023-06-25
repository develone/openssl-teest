#include <stdio.h>
#include <string.h>
FILE *fptr1, *fptr2, *fptr3;
FILE *fptr4, *fptr5;
char key[65];
char key32rd[65];
char key32[65];

char command[200];
char command1[200];

int error = 0;

int main() {
fptr1 = fopen("../tmp/64bitkey", "r");
fscanf(fptr1,"%s",key);
printf("%s\n",key);
strcpy(command,"sed -i '");
printf("command %s\n",command);

strcat( command,"s/4e6f772077652061726520656e676167656420696e2061206772656174206369/");
printf("command %s\n",command);
strcat(command,key);
strcat(command,"/'");
printf("command %s\n",command);
strcat(command," ../scripts/tmp.enc");
printf("command %s\n",command);
error = system(command);

strcpy(command1,"sed -i '");
printf("command1 %s\n",command);

strcat( command1,"s/4e6f772077652061726520656e676167656420696e2061206772656174206369/");
printf("command1 %s\n",command);
strcat(command1,key);
strcat(command1,"/'");
printf("command1 %s\n",command1);
strcat(command1," ../scripts/tmp.dec");
printf("command1 %s\n",command1);
error = system(command1);
fclose(fptr1);

fptr2 = fopen("../tmp/40bitkey", "r");
fscanf(fptr1,"%s",key32rd);
printf("key32rd %s\n",key32rd);
strncpy(key32,key32rd,32);
printf("key32 %s\n",key32);

strcpy(command,"sed -i '");
printf("command %s\n",command);

strcat( command,"s/23ae14f4a7b2dc7f1dd89cf6f07e4048/");
printf("command %s\n",command);
strcat(command,key32);
strcat(command,"/'");
printf("command %s\n",command);
strcat(command," ../scripts/tmp.enc");
printf("command %s\n",command);
error = system(command);

strcpy(command1,"sed -i '");
printf("command1 %s\n",command);

strcat( command1,"s/23ae14f4a7b2dc7f1dd89cf6f07e4048/");
printf("command1 %s\n",command);
strcat(command1,key32);
strcat(command1,"/'");
printf("command1 %s\n",command1);
strcat(command1," ../scripts/tmp.dec");
printf("command1 %s\n",command1);
error = system(command1);

/*
sed 's/4e6f772077652061726520656e676167656420696e2061206772656174206369/c0236fb85bbbe382cc49ae72c1c3bbd3747602ff6d9149b82a418d355a923fa3/' scripts/tmp.enc
*/

fptr2 = fopen("scripts/tmp.enc", "r");
//fptr3 = fopen("scripts/tmp.enc", "w");

fptr4 = fopen("scripts/tmp.dec", "r");
//fptr5 = fopen("scripts/tmp.dec", "w");
/*
sed 's/4e6f772077652061726520656e676167656420696e2061206772656174206369/c0236fb85bbbe382cc49ae72c1c3bbd3747602ff6d9149b82a418d355a923fa3/' scripts/tmp.dec
*/
return 0;
}