int test_func(void) {
    int v0 = 85;
    int v1 = 98;
    int v2 = 8;
    int v3 = 80;
    int v4 = 34;
    int i;
    v2 = 48;
    v1 = v1 - v4;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
