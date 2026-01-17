#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_5[5];                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 15;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 55;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 47; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER