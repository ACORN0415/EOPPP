int test_func(void) {
    int v0 = 57;
    int v1 = 97;
    int v2 = 55;
    int v3 = 58;
    int v4 = 51;
    int v5 = 45;
    int v6 = 19;
    int v7 = 40;
    int i;
    v6 = 43;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
