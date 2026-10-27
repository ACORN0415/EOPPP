int test_func(void) {
    int v0 = 27;
    int v1 = 83;
    int v2 = 100;
    int v3 = 2;
    int v4 = 68;
    int i;
    v1 = v1 - v4;
    v3 = v3 * 9;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
