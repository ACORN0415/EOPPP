int test_func(void) {
    int v0 = 80;
    int v1 = 30;
    int v2 = 56;
    int v3 = 70;
    int v4 = 47;
    int v5 = 64;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v0;
    }
    if (v5 > v5) { v5 = v5; }
    v0 = v0 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
