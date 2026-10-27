int __arr_7508[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 90;
    int v2 = 8;
    int i;
    v0 = v0 + v1;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_7508[i] = v0 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
