int test_func(void) {
    int v0 = 57;
    int v1 = 56;
    int v2 = 50;
    int v3 = 19;
    int v4 = 23;
    int v5 = 27;
    int i;
    v2 = v2 - v5;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
