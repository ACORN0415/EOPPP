int __arr_2511[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 53;
    int v2 = 60;
    int v3 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_2511[i] = v3 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
