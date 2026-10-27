int __arr_9301[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 65;
    int v2 = 18;
    int v3 = 91;
    int v4 = 23;
    int v5 = 75;
    int v6 = 43;
    int v7 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_9301[i] = v1 + i; }
    v3 = v3 + v0;
    v6 = 12;
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    v2 = v2 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
