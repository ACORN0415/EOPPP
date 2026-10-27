int test_func(void) {
    int v0 = 86;
    int v1 = 79;
    int v2 = 33;
    int v3 = 49;
    int v4 = 90;
    int v5 = 23;
    int v6 = 78;
    int i;
    v3 = v3 * 9;
    if (v2 > v1) { v2 = v1; }
    v4 = v4 + v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
