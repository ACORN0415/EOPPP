int test_func(void) {
    int v0 = 91;
    int v1 = 56;
    int v2 = 78;
    int v3 = 55;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 11; i++) {
        v3 = v3 + v1;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
