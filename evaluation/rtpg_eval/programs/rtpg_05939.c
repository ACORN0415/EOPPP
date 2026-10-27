int test_func(void) {
    int v0 = 9;
    int v1 = 10;
    int v2 = 77;
    int v3 = 27;
    int v4 = 40;
    int v5 = 70;
    int i;
    v0 = v0 + v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
