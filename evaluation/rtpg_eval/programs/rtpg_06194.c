int test_func(void) {
    int v0 = 28;
    int v1 = 49;
    int v2 = 23;
    int v3 = 63;
    int v4 = 77;
    int v5 = 33;
    int v6 = 40;
    int i;
    for (i = 0; i < 11; i++) {
        v6 = v6 + v5;
    }
    v4 = v4 + v5;
    v6 = v6 / (v3 + 1);
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
