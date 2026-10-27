int __arr_3604[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 64;
    int v2 = 26;
    int v3 = 84;
    int v4 = 61;
    int v5 = 50;
    int i;
    for (i = 0; i < 10; i++) { __arr_3604[i] = v0 + i; }
    v2 = v2 - v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
