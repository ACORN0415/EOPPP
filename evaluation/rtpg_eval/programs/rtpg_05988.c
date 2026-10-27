int __arr_5988[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 96;
    int v2 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_5988[i] = v1 + i; }
    v0 = 21;
    v0 = v0 + v1;
    return v0;
}
int main(void) { return test_func(); }
