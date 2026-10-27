int test_func(void) {
    int v0 = 42;
    int v1 = 60;
    int v2 = 62;
    int v3 = 29;
    int i;
    v1 = 1;
    v3 = v3 - v1;
    if (v0 > v1) { v0 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
