int test_func(void) {
    int v0 = 27;
    int v1 = 46;
    int v2 = 54;
    int v3 = 34;
    int v4 = 73;
    int i;
    v3 = v3 - v0;
    v3 = v3 + v2;
    v2 = v2 * 2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
