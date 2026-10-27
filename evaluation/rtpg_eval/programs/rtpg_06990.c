int __arr_6990[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 3;
    int v2 = 54;
    int v3 = 33;
    int v4 = 81;
    int v5 = 27;
    int v6 = 28;
    int v7 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_6990[i] = v6 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
