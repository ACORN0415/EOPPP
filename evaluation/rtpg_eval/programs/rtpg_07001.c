int __arr_7001[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 60;
    int v2 = 30;
    int v3 = 95;
    int v4 = 64;
    int v5 = 38;
    int i;
    for (i = 0; i < 10; i++) { __arr_7001[i] = v5 + i; }
    if (v2 > v4) { v2 = v4; }
    v4 = 44;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
