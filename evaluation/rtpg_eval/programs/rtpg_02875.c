int test_func(void) {
    int v0 = 68;
    int v1 = 91;
    int v2 = 75;
    int v3 = 92;
    int v4 = 31;
    int v5 = 11;
    int v6 = 6;
    int i;
    for (i = 0; i < 6; i++) {
        v6 = v6 + v1;
    }
    if (v4 > v5) { v4 = v5; }
    v6 = v6 + v6;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
