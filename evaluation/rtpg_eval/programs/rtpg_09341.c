int test_func(void) {
    int v0 = 88;
    int v1 = 3;
    int v2 = 88;
    int v3 = 43;
    int v4 = 10;
    int v5 = 24;
    int v6 = 59;
    int v7 = 17;
    int i;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
