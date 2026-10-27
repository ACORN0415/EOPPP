int __arr_3135[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 29;
    int v2 = 85;
    int v3 = 65;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 10; i++) { __arr_3135[i] = v2 + i; }
    v2 = v2 + v2;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
