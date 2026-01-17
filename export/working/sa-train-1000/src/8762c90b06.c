#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2 = 3;             // Tag.BODY
    char entity_4[38];        // Tag.BODY
    entity_5 = 70;            // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    entity_2 = 90;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 35;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_2] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER