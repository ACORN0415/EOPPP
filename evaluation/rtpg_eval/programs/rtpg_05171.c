int __arr_5171[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 28;
    int v2 = 12;
    int v3 = 61;
    int v4 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_5171[i] = v0 + i; }
    v2 = v2 + v1;
    v1 = v1 - v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
