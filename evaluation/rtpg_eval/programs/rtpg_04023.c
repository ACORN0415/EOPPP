int __arr_4023[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 56;
    int v2 = 19;
    int v3 = 22;
    int v4 = 95;
    int v5 = 48;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_4023[i] = v1 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
