int __arr_3225[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 23;
    int v2 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_3225[i] = v0 + i; }
    v1 = 50;
    return v0;
}
int main(void) { return test_func(); }
