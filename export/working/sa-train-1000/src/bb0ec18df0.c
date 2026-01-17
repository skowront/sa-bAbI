#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_4 = 35;            // Tag.BODY
    entity_6 = 70;            // Tag.BODY
    char entity_5[75];        // Tag.BODY
    if(entity_6 < entity_4){  // Tag.BODY
    entity_6 = 78;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 83;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_6] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER