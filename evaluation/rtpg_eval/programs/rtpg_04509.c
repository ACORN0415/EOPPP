int __arr_4509[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 8;
    int v2 = 41;
    int v3 = 94;
    int v4 = 96;
    int v5 = 48;
    int v6 = 3;
    int v7 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_4509[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
