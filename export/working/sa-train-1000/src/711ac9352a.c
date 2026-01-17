#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_1 = 16;                                       // Tag.BODY
    char entity_0[88];                                   // Tag.BODY
    if (entity_4 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 95;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 58; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER