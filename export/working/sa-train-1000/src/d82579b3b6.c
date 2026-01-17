#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_7[27];        // Tag.BODY
    entity_3 = 72;            // Tag.BODY
    entity_5 = 55;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    entity_5 = 84;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 70;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[72];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_7[entity_5] = 'v'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 28;            // Tag.BODY
    entity_2[entity_0] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER