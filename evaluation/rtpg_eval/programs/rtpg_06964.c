int __arr_6964[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 37;
    int v2 = 7;
    int i;
    v2 = 99;
    v2 = v2 - v0;
    for (i = 0; i < 10; i++) { __arr_6964[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }
