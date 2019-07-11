#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "util.h"
#include "slp.h"

void* checked_malloc(int len){
    void* p = malloc(len);
    assert(p);
    return p;
}

int maxargs(A_stm stm)
{
    switch (stm->kind)
    {
    case A_compoundStm: return 0; break;
    case A_assignStm: return 0; break;
    case A_printStm: return 0; break;
    
    default:
        break;
    }
}


string String(char* s)
{
    string str = checked_malloc(sizeof(s) + 1);
    strcpy(str, s);
    return str;
}