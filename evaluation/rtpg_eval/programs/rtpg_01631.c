int test_func(void) {
    int v0 = 9;
    int v1 = 64;
    int v2 = 66;
    int v3 = 94;
    int v4 = 12;
    int i;
    v1 = v1 + v1;
    v4 = v4 & v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
