int test_func(void) {
    int v0 = 1;
    int v1 = 99;
    int v2 = 81;
    int v3 = 33;
    int v4 = 58;
    int v5 = 94;
    int v6 = 74;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
