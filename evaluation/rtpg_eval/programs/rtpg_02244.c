int test_func(void) {
    int v0 = 59;
    int v1 = 85;
    int v2 = 99;
    int v3 = 34;
    int v4 = 42;
    int i;
    v1 = v1 - v0;
    v2 = v2 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
