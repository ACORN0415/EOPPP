int test_func(void) {
    int v0 = 83;
    int v1 = 26;
    int v2 = 60;
    int v3 = 13;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v2;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
