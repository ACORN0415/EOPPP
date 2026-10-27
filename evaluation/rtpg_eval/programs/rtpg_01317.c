int test_func(void) {
    int v0 = 5;
    int v1 = 76;
    int v2 = 56;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v0;
    }
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
