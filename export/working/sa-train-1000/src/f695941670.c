#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[40];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1 = 23;                                       // Tag.BODY
    char entity_0[87];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_6[77];                                   // Tag.BODY
    entity_8 = 6;                                        // Tag.BODY
    entity_2 = 34;                                       // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 83;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_8] = 'U';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_9 = 62; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_9] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER