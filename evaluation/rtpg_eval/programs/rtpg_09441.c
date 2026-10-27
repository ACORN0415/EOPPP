int test_func(void) {
    int v0 = 73;
    int v1 = 35;
    int v2 = 55;
    int v3 = 3;
    int v4 = 41;
    int v5 = 11;
    int v6 = 50;
    int i;
    v0 = v0 - v2;
    v4 = v4 * 9;
    v6 = 36;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
