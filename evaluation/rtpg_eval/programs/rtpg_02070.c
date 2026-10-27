int __arr_2070[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 57;
    int v2 = 48;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 10; i++) { __arr_2070[i] = v2 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
