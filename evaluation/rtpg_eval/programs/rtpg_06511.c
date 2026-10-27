int test_func(void) {
    int v0 = 39;
    int v1 = 92;
    int v2 = 31;
    int v3 = 100;
    int v4 = 85;
    int v5 = 68;
    int v6 = 64;
    int v7 = 49;
    int i;
    v2 = v2 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v7;
    return v0;
}
int main(void) { return test_func(); }
