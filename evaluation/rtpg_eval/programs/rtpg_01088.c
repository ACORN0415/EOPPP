int __arr_1088[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 64;
    int v2 = 38;
    int v3 = 94;
    int v4 = 29;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_1088[i] = v2 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
