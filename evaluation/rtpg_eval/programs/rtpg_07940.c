int __arr_7940[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 0;
    int v2 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_7940[i] = v2 + i; }
    v2 = 80;
    return v0;
}
int main(void) { return test_func(); }
