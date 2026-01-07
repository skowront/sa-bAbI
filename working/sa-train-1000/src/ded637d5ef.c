#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[6];         // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9 = 61;            // Tag.BODY
    entity_2 = 16;            // Tag.BODY
    char entity_5[92];        // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    entity_5[entity_2] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_7 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_7] = 'h'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER