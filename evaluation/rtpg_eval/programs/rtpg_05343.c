int test_func(void) {
    int v0 = 62;
    int v1 = 11;
    int v2 = 100;
    int v3 = 6;
    int v4 = 30;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    v2 = v2 * 10;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
