int test_func(void) {
    int v0 = 27;
    int v1 = 91;
    int v2 = 82;
    int v3 = 37;
    int v4 = 93;
    int v5 = 64;
    int v6 = 65;
    int i;
    v1 = v1 + v0;
    v0 = v0 * 4;
    v1 = v1 - v5;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v6 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
