#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_1[59];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_2 = 91;            // Tag.BODY
    if(entity_9 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 66;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_9] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER