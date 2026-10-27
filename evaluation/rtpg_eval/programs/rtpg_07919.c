int __arr_7919[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 17;
    int v2 = 49;
    int v3 = 96;
    int v4 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_7919[i] = v0 + i; }
    v0 = v0 + v4;
    if (v0 > v0) { v0 = v0; }
    int *__p = &v1;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
