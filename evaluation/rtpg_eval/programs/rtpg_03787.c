int test_func(void) {
    int v0 = 56;
    int v1 = 44;
    int v2 = 10;
    int v3 = 61;
    int v4 = 35;
    int v5 = 42;
    int i;
    v3 = v3 + v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v5 = (int)__c;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
