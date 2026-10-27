int test_func(void) {
    int v0 = 63;
    int v1 = 28;
    int v2 = 53;
    int v3 = 49;
    int v4 = 77;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
