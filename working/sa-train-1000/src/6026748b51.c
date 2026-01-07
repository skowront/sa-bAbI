#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[21];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_2 = 0;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_8[68];        // Tag.BODY
    entity_4[entity_2] = 'w'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 33;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_1] = 'P'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER