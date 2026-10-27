int __arr_8415[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 74;
    int v2 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_8415[i] = v0 + i; }
    v2 = 54;
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
