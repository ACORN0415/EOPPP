int __arr_9205[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 21;
    int v2 = 35;
    int v3 = 15;
    int i;
    for (i = 0; i < 10; i++) { __arr_9205[i] = v2 + i; }
    v1 = 10;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
