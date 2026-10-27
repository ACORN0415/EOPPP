int __arr_7503[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 90;
    int v2 = 76;
    int v3 = 9;
    int v4 = 64;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 10; i++) { __arr_7503[i] = v0 + i; }
    for (i = 0; i < 15; i++) {
        v3 = v3 + v2;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
