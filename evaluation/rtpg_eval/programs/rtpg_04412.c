int test_func(void) {
    int v0 = 20;
    int v1 = 79;
    int v2 = 93;
    int v3 = 30;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 13; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
