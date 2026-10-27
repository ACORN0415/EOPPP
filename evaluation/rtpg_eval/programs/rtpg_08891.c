int __arr_8891[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 63;
    int v2 = 42;
    int i;
    for (i = 0; i < 10; i++) { __arr_8891[i] = v0 + i; }
    v2 = v2 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
