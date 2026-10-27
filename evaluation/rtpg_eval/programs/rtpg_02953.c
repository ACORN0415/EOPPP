int test_func(void) {
    int v0 = 69;
    int v1 = 79;
    int v2 = 68;
    int v3 = 100;
    int i;
    v3 = v3 - v2;
    v0 = v0 * 4;
    v2 = v2 + v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
