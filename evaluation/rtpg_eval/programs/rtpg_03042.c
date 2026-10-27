int __arr_3042[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 38;
    int v2 = 6;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_3042[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
