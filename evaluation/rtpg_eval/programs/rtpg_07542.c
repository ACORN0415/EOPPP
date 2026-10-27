int test_func(void) {
    int v0 = 57;
    int v1 = 26;
    int v2 = 12;
    int v3 = 35;
    int v4 = 30;
    int v5 = 80;
    int v6 = 29;
    int v7 = 5;
    int i;
    if (v2 > v2) { v2 = v2; }
    v1 = v1 * 7;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v3;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
