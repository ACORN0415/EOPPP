int test_func(void) {
    int v0 = 58;
    int v1 = 87;
    int v2 = 40;
    int v3 = 63;
    int i;
    v0 = v0 * 3;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
