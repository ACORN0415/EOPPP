int __arr_6502[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 57;
    int v2 = 60;
    int v3 = 100;
    int v4 = 64;
    int i;
    v3 = 95;
    v1 = v1 * 8;
    for (i = 0; i < 10; i++) { __arr_6502[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
