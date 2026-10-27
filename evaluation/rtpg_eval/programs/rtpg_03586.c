int __arr_3586[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 100;
    int v2 = 90;
    int v3 = 91;
    int v4 = 1;
    int i;
    v4 = 59;
    v4 = v4 + v1;
    for (i = 0; i < 10; i++) { __arr_3586[i] = v4 + i; }
    return v0;
}
int main(void) { return test_func(); }
