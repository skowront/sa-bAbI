#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[61];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_0 = 96;                                       // Tag.BODY
    if (entity_6 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 79;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 50; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER