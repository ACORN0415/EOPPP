int test_func(void) {
    int v0 = 46;
    int v1 = 52;
    int v2 = 93;
    int v3 = 57;
    int v4 = 7;
    int v5 = 20;
    int i;
    v5 = v5 + v1;
    v0 = v0 * 6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
