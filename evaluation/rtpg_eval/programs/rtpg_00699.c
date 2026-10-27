int __arr_699[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 88;
    int v2 = 25;
    int v3 = 38;
    int v4 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_699[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v3 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
