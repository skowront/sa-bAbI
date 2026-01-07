#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[51];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 10;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 29;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 56; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER