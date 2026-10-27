int test_func(void) {
    int v0 = 50;
    int v1 = 44;
    int v2 = 56;
    int v3 = 15;
    int v4 = 84;
    int v5 = 54;
    int v6 = 79;
    int v7 = 22;
    int i;
    v6 = v6 + v7;
    v3 = v3 - v2;
    int *__p = &v3;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
