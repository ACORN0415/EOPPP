int test_func(void) {
    int v0 = 74;
    int v1 = 88;
    int v2 = 26;
    int v3 = 94;
    int v4 = 93;
    int v5 = 30;
    int v6 = 38;
    int i;
    v3 = 65;
    v6 = v6 + v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
