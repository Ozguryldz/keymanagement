#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char* path = "test_write.txt";
    FILE* fp = fopen(path, "r+");

    if(!fp)
        fprintf(stderr, "file %s could not be opened\n", path);

    const char* buf = "Ozgur Bugun Hava cok sicak\n";
    fwrite(buf, 1, strlen(buf), fp);
    fwrite(buf,1,strlen(buf), fp);

    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0, SEEK_SET);


    fclose(fp);
    return 0;
    
}