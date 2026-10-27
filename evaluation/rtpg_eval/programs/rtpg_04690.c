int test_func(void) {
    int v0 = 46;
    int v1 = 63;
    int v2 = 41;
    int v3 = 100;
    int i;
    v1 = v1 * 7;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
