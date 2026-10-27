int test_func(void) {
    int v0 = 6;
    int v1 = 98;
    int v2 = 0;
    int v3 = 3;
    int v4 = 77;
    int i;
    v0 = v0 - v4;
    if (v0 > v0) { v0 = v0; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
