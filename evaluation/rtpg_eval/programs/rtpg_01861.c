int test_func(void) {
    int v0 = 81;
    int v1 = 59;
    int v2 = 11;
    int v3 = 93;
    int v4 = 21;
    int v5 = 17;
    int i;
    v1 = v1 - v3;
    v0 = 76;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    return v0;
}
int main(void) { return test_func(); }
