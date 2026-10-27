int __arr_4499[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 73;
    int v2 = 18;
    int v3 = 74;
    int i;
    v3 = v3 * 8;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_4499[i] = v2 + i; }
    v1 = v1 ^ v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
