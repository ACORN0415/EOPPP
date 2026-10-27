int test_func(void) {
    int v0 = 8;
    int v1 = 63;
    int v2 = 93;
    int v3 = 35;
    int v4 = 89;
    int v5 = 76;
    int i;
    v4 = 39;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
