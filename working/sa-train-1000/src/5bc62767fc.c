#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3 = 85;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_2[54];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[83];                                   // Tag.BODY
    entity_1 = 27;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 75;                                       // Tag.BODY
    entity_5[entity_1] = 'v';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_9 = 70; entity_9 < entity_6; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'z';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER