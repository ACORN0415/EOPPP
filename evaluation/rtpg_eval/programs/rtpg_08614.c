int test_func(void) {
    int v0 = 58;
    int v1 = 49;
    int v2 = 81;
    int v3 = 24;
    int v4 = 4;
    int i;
    v4 = v4 * 4;
    v4 = v4 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
