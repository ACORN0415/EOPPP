int __arr_4607[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 94;
    int v2 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_4607[i] = v0 + i; }
    v2 = v2 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v2 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
