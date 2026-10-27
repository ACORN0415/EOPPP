int test_func(void) {
    int v0 = 56;
    int v1 = 18;
    int v2 = 81;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v1;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
