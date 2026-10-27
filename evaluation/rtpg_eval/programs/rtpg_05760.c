int __arr_5760[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 26;
    int v2 = 40;
    int v3 = 34;
    int i;
    v1 = v1 - v0;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_5760[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
