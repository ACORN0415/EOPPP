int test_func(void) {
    int v0 = 85;
    int v1 = 11;
    int v2 = 72;
    int v3 = 65;
    int v4 = 80;
    int v5 = 65;
    int i;
    v2 = v2 * 10;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
