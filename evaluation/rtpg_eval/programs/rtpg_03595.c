int __arr_3595[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 96;
    int v2 = 92;
    int i;
    v0 = v0 - v2;
    v2 = v2 * 4;
    for (i = 0; i < 10; i++) { __arr_3595[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
