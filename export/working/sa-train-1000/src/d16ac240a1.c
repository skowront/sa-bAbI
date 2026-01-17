#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[27];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_4 = 64;            // Tag.BODY
    entity_6 = 23;            // Tag.BODY
    char entity_9[80];        // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_6] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_7] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER