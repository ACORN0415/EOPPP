int test_func(void) {
    int v0 = 100;
    int v1 = 1;
    int v2 = 18;
    int v3 = 85;
    int v4 = 5;
    int v5 = 86;
    int i;
    v5 = 31;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
