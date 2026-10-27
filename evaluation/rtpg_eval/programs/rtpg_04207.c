int test_func(void) {
    int v0 = 30;
    int v1 = 69;
    int v2 = 42;
    int v3 = 73;
    int v4 = 70;
    int i;
    if (v1 > v0) { v1 = v0; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
