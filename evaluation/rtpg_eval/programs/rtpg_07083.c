int __arr_7083[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 70;
    int v2 = 21;
    int i;
    v1 = v1 + v1;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_7083[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
