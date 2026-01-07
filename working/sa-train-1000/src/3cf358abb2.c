#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_0[74];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 57;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_2 = 60;              // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 68;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_5[82];          // Tag.BODY
    entity_3 = 45;              // Tag.BODY
    entity_0[entity_4] = 'O';   // Tag.BUFWRITE_COND_SAFE
    char entity_1[77];          // Tag.BODY
    entity_7 = 68;              // Tag.BODY
    entity_5[entity_7] = 's';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_3] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER