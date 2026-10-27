int test_func(void) {
    int v0 = 2;
    int v1 = 78;
    int v2 = 70;
    int v3 = 11;
    int i;
    v3 = 98;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    v3 = v3 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
