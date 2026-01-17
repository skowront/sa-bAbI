#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[58];        // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_3[91];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_9[2];         // Tag.BODY
    entity_1 = 67;            // Tag.BODY
    entity_8 = 7;             // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_1){  // Tag.BODY
    entity_3[entity_5] = 'D'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_7 = 20;            // Tag.BODY
    entity_2[entity_8] = '7'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_9[entity_7] = 'o'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER