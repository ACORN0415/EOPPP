int __arr_5519[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 20;
    int v2 = 97;
    int v3 = 6;
    int v4 = 39;
    int v5 = 45;
    int v6 = 50;
    int v7 = 85;
    int i;
    for (i = 0; i < 10; i++) { __arr_5519[i] = v7 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
