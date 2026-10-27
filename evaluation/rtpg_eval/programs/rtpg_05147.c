int __arr_5147[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 88;
    int v2 = 65;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) { __arr_5147[i] = v2 + i; }
    v0 = v0 + v1;
    return v0;
}
int main(void) { return test_func(); }
