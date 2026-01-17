#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_1[26];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_9 = 65;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 69;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_6] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER