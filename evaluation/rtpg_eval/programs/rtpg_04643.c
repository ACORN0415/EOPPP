int test_func(void) {
    int v0 = 16;
    int v1 = 68;
    int v2 = 100;
    int i;
    v2 = v2 * 5;
    v2 = v2 - v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
