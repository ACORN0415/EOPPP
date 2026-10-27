int __arr_85[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 67;
    int v2 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_85[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    enum __Color { __RED, __GREEN, __BLUE };
    enum __Color __c = __RED;
    v0 = (int)__c;
    return v0;
}
int main(void) { return test_func(); }
