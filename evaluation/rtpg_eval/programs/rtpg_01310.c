int test_func(void) {
    int v0 = 10;
    int v1 = 93;
    int v2 = 44;
    int v3 = 88;
    int i;
    v0 = v0 - v1;
    v1 = 54;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
