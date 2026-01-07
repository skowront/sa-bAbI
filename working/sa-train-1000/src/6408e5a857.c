#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_0[71];        // Tag.BODY
    entity_4 = 10;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_1[37];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_3 = 91;            // Tag.BODY
    if(entity_5 < entity_3){  // Tag.BODY
    entity_1[entity_4] = 's'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_5 = 2;             // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'h'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER