int __arr_6573[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 98;
    int v2 = 56;
    int v3 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_6573[i] = v2 + i; }
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
