int __arr_9154[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 87;
    int v2 = 14;
    int v3 = 51;
    int i;
    for (i = 0; i < 10; i++) { __arr_9154[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v2 = v2 + v3;
    }
    v3 = v3 + v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
