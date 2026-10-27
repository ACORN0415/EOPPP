int test_func(void) {
    int v0 = 27;
    int v1 = 78;
    int v2 = 48;
    int i;
    if (v1 > v0) { v1 = v0; }
    v0 = v0 - v2;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    v0 = v0 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
