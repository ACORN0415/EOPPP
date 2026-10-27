int test_func(void) {
    int v0 = 88;
    int v1 = 55;
    int v2 = 70;
    int v3 = 100;
    int v4 = 1;
    int v5 = 89;
    int v6 = 20;
    int v7 = 29;
    int i;
    v3 = v3 * 6;
    if (v6 > v2) { v6 = v2; }
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
