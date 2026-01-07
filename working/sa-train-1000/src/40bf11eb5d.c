#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_5[87];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1 = 78;            // Tag.BODY
    entity_6 = 65;            // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    entity_1 = 25;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 2;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'w'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER