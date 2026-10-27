int test_func(void) {
    int v0 = 27;
    int v1 = 92;
    int v2 = 100;
    int v3 = 38;
    int v4 = 46;
    int v5 = 83;
    int v6 = 16;
    int i;
    v3 = v3 * 5;
    if (v5 > v4) { v5 = v4; }
    v3 = 90;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    int *__p = &v5;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
