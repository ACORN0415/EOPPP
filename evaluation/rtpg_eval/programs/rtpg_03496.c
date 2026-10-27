int test_func(void) {
    int v0 = 2;
    int v1 = 32;
    int v2 = 88;
    int i;
    if (v0 > v2) { v0 = v2; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
