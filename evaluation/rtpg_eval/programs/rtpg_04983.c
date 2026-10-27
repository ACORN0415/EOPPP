int test_func(void) {
    int v0 = 93;
    int v1 = 44;
    int v2 = 2;
    int v3 = 65;
    int v4 = 18;
    int v5 = 43;
    int v6 = 81;
    int i;
    v0 = 94;
    v2 = v2 + v6;
    v2 = v2 * 10;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
