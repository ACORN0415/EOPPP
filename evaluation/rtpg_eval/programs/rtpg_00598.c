int __arr_598[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 41;
    int v2 = 79;
    int v3 = 59;
    int v4 = 23;
    int v5 = 30;
    int v6 = 98;
    int v7 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_598[i] = v5 + i; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v7;
    }
    if (v0 > v7) { v0 = v7; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
