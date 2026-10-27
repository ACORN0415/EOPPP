int __arr_6424[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 68;
    int v2 = 42;
    int v3 = 81;
    int v4 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_6424[i] = v1 + i; }
    v1 = v1 + v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
