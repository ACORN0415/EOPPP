int test_func(void) {
    int v0 = 67;
    int v1 = 36;
    int v2 = 71;
    int v3 = 15;
    int v4 = 45;
    int v5 = 94;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v1;
    }
    v3 = v3 ^ v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
