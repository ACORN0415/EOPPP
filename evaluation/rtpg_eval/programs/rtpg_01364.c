int __arr_1364[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 8;
    int v2 = 16;
    int v3 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_1364[i] = v1 + i; }
    v3 = v3 * 8;
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v0 = v0 | v3;
    return v0;
}
int main(void) { return test_func(); }
