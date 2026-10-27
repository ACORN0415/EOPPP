int test_func(void) {
    int v0 = 95;
    int v1 = 14;
    int v2 = 36;
    int v3 = 4;
    int v4 = 0;
    int v5 = 51;
    int i;
    v0 = v0 - v3;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v5;
    }
    v2 = 32;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
