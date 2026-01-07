#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_0[42];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 37;            // Tag.BODY
    entity_7 = 13;            // Tag.BODY
    if(entity_5 < entity_7){  // Tag.BODY
    entity_5 = 3;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 1;             // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'B'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER