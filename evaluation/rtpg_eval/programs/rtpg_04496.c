int test_func(void) {
    int v0 = 49;
    int v1 = 3;
    int v2 = 77;
    int v3 = 96;
    int v4 = 46;
    int v5 = 47;
    int v6 = 25;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v5;
    }
    v3 = v3 + v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v6 = v6 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
