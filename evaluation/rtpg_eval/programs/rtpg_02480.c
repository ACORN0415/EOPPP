int __arr_2480[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 61;
    int v2 = 65;
    int v3 = 65;
    int v4 = 59;
    int v5 = 70;
    int v6 = 71;
    int i;
    for (i = 0; i < 10; i++) { __arr_2480[i] = v5 + i; }
    v1 = 45;
    v3 = v3 - v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
