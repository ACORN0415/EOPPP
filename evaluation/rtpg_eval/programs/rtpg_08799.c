int test_func(void) {
    int v0 = 19;
    int v1 = 80;
    int v2 = 76;
    int v3 = 29;
    int v4 = 7;
    int v5 = 61;
    int v6 = 61;
    int v7 = 72;
    int i;
    v3 = v3 + v6;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
