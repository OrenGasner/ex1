#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* stringDuplicator(char* s, int times);

int main(){

}

char* stringDuplicator(char* s, int times){ //Duplicates s "times" times.
    assert(s);
    assert(times > 0);
    int len = strlen(s);
    char* out = (char*)malloc(sizeof(char)*(len*times+1));
    if(out == NULL){
        return NULL;
    }
    for (int i=0; i < times; i++){
        strcpy(out,s);
        out = out + len;
    }
    return out;
}
/* fixes :
 * 1) changed assert(!s) to assert(s)
 * 2) changed int LEN to int len.
 * 3) changed include brackets from "" to <>
 * 4) changed dynamic allocation to include sizeof(char) and added + 1 for null byte.
 * 5) changed for loop statement to i < times instead of i <= times.
 * 6) changed the order of lines in the for loop.
 * 7) changed assert(out) to return NULL.
 * 8) added comment to the function. */