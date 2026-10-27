int __arr_7261[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 50;
    int v2 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_7261[i] = v2 + i; }
    v1 = v1 + v2;
    int *__p = &v2;
    *__p = *__p + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
