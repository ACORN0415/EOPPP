int test_func(void) {
    int v0 = 85;
    int v1 = 37;
    int v2 = 20;
    int v3 = 12;
    int v4 = 89;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = 11;
    v2 = v2 & v3;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
