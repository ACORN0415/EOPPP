int __arr_2040[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 49;
    int v2 = 41;
    int v3 = 73;
    int v4 = 67;
    int v5 = 5;
    int v6 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_2040[i] = v5 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v1 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
