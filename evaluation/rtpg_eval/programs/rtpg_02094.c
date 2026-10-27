int test_func(void) {
    int v0 = 10;
    int v1 = 41;
    int v2 = 82;
    int v3 = 86;
    int v4 = 30;
    int v5 = 86;
    int i;
    v0 = v0 + v0;
    v5 = v5 - v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
