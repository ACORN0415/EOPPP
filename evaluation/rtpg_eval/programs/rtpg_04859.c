int test_func(void) {
    int v0 = 21;
    int v1 = 9;
    int v2 = 57;
    int v3 = 13;
    int v4 = 96;
    int v5 = 23;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v1;
    }
    v3 = 54;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
