int __arr_6670[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 30;
    int v2 = 47;
    int v3 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_6670[i] = v1 + i; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
