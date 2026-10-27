int test_func(void) {
    int v0 = 30;
    int v1 = 29;
    int v2 = 78;
    int v3 = 29;
    int i;
    v2 = v2 * 5;
    v1 = 37;
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
