int test_func(void) {
    int v0 = 99;
    int v1 = 63;
    int v2 = 72;
    int i;
    v2 = v2 + v2;
    if (v0 > v2) { v0 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
