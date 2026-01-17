#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_1[35];                                   // Tag.BODY
    entity_7 = 89;                                       // Tag.BODY
    if (entity_2 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 67;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 26; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_1[entity_6] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[78];                                   // Tag.BODY
    entity_8 = 89;                                       // Tag.BODY
    entity_0[entity_8] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER