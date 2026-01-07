#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_3[36];                                   // Tag.BODY
    entity_5 = 88;                                       // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 70;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 80; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'j';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER