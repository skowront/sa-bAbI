#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_8[98];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2 = 72;            // Tag.BODY
    entity_5 = 55;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_2 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 18;            // Tag.BODY
    }                         // Tag.BODY
    char entity_3[30];        // Tag.BODY
    entity_8[entity_2] = 'w'; // Tag.BUFWRITE_COND_SAFE
    int entity_0;             // Tag.BODY
    entity_0 = 27;            // Tag.BODY
    entity_3[entity_0] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER