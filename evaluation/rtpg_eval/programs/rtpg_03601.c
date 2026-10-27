int test_func(void) {
    int v0 = 22;
    int v1 = 15;
    int v2 = 53;
    int v3 = 0;
    int v4 = 31;
    int v5 = 14;
    int i;
    v3 = 63;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
