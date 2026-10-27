int test_func(void) {
    int v0 = 54;
    int v1 = 71;
    int v2 = 56;
    int v3 = 1;
    int i;
    v0 = v0 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
