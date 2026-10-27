int test_func(void) {
    int v0 = 55;
    int v1 = 93;
    int v2 = 59;
    int v3 = 76;
    int v4 = 79;
    int v5 = 46;
    int v6 = 28;
    int v7 = 56;
    int i;
    v6 = v6 + v6;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
