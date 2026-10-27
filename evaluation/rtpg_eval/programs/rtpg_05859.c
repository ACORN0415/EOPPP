int test_func(void) {
    int v0 = 26;
    int v1 = 7;
    int v2 = 12;
    int v3 = 48;
    int v4 = 82;
    int v5 = 51;
    int v6 = 36;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v6;
    }
    if (v6 > v3) { v6 = v3; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
