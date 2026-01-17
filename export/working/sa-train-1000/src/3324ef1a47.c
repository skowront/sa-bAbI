#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    entity_5 = 0;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_2 = 68;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_3[44];                                   // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_9[86];                                   // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 94;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 14; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_5] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[85];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 4;                                        // Tag.BODY
    entity_4[entity_0] = '6';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER