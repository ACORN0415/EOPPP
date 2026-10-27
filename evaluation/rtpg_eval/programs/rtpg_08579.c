int __arr_8579[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 30;
    int v2 = 35;
    int v3 = 16;
    int v4 = 75;
    int v5 = 88;
    int v6 = 60;
    int i;
    for (i = 0; i < 13; i++) {
        v6 = v6 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_8579[i] = v4 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
