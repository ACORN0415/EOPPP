int __arr_9020[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 55;
    int v2 = 14;
    int v3 = 41;
    int v4 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_9020[i] = v2 + i; }
    v1 = v1 * 9;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
