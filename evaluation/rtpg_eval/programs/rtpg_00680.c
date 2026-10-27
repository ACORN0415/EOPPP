int test_func(void) {
    int v0 = 55;
    int v1 = 78;
    int v2 = 7;
    int v3 = 77;
    int i;
    v2 = 77;
    v1 = v1 + v3;
    return v0;
}
int main(void) { return test_func(); }
