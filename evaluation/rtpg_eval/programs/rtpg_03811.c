int test_func(void) {
    int v0 = 16;
    int v1 = 99;
    int v2 = 23;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    if (v2 > v0) { v2 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
