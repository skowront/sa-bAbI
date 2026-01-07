#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[61];        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[10];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 90;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_1 = 78;            // Tag.BODY
    entity_8 = 63;            // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    entity_8 = 34;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 5;             // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 35;            // Tag.BODY
    entity_4[entity_9] = 'a'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[54];        // Tag.BODY
    entity_6[entity_8] = 'F'; // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_0] = 'h'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER