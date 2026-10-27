int test_func(void) {
    int v0 = 85;
    int v1 = 80;
    int v2 = 65;
    int v3 = 28;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v1;
    }
    if (v0 > v0) { v0 = v0; }
    v2 = v2 * 6;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
