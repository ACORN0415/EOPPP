int test_func(void) {
    int v0 = 7;
    int v1 = 16;
    int v2 = 6;
    int v3 = 48;
    int v4 = 85;
    int v5 = 34;
    int v6 = 41;
    int i;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
