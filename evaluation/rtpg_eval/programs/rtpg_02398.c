int test_func(void) {
    int v0 = 20;
    int v1 = 6;
    int v2 = 50;
    int v3 = 63;
    int v4 = 41;
    int v5 = 61;
    int i;
    v5 = v5 - v3;
    v0 = 72;
    v1 = v1 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 / (v1 + 1);
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v4 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
