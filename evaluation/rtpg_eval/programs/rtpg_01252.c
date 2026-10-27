int test_func(void) {
    int v0 = 100;
    int v1 = 12;
    int v2 = 27;
    int i;
    v1 = v1 * 3;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v2;
    }
    v1 = 48;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
