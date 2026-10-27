int __arr_3000[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 92;
    int v2 = 65;
    int v3 = 68;
    int v4 = 14;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_3000[i] = v4 + i; }
    v4 = v4 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v1 = v1 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
