int test_func(void) {
    int v0 = 32;
    int v1 = 2;
    int v2 = 51;
    int v3 = 85;
    int v4 = 28;
    int v5 = 74;
    int v6 = 36;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v4;
    }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
