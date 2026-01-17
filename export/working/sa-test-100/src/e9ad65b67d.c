#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    char entity_9[20];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 54;                                       // Tag.BODY
    if (entity_8 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 84;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 22; entity_2 < entity_8; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_4[74];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 2;                                        // Tag.BODY
    entity_4[entity_0] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_2] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER