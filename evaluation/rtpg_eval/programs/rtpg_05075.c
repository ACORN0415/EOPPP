int __arr_5075[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 16;
    int v2 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_5075[i] = v2 + i; }
    v0 = 42;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
