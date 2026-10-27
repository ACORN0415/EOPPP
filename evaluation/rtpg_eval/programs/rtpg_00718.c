int test_func(void) {
    int v0 = 20;
    int v1 = 20;
    int v2 = 79;
    int v3 = 75;
    int v4 = 40;
    int v5 = 20;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v2;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
