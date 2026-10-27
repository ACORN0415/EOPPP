int test_func(void) {
    int v0 = 49;
    int v1 = 17;
    int v2 = 95;
    int v3 = 8;
    int v4 = 31;
    int v5 = 70;
    int v6 = 99;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v6;
    }
    if (v1 > v0) { v1 = v0; }
    v5 = v5 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
