int test_func(void) {
    int v0 = 99;
    int v1 = 52;
    int v2 = 34;
    int i;
    v2 = v2 * 4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
