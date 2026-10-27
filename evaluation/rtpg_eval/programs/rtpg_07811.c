int test_func(void) {
    int v0 = 56;
    int v1 = 71;
    int v2 = 42;
    int i;
    v2 = v2 - v1;
    if (v2 > v2) { v2 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
