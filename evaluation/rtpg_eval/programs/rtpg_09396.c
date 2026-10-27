int __arr_9396[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 12;
    int v2 = 24;
    int v3 = 3;
    int v4 = 96;
    int v5 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_9396[i] = v3 + i; }
    v3 = v3 - v0;
    v3 = 28;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
