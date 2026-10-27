int test_func(void) {
    int v0 = 67;
    int v1 = 12;
    int v2 = 95;
    int v3 = 5;
    int v4 = 100;
    int v5 = 50;
    int i;
    v0 = 86;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    v3 = v3 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
