#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_3 = 25;                                       // Tag.BODY
    entity_0 = 55;                                       // Tag.BODY
    char entity_9[34];                                   // Tag.BODY
    char entity_7[12];                                   // Tag.BODY
    entity_9[entity_3] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_4;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 46;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 96; entity_4 < entity_6; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7[entity_4] = 'e';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[40];                                   // Tag.BODY
    entity_5 = 84;                                       // Tag.BODY
    entity_2[entity_5] = 'v';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER