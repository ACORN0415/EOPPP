int test_func(void) {
    int v0 = 46;
    int v1 = 24;
    int v2 = 75;
    int v3 = 30;
    int v4 = 49;
    int v5 = 60;
    int i;
    v2 = v2 * 9;
    v0 = v0 - v4;
    v0 = v0 + v4;
    v3 = v3 % (v4 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
