#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_8[4];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3 = 89;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_6 = 52;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 82;                                       // Tag.BODY
    char entity_9[15];                                   // Tag.BODY
    char entity_5[87];                                   // Tag.BODY
    if (entity_0 < entity_2){                            // Tag.BODY
    entity_9[entity_6] = '6';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_0 = 99;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 58; entity_1 < entity_0; entity_1++){ // Tag.BODY
    entity_5[entity_3] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_8[entity_1] = 'R';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER