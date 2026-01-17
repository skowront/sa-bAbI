#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_4[82];                                   // Tag.BODY
    entity_7 = 53;                                       // Tag.BODY
    if (entity_0 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 55; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER