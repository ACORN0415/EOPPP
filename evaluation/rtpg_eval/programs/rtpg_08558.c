int __arr_8558[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 80;
    int v2 = 73;
    int i;
    v1 = 35;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_8558[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
