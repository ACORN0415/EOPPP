int __arr_4491[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 90;
    int v2 = 7;
    int v3 = 34;
    int v4 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_4491[i] = v0 + i; }
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
