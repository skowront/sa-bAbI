#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_8[10];        // Tag.BODY
    entity_0 = 26;            // Tag.BODY
    if(entity_9 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 30;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_8[entity_9] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[18];        // Tag.BODY
    entity_3 = 23;            // Tag.BODY
    entity_7[entity_3] = 'a'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER