int test_func(void) {
    int v0 = 43;
    int v1 = 22;
    int v2 = 71;
    int v3 = 41;
    int v4 = 20;
    int i;
    v3 = v3 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
