#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_1[21];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_0 = 20;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_3] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER