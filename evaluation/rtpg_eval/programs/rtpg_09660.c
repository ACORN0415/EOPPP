int test_func(void) {
    int v0 = 62;
    int v1 = 8;
    int v2 = 29;
    int v3 = 92;
    int v4 = 94;
    int v5 = 85;
    int i;
    v2 = 100;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
