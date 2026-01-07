#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[21];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0 = 65;                                       // Tag.BODY
    for(entity_5 = 30; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_3[entity_5] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 54;                                       // Tag.BODY
    entity_9 = 22;                                       // Tag.BODY
    char entity_4[7];                                    // Tag.BODY
    char entity_2[69];                                   // Tag.BODY
    entity_4[entity_8] = 'N';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_9] = 'L';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER