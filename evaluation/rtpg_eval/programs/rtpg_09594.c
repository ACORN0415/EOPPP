int test_func(void) {
    int v0 = 63;
    int v1 = 13;
    int v2 = 54;
    int v3 = 27;
    int i;
    v2 = 0;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
